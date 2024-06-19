%{

    #include <stdio.h>
    #include <stdlib.h>
    #include "cgen.h"
    #include <string.h>
    #include <stdlib.h>

    extern int yylex(void);
    extern int line_num;

    const char* c_prologue = 
    "#include \"fclib.h\"\n#include \"math.h\"\n#include <stdio.h>\n"
    "\n"
    ;

%}

%union
{
  char* strng;
}



// ------- TOKENS -------
%token <strng> TK_IDENTIFIER 
%token <strng> TK_CHAR
%token <strng> TK_STRING
%token <strng> TK_REAL
%token <strng> TK_DIGIT
%token <strng> TK_NUMBER
%token <strng> TK_DECIMAL

%token KW_MAIN

%token <strng> KW_INTEGER 
%token <strng> KW_SCALAR 
%token <strng> KW_STR
%token <strng> KW_BOOL
%token <strng> KW_TRUE
%token <strng> KW_FALSE
%token KW_CONST
%token KW_IF
%token KW_ELSE
%token KW_ENDIF
%token KW_FOR
%token KW_IN
%token KW_ENDFOR
%token KW_WHILE
%token KW_ENDWHILE
%token KW_BREAK
%token KW_RETURN
%token KW_CONTINUE
%token KW_AND
%token KW_OR
%token KW_OF

%token KW_DEF
%token KW_ENDDEF
// ----------------------

%start input

%type <strng> PROGRAM_START
%type <strng> code

// ========= MAIN =========
%type <strng> s_main_s
%type <strng> main_body
%type <strng> pdeclare

// declartaions
%type <strng> constant_declaration
%type <strng> function_declaration
%type <strng> variable_declaration

// ========================

%type <strng> data_type
%type <strng> brackets
%type <strng> array_var

// functions
%type <strng> function_header
//%type <strng> function_header_contents //TODO?
%type <strng> function_body
//%type <strng> function_body_contents //TODO?
%type <strng> function_arg

// expressions
%type <strng> expression
%type <strng> logical_expression
%type <strng> math_expression

// statements
%type <strng> command
%type <strng> commands
%type <strng> if_statement
%type <strng> for_statement
%type <strng> while_statement
%type <strng> compound_array_i
%type <strng> compound_array_a
%type <strng> variable_assignement

%right ADD_ASSIGN SUB_ASSIGN MULT_ASSIGN DIV_ASSIGN MOD_ASSIGN ASSIGN '='
%left KW_OR LOR
%left KW_AND LAND
%right '!' KW_NOT
%left NEQ EQ
%left LEQ GEQ '<' '>'
%left '*' '/' MOD KW_MOD
%left '-' '+'
%right POW
%left '.' '(' ')' '[' ']'


%%

input : PROGRAM_START {puts(c_prologue);};

PROGRAM_START: pdeclare {$$ = template("%s",$1);};

pdeclare: code s_main_s code {$$ = template("%s\n%s\n%s",$1,$2,$3);};

code: %empty {$$ = template("\n");}
    | code constant_declaration   {$$ = template("%s\n%s",$1,$2);}
    | code function_declaration   {$$ = template("%s\n%s",$1,$2);}
    | code variable_declaration   {$$ = template("%s\n%s",$1,$2);}
    ;


// <<<<<<<<<<<<<<<<<<<<<<<<< MAIN >>>>>>>>>>>>>>>>>>>>>>>>>>>>
s_main_s: KW_DEF KW_MAIN '('')' ':' main_body KW_ENDDEF {$$ = template("int main(){\n%s\n}",$6);};

main_body: commands {$$ = $1;};

// -----------------------------------------------------------

constant_declaration: KW_CONST TK_IDENTIFIER '=' TK_NUMBER  ':' KW_INTEGER {$$ = template("const int %s = %s;\n;",$2,$4);}
                    | KW_CONST TK_IDENTIFIER '=' TK_DECIMAL ':' KW_SCALAR  {$$ = template("const double %s = %s;\n;",$2,$4);}
                    | KW_CONST TK_IDENTIFIER '=' TK_STRING  ':' KW_STR     {$$ = template("const StringType %s = %s;\n;",$2,$4);}
                    | KW_CONST TK_IDENTIFIER '=' KW_TRUE    ':' KW_BOOL    {$$ = template("const int %s = 1;\n;",$2);}
                    | KW_CONST TK_IDENTIFIER '=' KW_FALSE   ':' KW_BOOL    {$$ = template("const int %s = 0;\n;",$2);}
                    ;


