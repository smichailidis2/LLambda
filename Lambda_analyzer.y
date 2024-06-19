%{

    #include <stdio.h>
    #include <stdlib.h>
    #include "cgen.h"
    #include <string.h>
    #include <stdlib.h>
    #include "lambdalib.h"
    extern int yylex(void);
    extern int line_num;

    const char* c_prologue = "\n#include <string.h>\n#include <math.h>\n#include <stdio.h>\n#include <stdlib.h>\n#include \"lambdalib.h\"\n";




    //https://www.geeksforgeeks.org/c-program-replace-word-text-another-given-word/ 
    char* replaceWord(const char* s, const char* oldW, const char* newW) 
    { 
      char* result; 
      int i, cnt = 0; 
      int newWlen = strlen(newW); 
      int oldWlen = strlen(oldW); 
  
      // Counting the number of times old word 
      // occur in the string 
      for (i = 0; s[i] != '\0'; i++) { 
          if (strstr(&s[i], oldW) == &s[i]) { 
              cnt++; 
  
              // Jumping to index after the old word. 
              i += oldWlen - 1; 
          } 
      } 
  
      // Making new string of enough length 
      result = (char*)malloc(i + cnt * (newWlen - oldWlen) + 1); 
  
      i = 0; 
      while (*s) { 
          // compare the substring with the result 
          if (strstr(s, oldW) == s) { 
              strcpy(&result[i], newW); 
              i += newWlen; 
              s += oldWlen; 
          } 
          else
              result[i++] = *s++; 
      } 
  
      result[i] = '\0'; 
      return result; 
    } 

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
%token KW_VOID

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
%type <strng> function_body
%type <strng> function_arg
%type <strng> args

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
%type <strng> array_assignement


%right ADD_ASSIGN SUB_ASSIGN MULT_ASSIGN DIV_ASSIGN MOD_ASSIGN ASSIGN SIMPLE_ASSIGN
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

input : PROGRAM_START {printf("%s\n%s",c_prologue,$1);};
//input : PROGRAM_START {puts(c_prologue,$1);};
PROGRAM_START: pdeclare {$$ = template("%s",$1);};



pdeclare: code s_main_s code {$$ = template("%s\n%s\n%s",$1,$2,$3);};

code: %empty {$$ = template("\n");}
    | code constant_declaration ';'  {$$ = template("%s;\n%s",$1,$2);}
    | code function_declaration ';'  {$$ = template("%s;\n%s",$1,$2);}
    | code variable_declaration ';'  {$$ = template("%s;\n%s",$1,$2);}
    ;


// <<<<<<<<<<<<<<<<<<<<<<<<< MAIN >>>>>>>>>>>>>>>>>>>>>>>>>>>>
s_main_s: KW_DEF KW_MAIN '('')' ':' main_body KW_ENDDEF ';' {$$ = template("int main(){\n%s\n}",$6);};

main_body: commands {$$ = $1;};

// -----------------------------------------------------------

constant_declaration: KW_CONST TK_IDENTIFIER SIMPLE_ASSIGN TK_NUMBER  ':' KW_INTEGER  {$$ = template("const int %s = %s",$2,$4);}
                    | KW_CONST TK_IDENTIFIER SIMPLE_ASSIGN TK_REAL    ':' KW_SCALAR   {$$ = template("const double %s = %s",$2,$4);}
                    | KW_CONST TK_IDENTIFIER SIMPLE_ASSIGN TK_STRING  ':' KW_STR      {$$ = template("const StringType %s = %s",$2,$4);}
                    | KW_CONST TK_IDENTIFIER SIMPLE_ASSIGN KW_TRUE    ':' KW_BOOL     {$$ = template("const int %s = 1",$2);}
                    | KW_CONST TK_IDENTIFIER SIMPLE_ASSIGN KW_FALSE   ':' KW_BOOL     {$$ = template("const int %s = 0",$2);}
                    ;


function_declaration: KW_DEF function_header function_body KW_ENDDEF  {$$ = template("%s{\n%s\n}\n",$2,$3);};

variable_declaration: TK_IDENTIFIER ':' data_type  {$$ = template("%s %s" ,$3,$1);}
                    | array_var     ':' data_type  {$$ = template("%s %s" ,$3,$1);}
                    | TK_IDENTIFIER ',' variable_declaration {$$ = template("%s, %s",$3,$1);}
                    | array_var     ',' variable_declaration {$$ = template("%s, %s",$3,$1);}
                    ;


array_var : TK_IDENTIFIER brackets {$$ = template("%s%s;\n" ,$1,$2);};

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
brackets : '[' expression ']'            {$$ = template( "[%s]", $2);}
         | brackets '[' expression ']'   {$$ = template( "%s[%s]", $1, $3);}
         | '[' ']'                       {$$ = template( "[]");}
         ;  




// ********************* commands (statements) *********************

commands: command commands {$$ = template("%s\n%s\n", $1,$2);}
        | command          {$$ = $1;}
        ;

command: 
  ';'   {$$ = template(";");}
| variable_assignement  ';'                    {$$ = template("%s;\n",$1);}
| variable_declaration  ';'                    {$$ = template("%s;\n",$1);}
| constant_declaration  ';'                    {$$ = template("%s;\n",$1);}
| array_assignement     ';'                    {$$ = template("%s;\n",$1);}
| if_statement  ';'                         {$$ = template("%s\n",$1);}
| for_statement ';'                         {$$ = template("%s\n",$1);}                   
| compound_array_i ';'                      {$$ = template("%s;\n",$1);}
| compound_array_a ';'                      {$$ = template("%s;\n",$1);}
| while_statement  ';'                      {$$ = template("%s\n",$1);}
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
;


variable_assignement: TK_IDENTIFIER SIMPLE_ASSIGN expression {$$ = template("%s = %s;\n",$1,$3);};
array_assignement:    TK_IDENTIFIER brackets SIMPLE_ASSIGN expression  {$$ = template("%s%s = %s;\n",$1,$2,$4);};


if_statement: KW_IF '(' expression ')' ':' commands KW_ENDIF                       {$$ = template("if(%s){\n%s\n}\n",$3,$6);}
            | KW_IF '(' expression ')' ':' commands KW_ELSE ':' commands KW_ENDIF  {$$ = template("if(%s){\n%s\n} else{\n%s\n}\n",$3,$6,$9);}
            ;

//                $1         $2      $3   $4     $5     $6      $7    $8     $9    $10 $11   $12       $13   $14
//               for     (int) i     in    [    start    :     stop    :    step     ]   : commands   endfor  ;     (default step = 1)
for_statement: KW_FOR TK_IDENTIFIER KW_IN '[' expression ':' expression ']' ':' commands KW_ENDFOR  {$$ = template("for(int %s = (%s); %s < (%s); %s++){\n%s\n}\n" ,$2,$5,$2,$7,$2,$10);}
             | KW_FOR TK_IDENTIFIER KW_IN '[' expression ':' expression ':' expression ']' ':' commands KW_ENDFOR  {$$ = template("for(int %s = (%s); %s < (%s); %s+=(%s)){\n%s\n}\n" ,$2,$5,$2,$7,$2,$9,$12);}
             ;

//                COMPOUND ARRAY ON ARRAY VALUES
//                      $1      $2     $3     $4       $5         $6         $7     $8      $9          $10      $11      $12   $13  $14    $15
//                    my_array  :=      [ expression   for       element     :     type     in       old_array   of      size     ]   :   newtype
compound_array_a: TK_IDENTIFIER ASSIGN '[' expression KW_FOR  TK_IDENTIFIER ':'  data_type KW_IN  TK_IDENTIFIER KW_OF expression ']' ':' data_type {$$ = template("%s* %s = (%s*)malloc(%s * sizeof(%s));\nfor(int aRrAy_i999 = 0; aRrAy_i999 < %s; ++aRrAy_i999){\n%s[aRrAy_i999] = %s;\n}\n",$15,$1,$15,$12,$15,$12,$1,replaceWord($4,$6,template("%s[aRrAy_i999]",$10)));};//TODO


//                 COMPOUND ARRAY ON INTEGER VALUES
//                    $1        $2     $3     $4         $5        $6      $7     $8      $9  $10    $11
//                  my_array    :=      [ expression    for      element    :     size     ]   :     type;
compound_array_i: TK_IDENTIFIER ASSIGN '[' expression KW_FOR TK_IDENTIFIER ':' expression ']' ':' data_type {$$ = template("%s* %s = (%s*)malloc(%s * sizeof(%s));\nfor(int %s = 0; %s < %s; ++%s){\n%s[%s] = %s;\n}\n",$11,$1,$11,$8,$11,$6,$6,$8,$6,$1,$6,$4);};


while_statement: KW_WHILE '(' expression ')' ':' commands KW_ENDWHILE  {$$ = template("while(%s){\n%s\n}\n",$3,$6);};

// ==================================== functions ====================================

// for function call
function_arg: expression {$$ = $1;}
| function_arg ',' expression {$$ = template( "%s, %s", $1, $3);}
;

// function: DEF HEADER BODY ENDDEF
function_header: TK_IDENTIFIER '(' args ')' '-''>' data_type ':' {$$ = template("%s %s(%s)",$7,$1,$3);}
               | TK_IDENTIFIER '('      ')' '-''>' data_type ':' {$$ = template("%s %s()",$6,$1);}
               | TK_IDENTIFIER '(' args ')' '-''>' KW_VOID ':' {$$ = template("void %s(%s)",$1,$3);}
               | TK_IDENTIFIER '('      ')' '-''>' KW_VOID ':' {$$ = template("void %s()",$1);}
               | TK_IDENTIFIER '(' args ')' ':' {$$ = template("void %s(%s)",$1,$3);}
               | TK_IDENTIFIER '(' ')' ':'      {$$ = template("void %s()",$1);}
               ;
function_body: commands {$$ = template("%s\n",$1);};//TODO?

args:  TK_IDENTIFIER  ':' data_type                   {$$ = template("%s %s",$3,$1);}
    |  TK_IDENTIFIER  ':' data_type ',' args          {$$ = template("%s %s, %s",$3,$1,$5);}
    |  TK_IDENTIFIER  '['']'  ':' data_type             {$$ = template("%s* %s",$5,$1);}
    |  TK_IDENTIFIER  '['']'  ':' data_type  ',' args   {$$ = template("%s* %s, %s",$5,$1,$7);}
    ;






// -=-=-=-=-=-=-=-=--=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-






%%
int main () {
  if ( yyparse() == 1 ) {
    printf("at token %s\nRejected!\n",yylval.strng);
  }
}