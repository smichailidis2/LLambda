%{
	#include 
	#include <math.h>
	#include <stdio.h>
	#include <string.h>
	#include <Lambda_analyzer.tab.h>

	int lineNum = 1;


%}

%x MACRO


IDENTIFIER 			[a-zA-Z][0-9a-zA-Z]*
DIGIT				[0-9]
NUMBER				{DIGIT}+
DECIMAL				("."{NUMBER})|({NUMBER}("."{NUMBER})?)?
NONPRINTABLECH		["\\""\'""\"""\n"]
ESCAPECH			("\\n"|"\\r"|"\\t"|"\\\\"|"\\\")
CHAR				("\'")({ESCAPECH}|^{NONPRINTABLECH})("\'")
STRING				("\"")({ESCAPECH}|^{NONPRINTABLECH})("\"")
REAL				{DECIMAL}([eE][+-]?{NUMBER})?

%%

"@defmacro"				{BEGIN(MACRO);}
<MACRO>{IDENTIFIER}		{strcpy()}

integer|int		return KW_INTEGER
scalar			return KW_SCALAR
str				return KW_STR
bool|boolean	return KW_BOOL
True			return KW_TRUE
False			return KW_FALSE
const			return KW_CONST
if				return KW_IF
else			return KW_ELSE
endif			return KW_ENDIF
for				return KW_FOR
in				return KW_IN
endfor			return KW_ENDFOR
while			return KW_WHILE
endwhile		return KW_ENDWHILE
break			return KW_BREAK
continue		return KW_CONTINUE
not				return KW_NOT
and				return KW_AND
or				return KW_OR
endcomp			return KW_ENDCOMP
of				return KW_OF
mod				return KW_MOD

main			return KW_main


{IDENTIFIER}	{yylval.str = strdup(yytext);return TK_IDENTIFIER;}
{DIGIT}		 	{yylval.str = strdup(yytext);return TK_DIGIT;}
{NUMBER}	 	{yylval.str = strdup(yytext);return TK_NUMBER;}
{DECIMAL}	 	{yylval.str = strdup(yytext);return TK_DECIMAL;}
{REAL}		 	{yylval.str = strdup(yytext);return TK_REAL;}
{CHAR}		 	{yylval.str = strdup(yytext);return TK_CHAR;}
{STRING}	 	{yylval.str = strdup(yytext);return TK_STRING;}



"+"			return '+';
"-"			return '-';
"*"			return '*';
"/"			return '/';
"%"			return MOD;
"**"		return POW;
"="			return '=';
"<"			return '<';
">"			return '>';
"!"			return '!';
"=="		return EQ;
"<="		return LEQ;
">="		return GEQ;
"!="		return NEQ;
"&&"		return LAND;
"||"		return LOR;

"+="		return ADD_ASSIGN;
"-="		return SUB_ASSIGN;
"*="		return MULT_ASSIGN;
"/="		return DIV_ASSIGN;
"%="		return MOD_ASSIGN;
":="		return ASSIGN;



"("			return '(';
")"			return ')';
";"			return ';';
"["			return '[';
"]"			return ']';
":"			return ':';
"."			return '.';

"--"[^\n]*	{printf(" Line comment: %s \n Detected in line: %d \n ", yytext, lineNum);}
[ \t\n]+	/* Ignore white space */
\n 			++lineNum;
.			{printf("Lexical error at line %d : unrecognized | %s |\n",lineNum,yytext);}
<<EOF>>		return EOF;

%%

