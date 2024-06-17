%{

    #include <stdio.h>
    #include <stdlib.h>
    #include "cgen.h"
    #include <string.h>
    #include <stdlib.h>

    external int yylex(void);
    external int lineNum;

    /* Opens a memory stream that writes to a dynamically allocated buffer. 
       to build strings in memory. */

    // https://stackoverflow.com/questions/3481157/string-stream-in-c
    void ssopen( sstream* sst ){
        sst -> stream = open_memstream( & sst -> buffer , & sst -> buffsize);
    }

    // Returns the current contents of the memory buffer as a string.
    char* ssvalue(sstream* sst)
    {
        fflush( sst -> stream );
        return  sst -> buffer;
    }

    // closes stream
    void ssclose(sstream* sst)
    {
        fclose( sst -> stream );
    }

    char* cmap(const char* pat, ...)
    {
        sstream S;
        ssopen(&S);

        // handle the arguments: 
        // https://en.cppreference.com/w/cpp/utility/variadic/va_list
        va_list arg;
        va_start(arg, pat);
        vfprintf(S.stream, pat, arg );
        va_end(arg);

        char* ret = ssvalue(&S);
        ssclose(&S);
        return ret;
    }
    const char* c_libs = 
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

%token KW_INTEGER 
%token KW_SCALAR
%token KW_STR
%token KW_BOOL
%token KW_TRUE
%token KW_FALSE
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
%token KW_CONTINUE
%token KW_AND
%token KW_OR
%token KW_ENDCOMP
%token KW_OF

%token KW_DEF
%token KW_ENDDEF

%token EQ
%token LEQ
%token GEQ
%token NEQ
%token LAND
%token LOR

%token MOD
%token POW

%token ADD_ASSIGN;
%token SUB_ASSIGN;
%token MULT_ASSIGN;
%token DIV_ASSIGN;
%token MOD_ASSIGN;
%token ASSIGN;
// ----------------------


%right ADD_ASSIGN SUB_ASSIGN MULT_ASSIGN DIV_ASSIGN MOD_ASSIGN ASSIGN '='
%left KW_OR
%left KW_AND
%right '!'
%left NEQ EQ
%left LEQ GEQ '<' '>'
%left '*' '/' MOD
%left '-' '+'
%right POW
%left '.' '(' ')' '[' ']'


%start input

%type <strng> PROGRAM_START


// ========= MAIN =========
%type <strng> s_main_s
%type <strng> pdeclare

// declartaions
%type <strng> composite_declaration
%type <strng> constant_declaration
%type <strng> function_declaration
%type <strng> variable_declaration

// ========================

%type <strng> brackets
%type <strng> basic_data_type
%type <strng> composite_data_type
%type <strng> identifier

// functions
%type <strng> function_header
%type <strng> function_header_contents
%type <strng> function_body
%type <strng> treturn
%type <strng> function_body_contents
%type <strng> function_attribute

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
%type <strng> do_while_statement



%%

input : PROGRAM_START {puts(c_libs);};

PROGRAM_START: pdeclare {$$ = cmap("%s",$1);};

pdeclare:       s_main_s {$$ = cmap("%s",$1);}
              | constant_declaration s_main_s{$$ = cmap("%s\n%s",$1,$2);}
              | constant_declaration composite_declaration s_main_s {$$ = cmap("%s\n%s\n%s",$1,$2,$3);}
              | constant_declaration composite_declaration function_declaration s_main_s{$$ = cmap("%s\n%s\n%s\n%s",$1,$2,$3,$4);}
              | constant_declaration composite_declaration function_declaration variable_declaration s_main_s{$$ = cmap("%s\n%s\n%s\n%s\n%s",$1,$2,$3,$4,$5);}
              ;


s_main_s: KW_DEF KW_MAIN '('')' function_body KW_ENDDEF {$$ = cmap("int main(){\n%s\n}",$5);};

constant_declaration:

composite_declaration:

function_declaration:

variable_declaration: 

basic_data_type : KW_INTEGER {$$ = cmap("int");}
                | KW_BOOL    {$$ = cmap("int");}
                | KW_SCALAR  {$$ = cmap("double");}
                | KW_STR     {$$ = cmap("char*");}
                ;

composite_data_type: //TODO 
;

// ----------------------------- expressions -----------------------------
expression:
  TK_NUMBER                                 {$$ = cmap("%s", $1);}
| TK_REAL                                   {$$ = cmap("%s", $1);}
| TK_CHAR                                   {$$ = cmap("%s", $1);}
| TK_STRING                                 {$$ = cmap("%s", $1);}
| TK_DIGIT                                  {$$ = cmap("%s", $1);}
| TK_DECIMAL                                {$$ = cmap("%s", $1);}
| TK_IDENTIFIER                             {$$ = cmap("%s", $1);}
| TK_IDENTIFIER '(' function_attribute ')'  {$$ = cmap("%s(%s)", $1, $3);}
| TK_IDENTIFIER '(' ')'                     {$$ = cmap("%s()", $1);}
| TK_IDENTIFIER brackets                    {$$ = cmap("%s%s", $1, $2);}
| KW_TRUE                                   {$$ = cmap("1");}
| KW_FALSE                                  {$$ = cmap("0");}
| '(' expression ')'                        {$$ = cmap("(%s)",$2);}
| composite_data_type '.' expression        {$$ = cmap("%s.%s", $1,$3);}
| math_expression                           {$$ = $1}
| logical_expression                        {$$ = $1}
| '+' expression                            {$$ = cmap("+%s", $2);}
| '-' expression                            {$$ = cmap("-%s", $2);}
;

math_expression:
  expression POW expression         {$$ = cmap("pow(%s,%s)", $1,$3);}
| expression '+' expression         {$$ = cmap("%s+%s", $1,$3);}
| expression '-' expression         {$$ = cmap("%s-%s", $1,$3);}
| expression '*' expression         {$$ = cmap("%s*%s", $1,$3);}
| expression '/' expression         {$$ = cmap("%s/%s", $1,$3);}
| expression MOD expression         {$$ = cmap("%s %% %s", $1,$3);}
;

logical_expression:
  expression EQ expression          {$$ = cmap("%s==%s"),$1,$3}
| expression LEQ expression         {$$ = cmap("%s<=%s"),$1,$3}
| expression GEQ expression         {$$ = cmap("%s>=%s"),$1,$3}
| expression NEQ expression         {$$ = cmap("%s!=%s"),$1,$3}
| expression '<' expression         {$$ = cmap("%s<%s"),$1,$3}
| expression '>' expression         {$$ = cmap("%s>%s"),$1,$3}
| expression LAND expression        {$$ = cmap("%s && %s"),$1,$3}
| expression LOR expression         {$$ = cmap("%s || %s"),$1,$3}
| '!' expression                    {$$ = cmap("!%s"),$2}


;
// -----------------------------------------------------------------------

// array brackets for arrays or matrices
brackets : '[' expression ']'           {$$ = cmap( "[%s]", $2);}
         | brackets '[' expression ']'  {$$ = cmap( "%s[%s]", $1, $3);}
;



// commands
commands: command commands {$$ = cmap("%s\n%s\n", $1,$2);}
        | command          {$$ = $1;}
;

command: ';'        {$$ = cmap(";");}


%%
int main () {
  if ( yyparse() == 0 )
    printf("Accepted!\n");
  
}