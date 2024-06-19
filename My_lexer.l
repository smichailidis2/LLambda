%{
	#include <math.h>
	#include <stdio.h>
	#include <string.h>
	#include "cgen.h"
	#include "Lambda_analyzer.tab.h"

	int line_num = 1;
	char macro_name[100];
	char* macro_names[100];
	char* macro_variables[100];
	int macro_count = 0;

	void add_macro(char* m, char* v) {
		macro_names[macro_count] = strdup(m);
		macro_variables[macro_count] = strdup(v);
		macro_count++;
	}

	char* replacement(char* macro){
		for(int i = 0; i < macro_count; ++i){
			if (strcmp(macro,macro_names[i]) == 0) {
				return macro_variables[i];
			}
		}

		return NULL;
	}

%}

%x MACRO


IDENTIFIER 			[a-zA-Z][0-9a-zA-Z_]*
DIGIT				[0-9]
NUMBER				{DIGIT}+
DECIMAL				("."{NUMBER})|({NUMBER}("."{NUMBER})?)?
REAL				{DECIMAL}([eE][+-]?{NUMBER})?
ESCAPECH		    ("\\n"|"\\t"|"\\r"|"\\\\"|"\\\"")
NONPRINTABLECH      [^"\\"^"\'"^"\""^"\n"]
CCHAR        	    ("\'")({ESCAPECH}|{NONPRINTABLECH})("\'")
SSTRING             ("\"")({ESCAPECH}|{NONPRINTABLECH})*("\"")

%%

@defmacro		{BEGIN(MACRO); yymore();}

<MACRO>{IDENTIFIER} {strcpy(macro_name,yytext);}
<MACRO>" "			{}
<MACRO>"="			{}
<MACRO>[^{IDENTIFIER} ^\n]+ {add_macro(macro_name,yytext); BEGIN(INITIAL);}


integer|int		{yylval.strng = strdup(yytext);return KW_INTEGER;}
scalar			{yylval.strng = strdup(yytext);return KW_SCALAR;}
str				{yylval.strng = strdup(yytext);return KW_STR;}
bool|boolean	{yylval.strng = strdup(yytext);return KW_BOOL;}
True			{yylval.strng = strdup(yytext);return KW_TRUE;}
False			{yylval.strng = strdup(yytext);return KW_FALSE;}
const			{yylval.strng = strdup(yytext);return KW_CONST;}
if				{yylval.strng = strdup(yytext);return KW_IF;}
else			{yylval.strng = strdup(yytext);return KW_ELSE;}
endif			{yylval.strng = strdup(yytext);return KW_ENDIF;}
for				{yylval.strng = strdup(yytext);return KW_FOR;}
in				{yylval.strng = strdup(yytext);return KW_IN;}
endfor			{yylval.strng = strdup(yytext);return KW_ENDFOR;}
while			{yylval.strng = strdup(yytext);return KW_WHILE;}
endwhile		{yylval.strng = strdup(yytext);return KW_ENDWHILE;}
break			{yylval.strng = strdup(yytext);return KW_BREAK;}
continue		{yylval.strng = strdup(yytext);return KW_CONTINUE;}
not				{yylval.strng = strdup(yytext);return KW_NOT;}
and				{yylval.strng = strdup(yytext);return KW_AND;}
or				{yylval.strng = strdup(yytext);return KW_OR;}
of				{yylval.strng = strdup(yytext);return KW_OF;}
mod				{yylval.strng = strdup(yytext);return KW_MOD;}
return			{yylval.strng = strdup(yytext);return KW_RETURN;}
def				{yylval.strng = strdup(yytext);return KW_DEF;}
enddef			{yylval.strng = strdup(yytext);return KW_ENDDEF;}

main			{yylval.strng = strdup(yytext);return KW_MAIN;}
void			{yylval.strng = strdup(yytext);return KW_VOID;}

"+"			{yylval.strng = strdup(yytext);return '+';}
"-"			{yylval.strng = strdup(yytext);return '-';}
"*"			{yylval.strng = strdup(yytext);return '*';}
"/"			{yylval.strng = strdup(yytext);return '/';}
"%"			{yylval.strng = strdup(yytext);return MOD;}
"**"		{yylval.strng = strdup(yytext);return POW;}
"="			{yylval.strng = strdup(yytext);return SIMPLE_ASSIGN;}
"<"			{yylval.strng = strdup(yytext);return '<';}
">"			{yylval.strng = strdup(yytext);return '>';}
"!"			{yylval.strng = strdup(yytext);return '!';}
"=="		{yylval.strng = strdup(yytext);return EQ;}
"<="		{yylval.strng = strdup(yytext);return LEQ;}
">="		{yylval.strng = strdup(yytext);return GEQ;}
"!="		{yylval.strng = strdup(yytext);return NEQ;}
"&&"		{yylval.strng = strdup(yytext);return LAND;}
"||"		{yylval.strng = strdup(yytext);return LOR;}

"+="		{yylval.strng = strdup(yytext);return ADD_ASSIGN;}
"-="		{yylval.strng = strdup(yytext);return SUB_ASSIGN;}
"*="		{yylval.strng = strdup(yytext);return MULT_ASSIGN;}
"/="		{yylval.strng = strdup(yytext);return DIV_ASSIGN;}
"%="		{yylval.strng = strdup(yytext);return MOD_ASSIGN;}
":="		{yylval.strng = strdup(yytext);return ASSIGN;}

"@"			{yylval.strng = strdup(yytext);return '@';}

"("			{yylval.strng = strdup(yytext);return '(';}
")"			{yylval.strng = strdup(yytext);return ')';}
";"			{yylval.strng = strdup(yytext);return ';';}
"["			{yylval.strng = strdup(yytext);return '[';}
"]"			{yylval.strng = strdup(yytext);return ']';}
":"			{yylval.strng = strdup(yytext);return ':';}
"."			{yylval.strng = strdup(yytext);return '.';}
","			{yylval.strng = strdup(yytext);return ',';}

{IDENTIFIER}	{	char* repl = replacement(yytext);
					if(repl) { 
						yylval.strng = strdup(repl);
						return TK_STRING;
					}
					yylval.strng = strdup(yytext); return TK_IDENTIFIER;
				}

{NUMBER}	 	{yylval.strng = strdup(yytext); return TK_NUMBER;}
{REAL}		 	{yylval.strng = strdup(yytext); return TK_REAL;}
{CCHAR}			{yylval.strng = strdup(yytext); return TK_CHAR;}
{SSTRING}		{yylval.strng = strdup(yytext); return TK_STRING;}



"--"[^\n]*	{printf("\n/*Line comment Detected in line: %d :\n %s \n */\n ",line_num, yytext );}
[ \t\r]+	/* Ignore white space */
\n 			++line_num;
<<EOF>>		return EOF;

.			{printf("Lexical error at line %d : unrecognized | %s |\n",line_num,yytext);}

%%

