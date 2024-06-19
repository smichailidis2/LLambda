/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_YY_LAMBDA_ANALYZER_TAB_H_INCLUDED
# define YY_YY_LAMBDA_ANALYZER_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    TK_IDENTIFIER = 258,           /* TK_IDENTIFIER  */
    TK_CHAR = 259,                 /* TK_CHAR  */
    TK_STRING = 260,               /* TK_STRING  */
    TK_REAL = 261,                 /* TK_REAL  */
    TK_DIGIT = 262,                /* TK_DIGIT  */
    TK_NUMBER = 263,               /* TK_NUMBER  */
    KW_MAIN = 264,                 /* KW_MAIN  */
    KW_INTEGER = 265,              /* KW_INTEGER  */
    KW_SCALAR = 266,               /* KW_SCALAR  */
    KW_STR = 267,                  /* KW_STR  */
    KW_BOOL = 268,                 /* KW_BOOL  */
    KW_TRUE = 269,                 /* KW_TRUE  */
    KW_FALSE = 270,                /* KW_FALSE  */
    KW_CONST = 271,                /* KW_CONST  */
    KW_IF = 272,                   /* KW_IF  */
    KW_ELSE = 273,                 /* KW_ELSE  */
    KW_ENDIF = 274,                /* KW_ENDIF  */
    KW_FOR = 275,                  /* KW_FOR  */
    KW_IN = 276,                   /* KW_IN  */
    KW_ENDFOR = 277,               /* KW_ENDFOR  */
    KW_WHILE = 278,                /* KW_WHILE  */
    KW_ENDWHILE = 279,             /* KW_ENDWHILE  */
    KW_BREAK = 280,                /* KW_BREAK  */
    KW_RETURN = 281,               /* KW_RETURN  */
    KW_CONTINUE = 282,             /* KW_CONTINUE  */
    KW_AND = 283,                  /* KW_AND  */
    KW_OR = 284,                   /* KW_OR  */
    KW_OF = 285,                   /* KW_OF  */
    KW_VOID = 286,                 /* KW_VOID  */
    KW_DEF = 287,                  /* KW_DEF  */
    KW_ENDDEF = 288,               /* KW_ENDDEF  */
    ADD_ASSIGN = 289,              /* ADD_ASSIGN  */
    SUB_ASSIGN = 290,              /* SUB_ASSIGN  */
    MULT_ASSIGN = 291,             /* MULT_ASSIGN  */
    DIV_ASSIGN = 292,              /* DIV_ASSIGN  */
    MOD_ASSIGN = 293,              /* MOD_ASSIGN  */
    ASSIGN = 294,                  /* ASSIGN  */
    SIMPLE_ASSIGN = 295,           /* SIMPLE_ASSIGN  */
    LOR = 296,                     /* LOR  */
    LAND = 297,                    /* LAND  */
    KW_NOT = 298,                  /* KW_NOT  */
    NEQ = 299,                     /* NEQ  */
    EQ = 300,                      /* EQ  */
    LEQ = 301,                     /* LEQ  */
    GEQ = 302,                     /* GEQ  */
    MOD = 303,                     /* MOD  */
    KW_MOD = 304,                  /* KW_MOD  */
    POW = 305                      /* POW  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 58 "Lambda_analyzer.y"

  char* strng;

#line 118 "Lambda_analyzer.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_LAMBDA_ANALYZER_TAB_H_INCLUDED  */
