%{
	#include <math.h>
	#include <stdio.h>
	#include <string.h>
	#include "cgen.h"
	#include "Lambda_analyzer.tab.h"

	int line_num = 1;


%}


IDENTIFIER 			[a-zA-Z][0-9a-zA-Z]*
DIGIT				[0-9]
NUMBER				{DIGIT}+
DECIMAL				("."{NUMBER})|({NUMBER}("."{NUMBER})?)?
NONPRINTABLECH		("\\"|"\'"|"\""|"\n")
REAL				{DECIMAL}([eE][+-]?{NUMBER})?
CCHAR				[']([a-zA-Z_]|"\\n"|"\\t"|"\\r"|"\\"|"\'"|"\""|"!"|"@"|"#"|"$"|"%"|"^"|"&"|"*"|"?"|":"|"."|"("|")"|"+"|"-"|"^"|"="|"/")[']   	
SSTRING  			["](^{NONPRINTABLECH})*["]

%%


integer|int		return KW_INTEGER;
scalar			return KW_SCALAR;
str				return KW_STR;
bool|boolean	return KW_BOOL;
True			return KW_TRUE;
False			return KW_FALSE;
const			return KW_CONST;
if				return KW_IF;
else			return KW_ELSE;
endif			return KW_ENDIF;
for				return KW_FOR;
in				return KW_IN;
endfor			return KW_ENDFOR;
while			return KW_WHILE;
endwhile		return KW_ENDWHILE;
break			return KW_BREAK;
continue		return KW_CONTINUE;
not				return KW_NOT;
and				return KW_AND;
or				return KW_OR;
of				return KW_OF;
mod				return KW_MOD;
return			return KW_RETURN;
def				return KW_DEF;
enddef			return KW_ENDDEF;

main			return KW_MAIN;

"+"			{return '+';}
"-"			{return '-';}
"*"			{return '*';}
"/"			{return '/';}
"%"			{yylval.strng = strdup(yytext);return MOD;}
"**"		{yylval.strng = strdup(yytext);return POW;}
"="			{return '=';}
"<"			{return '<';}
">"			{return '>';}
"!"			{return '!';}
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



"("			{return '(';}
")"			{return ')';}
";"			{return ';';}
"["			{return '[';}
"]"			{return ']';}
":"			{return ':';}
"."			{return '.';}

{IDENTIFIER}	{yylval.strng = strdup(yytext); return TK_IDENTIFIER;}
{DIGIT}		 	{yylval.strng = strdup(yytext); return TK_DIGIT;}
{NUMBER}	 	{yylval.strng = strdup(yytext); return TK_NUMBER;}
{DECIMAL}	 	{yylval.strng = strdup(yytext); return TK_DECIMAL;}
{REAL}		 	{yylval.strng = strdup(yytext); return TK_REAL;}
{CCHAR}			{yylval.strng = strdup(yytext); return TK_CHAR;}
{SSTRING}		{yylval.strng = strdup(yytext); return TK_STRING;}

"--"[^\n]*	{printf(" Line comment: %s \n Detected in line: %d \n ", yytext, line_num);}
[ \t\r]+	/* Ignore white space */
\n 			++line_num;
<<EOF>>		return EOF;

.			{printf("Lexical error at line %d : unrecognized | %s |\n",line_num,yytext);}

%%