function_declaration: KW_DEF function_header function_body KW_ENDDEF {$$ = template("%s{\n%s\n}\n",$2,$3);};

variable_declaration: TK_IDENTIFIER ':' data_type ';' {$$ = template("%s %s;\n" ,$3,$1);}
                    | TK_IDENTIFIER ',' variable_declaration {$$ = template("%s %s;\n%s");}
                    | array_var
                    ;


array_var : TK_IDENTIFIER brackets ':' data_type ';' {$$ = template("%s %s%s;\n" ,$4,$1,$2);};

// ^^^^^^^^^^^^^^^^^^^^^^^ DATA TYPES ^^^^^^^^^^^^^^^^^^^^^^^


data_type : KW_INTEGER {$$ = template("int");}
          | KW_BOOL    {$$ = template("int");}
          | KW_SCALAR  {$$ = template("double");}
          | KW_STR     {$$ = template("StringType");}
          ;



// ----------------------------- expressions -----------------------------
expression:
  TK_NUMBER                                 {$$ = template("%s", $1);}
| TK_REAL                                   {$$ = template("%s", $1);}
| TK_CHAR                                   {$$ = template("%s", $1);}
| TK_STRING                                 {$$ = template("%s", $1);}
| TK_DIGIT                                  {$$ = template("%s", $1);}
| TK_DECIMAL                                {$$ = template("%s", $1);}
| TK_IDENTIFIER                             {$$ = template("%s", $1);}
| TK_IDENTIFIER '(' function_arg ')'        {$$ = template("%s(%s)", $1, $3);}
| TK_IDENTIFIER '(' ')'                     {$$ = template("%s()", $1);}
| TK_IDENTIFIER brackets                    {$$ = template("%s%s", $1, $2);}
| KW_TRUE                                   {$$ = template("1");}
| KW_FALSE                                  {$$ = template("0");}
| '(' expression ')'                        {$$ = template("(%s)",$2);}
| math_expression                           {$$ = $1;}
| logical_expression                        {$$ = $1;}
| '+' expression                            {$$ = template("+%s", $2);}
| '-' expression                            {$$ = template("-%s", $2);}
;

math_expression:
  expression POW expression         {$$ = template("pow(%s,%s)", $1,$3);}
| expression '+' expression         {$$ = template("%s+%s", $1,$3);}
| expression '-' expression         {$$ = template("%s-%s", $1,$3);}
| expression '*' expression         {$$ = template("%s*%s", $1,$3);}
| expression '/' expression         {$$ = template("%s/%s", $1,$3);}
| expression MOD expression         {$$ = template("%s %% %s", $1,$3);}
| expression KW_MOD expression      {$$ = template("%s %% %s", $1,$3);}
;

logical_expression:
  expression EQ expression          {$$ = template("%s==%s",$1,$3);}
| expression LEQ expression         {$$ = template("%s<=%s",$1,$3);}
| expression GEQ expression         {$$ = template("%s>=%s",$1,$3);}
| expression NEQ expression         {$$ = template("%s!=%s",$1,$3);}
| expression '<' expression         {$$ = template("%s<%s",$1,$3);}
| expression '>' expression         {$$ = template("%s>%s",$1,$3);}
| expression LAND expression        {$$ = template("%s && %s",$1,$3);}
| expression KW_AND expression      {$$ = template("%s && %s",$1,$3);}
| expression LOR expression         {$$ = template("%s || %s",$1,$3);}
| expression KW_OR expression       {$$ = template("%s || %s",$1,$3);}
| '!' expression                    {$$ = template("!%s",$2);}
| KW_NOT expression                 {$$ = template("!%s",$2);}
;
// -----------------------------------------------------------------------

// array and elements for arrays or matrices
brackets : '[' TK_NUMBER ']'            {$$ = template( "[%s]", $2);}
         | brackets '[' TK_NUMBER ']'   {$$ = template( "%s[%s]", $1, $3);}
         | '[' ']'                      {$$ = template( "[]");}
         ;  




// ********************* commands (statements) *********************

commands: command commands {$$ = template("%s\n%s\n", $1,$2);}
        | command          {$$ = $1;}
        ;

command: 
  ';'   {$$ = template(";");}
| variable_assignement                      {$$ = $1;}
| TK_IDENTIFIER brackets '=' expression ';' {$$ = template("%s%s = %s;\n",$1,$2,$4);}
| if_statement ';'                          {$$ = template("%s;\n",$1);}
| for_statement ';'                         {$$ = template("%s;\n",$1);}                   
| compound_array_i ';'                      {$$ = template("%s;\n",$1);}
| compound_array_a ';'                      {$$ = template("%s;\n",$1);}
| while_statement ';'                       {$$ = template("%s;\n",$1);}
| KW_BREAK ';'                              {$$ = template("break;");}
| KW_CONTINUE ';'                           {$$ = template("continue;");}
| KW_RETURN ';'                             {$$ = template("return;");}
| KW_RETURN expression ';'                  {$$ = template("return %s;",$2);}
| TK_IDENTIFIER '(' function_arg ')' ';'    {$$ = template("%s(%s);\n",$1,$3);}
| TK_IDENTIFIER '(' ')' ';'                 {$$ = template("%s()\n",$1);}
| TK_IDENTIFIER ADD_ASSIGN TK_IDENTIFIER ';'      {$$ = template("%s += %s;\n",$1,$3);}
| TK_IDENTIFIER SUB_ASSIGN TK_IDENTIFIER ';'      {$$ = template("%s -= %s;\n",$1,$3);}
| TK_IDENTIFIER MULT_ASSIGN TK_IDENTIFIER ';'     {$$ = template("%s *= %s;\n",$1,$3);}
| TK_IDENTIFIER DIV_ASSIGN TK_IDENTIFIER ';'      {$$ = template("%s /= %s;\n",$1,$3);}
| TK_IDENTIFIER MOD_ASSIGN TK_IDENTIFIER ';'      {$$ = template("%s %%= %s;\n",$1,$3);}
// TODO?| KW_CONST TK_IDENTIFIER '=' 
;


variable_assignement: TK_IDENTIFIER '=' expression ';' {$$ = template("%s = %s;\n",$1,$3);};


if_statement: KW_IF '(' logical_expression ')' ':' commands KW_ENDIF                      {$$ = template("if(%s){\n%s\n}\n",$3,$6);}
            | KW_IF '(' logical_expression ')' ':' commands KW_ELSE ':' commands KW_ENDIF {$$ = template("if(%s){\n%s\n} else{\n%s\n}\n",$3,$6,$9);}
            ;

//                $1         $2      $3   $4     $5     $6      $7    $8     $9     $10   $11       $12
//               for     (int) i     in    [    start    :     stop    :    step     ]  commands   endfor;     (default step = 1)
for_statement: KW_FOR TK_IDENTIFIER KW_IN '[' TK_NUMBER ':' TK_NUMBER ']' commands KW_ENDFOR {$$ = template("for(%s = %s; %s <= %s; %s++){\n%s\n}\n" ,$2,$5,$2,$7,$2,$9);}
             | KW_FOR TK_IDENTIFIER KW_IN '[' TK_NUMBER ':' TK_NUMBER ':' TK_NUMBER ']' commands KW_ENDFOR {$$ = template("for(%s = %s; %s <= %s; %s+=%s){\n%s\n}\n" ,$2,$5,$2,$7,$2,$9,$11);}
             ;

//                COMPOUND ARRAY ON ARRAY VALUES



compound_array_a: TK_IDENTIFIER ASSIGN '[' ']' {$$ = template(";\n");};//TODO


//                 COMPOUND ARRAY ON INTEGER VALUES
//                    $1        $2     $3     $4         $5        $6      $7     $8      $9  $10    $11
//                  my_array    :=      [ expression    for      element    :     size     ]   :     type;
compound_array_i: TK_IDENTIFIER ASSIGN '[' expression KW_FOR TK_IDENTIFIER ':' expression ']' ':' data_type {$$ = template("%s* %s = (%s*)malloc(%s * sizeof(%s));\nfor(int %s = 0; %s < %s; ++%s){\n%s[%s] = %s;\n}\n",$11,$1,$11,$8,$11,$6,$6,$8,$6,$1,$6,$4);};

while_statement: KW_WHILE '(' logical_expression ')' commands KW_ENDWHILE {$$ = template("while(%s){\n%s\n}\n",$3,$5);};

// ==================================== functions ====================================

function_arg: expression {$$ = $1;}
| function_arg ',' expression {$$ = template( "%s, %s", $1, $3);}
;


function_header: TK_IDENTIFIER '(' function_arg ')' '-''>' data_type {$$ = template("%s %s(%s)",$7,$1,$3);};//TODO?
function_body: commands {$$ = template("%s\n",$1);};//TODO?






%%
int main () {
  if ( yyparse() == 1 ) {
    printf("at token %s\nRejected!\n",yylval.strng);
  }
}