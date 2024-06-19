/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "Lambda_analyzer.y"


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


#line 127 "Lambda_analyzer.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

#include "Lambda_analyzer.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_TK_IDENTIFIER = 3,              /* TK_IDENTIFIER  */
  YYSYMBOL_TK_CHAR = 4,                    /* TK_CHAR  */
  YYSYMBOL_TK_STRING = 5,                  /* TK_STRING  */
  YYSYMBOL_TK_REAL = 6,                    /* TK_REAL  */
  YYSYMBOL_TK_DIGIT = 7,                   /* TK_DIGIT  */
  YYSYMBOL_TK_NUMBER = 8,                  /* TK_NUMBER  */
  YYSYMBOL_KW_MAIN = 9,                    /* KW_MAIN  */
  YYSYMBOL_KW_INTEGER = 10,                /* KW_INTEGER  */
  YYSYMBOL_KW_SCALAR = 11,                 /* KW_SCALAR  */
  YYSYMBOL_KW_STR = 12,                    /* KW_STR  */
  YYSYMBOL_KW_BOOL = 13,                   /* KW_BOOL  */
  YYSYMBOL_KW_TRUE = 14,                   /* KW_TRUE  */
  YYSYMBOL_KW_FALSE = 15,                  /* KW_FALSE  */
  YYSYMBOL_KW_CONST = 16,                  /* KW_CONST  */
  YYSYMBOL_KW_IF = 17,                     /* KW_IF  */
  YYSYMBOL_KW_ELSE = 18,                   /* KW_ELSE  */
  YYSYMBOL_KW_ENDIF = 19,                  /* KW_ENDIF  */
  YYSYMBOL_KW_FOR = 20,                    /* KW_FOR  */
  YYSYMBOL_KW_IN = 21,                     /* KW_IN  */
  YYSYMBOL_KW_ENDFOR = 22,                 /* KW_ENDFOR  */
  YYSYMBOL_KW_WHILE = 23,                  /* KW_WHILE  */
  YYSYMBOL_KW_ENDWHILE = 24,               /* KW_ENDWHILE  */
  YYSYMBOL_KW_BREAK = 25,                  /* KW_BREAK  */
  YYSYMBOL_KW_RETURN = 26,                 /* KW_RETURN  */
  YYSYMBOL_KW_CONTINUE = 27,               /* KW_CONTINUE  */
  YYSYMBOL_KW_AND = 28,                    /* KW_AND  */
  YYSYMBOL_KW_OR = 29,                     /* KW_OR  */
  YYSYMBOL_KW_OF = 30,                     /* KW_OF  */
  YYSYMBOL_KW_VOID = 31,                   /* KW_VOID  */
  YYSYMBOL_KW_DEF = 32,                    /* KW_DEF  */
  YYSYMBOL_KW_ENDDEF = 33,                 /* KW_ENDDEF  */
  YYSYMBOL_ADD_ASSIGN = 34,                /* ADD_ASSIGN  */
  YYSYMBOL_SUB_ASSIGN = 35,                /* SUB_ASSIGN  */
  YYSYMBOL_MULT_ASSIGN = 36,               /* MULT_ASSIGN  */
  YYSYMBOL_DIV_ASSIGN = 37,                /* DIV_ASSIGN  */
  YYSYMBOL_MOD_ASSIGN = 38,                /* MOD_ASSIGN  */
  YYSYMBOL_ASSIGN = 39,                    /* ASSIGN  */
  YYSYMBOL_SIMPLE_ASSIGN = 40,             /* SIMPLE_ASSIGN  */
  YYSYMBOL_LOR = 41,                       /* LOR  */
  YYSYMBOL_LAND = 42,                      /* LAND  */
  YYSYMBOL_43_ = 43,                       /* '!'  */
  YYSYMBOL_KW_NOT = 44,                    /* KW_NOT  */
  YYSYMBOL_NEQ = 45,                       /* NEQ  */
  YYSYMBOL_EQ = 46,                        /* EQ  */
  YYSYMBOL_LEQ = 47,                       /* LEQ  */
  YYSYMBOL_GEQ = 48,                       /* GEQ  */
  YYSYMBOL_49_ = 49,                       /* '<'  */
  YYSYMBOL_50_ = 50,                       /* '>'  */
  YYSYMBOL_51_ = 51,                       /* '*'  */
  YYSYMBOL_52_ = 52,                       /* '/'  */
  YYSYMBOL_MOD = 53,                       /* MOD  */
  YYSYMBOL_KW_MOD = 54,                    /* KW_MOD  */
  YYSYMBOL_55_ = 55,                       /* '-'  */
  YYSYMBOL_56_ = 56,                       /* '+'  */
  YYSYMBOL_POW = 57,                       /* POW  */
  YYSYMBOL_58_ = 58,                       /* '.'  */
  YYSYMBOL_59_ = 59,                       /* '('  */
  YYSYMBOL_60_ = 60,                       /* ')'  */
  YYSYMBOL_61_ = 61,                       /* '['  */
  YYSYMBOL_62_ = 62,                       /* ']'  */
  YYSYMBOL_63_ = 63,                       /* ';'  */
  YYSYMBOL_64_ = 64,                       /* ':'  */
  YYSYMBOL_65_ = 65,                       /* ','  */
  YYSYMBOL_YYACCEPT = 66,                  /* $accept  */
  YYSYMBOL_input = 67,                     /* input  */
  YYSYMBOL_PROGRAM_START = 68,             /* PROGRAM_START  */
  YYSYMBOL_pdeclare = 69,                  /* pdeclare  */
  YYSYMBOL_code = 70,                      /* code  */
  YYSYMBOL_s_main_s = 71,                  /* s_main_s  */
  YYSYMBOL_main_body = 72,                 /* main_body  */
  YYSYMBOL_constant_declaration = 73,      /* constant_declaration  */
  YYSYMBOL_function_declaration = 74,      /* function_declaration  */
  YYSYMBOL_variable_declaration = 75,      /* variable_declaration  */
  YYSYMBOL_array_var = 76,                 /* array_var  */
  YYSYMBOL_data_type = 77,                 /* data_type  */
  YYSYMBOL_expression = 78,                /* expression  */
  YYSYMBOL_math_expression = 79,           /* math_expression  */
  YYSYMBOL_logical_expression = 80,        /* logical_expression  */
  YYSYMBOL_brackets = 81,                  /* brackets  */
  YYSYMBOL_commands = 82,                  /* commands  */
  YYSYMBOL_command = 83,                   /* command  */
  YYSYMBOL_variable_assignement = 84,      /* variable_assignement  */
  YYSYMBOL_array_assignement = 85,         /* array_assignement  */
  YYSYMBOL_if_statement = 86,              /* if_statement  */
  YYSYMBOL_for_statement = 87,             /* for_statement  */
  YYSYMBOL_compound_array_a = 88,          /* compound_array_a  */
  YYSYMBOL_compound_array_i = 89,          /* compound_array_i  */
  YYSYMBOL_while_statement = 90,           /* while_statement  */
  YYSYMBOL_function_arg = 91,              /* function_arg  */
  YYSYMBOL_function_header = 92,           /* function_header  */
  YYSYMBOL_function_body = 93,             /* function_body  */
  YYSYMBOL_args = 94                       /* args  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_int16 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if !defined yyoverflow

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* !defined yyoverflow */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  5
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   742

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  66
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  29
/* YYNRULES -- Number of rules.  */
#define YYNRULES  108
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  269

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   305


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    43,     2,     2,     2,     2,     2,     2,
      59,    60,    51,    56,    65,    55,    58,    52,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    64,    63,
      49,     2,    50,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    61,     2,    62,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    44,    45,
      46,    47,    48,    53,    54,    57
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   160,   160,   162,   166,   168,   169,   170,   171,   176,
     178,   182,   183,   184,   185,   186,   190,   192,   193,   194,
     195,   199,   204,   205,   206,   207,   214,   215,   216,   217,
     218,   219,   220,   221,   222,   223,   224,   225,   226,   227,
     228,   229,   233,   234,   235,   236,   237,   238,   239,   243,
     244,   245,   246,   247,   248,   249,   250,   251,   252,   253,
     254,   259,   260,   261,   269,   270,   274,   275,   276,   277,
     278,   279,   280,   281,   282,   283,   284,   285,   286,   287,
     288,   289,   290,   291,   292,   293,   294,   298,   299,   302,
     303,   308,   309,   315,   321,   324,   329,   330,   334,   335,
     336,   337,   338,   339,   341,   343,   344,   345,   346
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "TK_IDENTIFIER",
  "TK_CHAR", "TK_STRING", "TK_REAL", "TK_DIGIT", "TK_NUMBER", "KW_MAIN",
  "KW_INTEGER", "KW_SCALAR", "KW_STR", "KW_BOOL", "KW_TRUE", "KW_FALSE",
  "KW_CONST", "KW_IF", "KW_ELSE", "KW_ENDIF", "KW_FOR", "KW_IN",
  "KW_ENDFOR", "KW_WHILE", "KW_ENDWHILE", "KW_BREAK", "KW_RETURN",
  "KW_CONTINUE", "KW_AND", "KW_OR", "KW_OF", "KW_VOID", "KW_DEF",
  "KW_ENDDEF", "ADD_ASSIGN", "SUB_ASSIGN", "MULT_ASSIGN", "DIV_ASSIGN",
  "MOD_ASSIGN", "ASSIGN", "SIMPLE_ASSIGN", "LOR", "LAND", "'!'", "KW_NOT",
  "NEQ", "EQ", "LEQ", "GEQ", "'<'", "'>'", "'*'", "'/'", "MOD", "KW_MOD",
  "'-'", "'+'", "POW", "'.'", "'('", "')'", "'['", "']'", "';'", "':'",
  "','", "$accept", "input", "PROGRAM_START", "pdeclare", "code",
  "s_main_s", "main_body", "constant_declaration", "function_declaration",
  "variable_declaration", "array_var", "data_type", "expression",
  "math_expression", "logical_expression", "brackets", "commands",
  "command", "variable_assignement", "array_assignement", "if_statement",
  "for_statement", "compound_array_a", "compound_array_i",
  "while_statement", "function_arg", "function_header", "function_body",
  "args", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-203)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    -203,    39,  -203,  -203,    11,  -203,    42,    51,    33,  -203,
       4,    50,    56,   -45,    85,    84,    99,    53,    83,    87,
      89,    95,    15,  -203,  -203,  -203,    84,    99,     7,  -203,
    -203,  -203,  -203,  -203,  -203,  -203,   258,   258,   258,   258,
     258,  -203,   397,  -203,  -203,  -203,  -203,  -203,  -203,  -203,
    -203,   258,    47,    -1,    90,   634,   101,   139,   106,    86,
       1,    94,  -203,   103,   104,  -203,    95,   107,   109,   110,
     112,   119,   120,   122,   136,   183,  -203,  -203,   148,    53,
     229,   229,   137,   137,   547,   258,   258,   258,   258,   258,
     258,   258,   258,   258,   258,   258,   258,   258,   258,   258,
     258,   258,  -203,   427,   131,   134,   135,   138,   141,    40,
     -34,   140,   142,   198,   206,   207,   208,   209,   152,   258,
     173,   -28,   258,   194,   258,  -203,  -203,   367,  -203,  -203,
    -203,  -203,  -203,  -203,  -203,  -203,  -203,  -203,  -203,  -203,
    -203,   655,    -2,  -203,   229,   685,   685,   229,   290,   290,
      79,    79,    79,    79,    82,    82,    82,    82,   137,   137,
     137,  -203,   210,   212,   211,   205,   213,   157,    84,   174,
    -203,   -23,    95,   164,   167,   171,   175,   176,   258,   655,
     177,     5,   258,   577,   180,   607,  -203,  -203,   258,  -203,
    -203,  -203,  -203,  -203,   172,   178,    38,   187,  -203,   220,
    -203,  -203,  -203,  -203,  -203,  -203,   277,  -203,   181,   655,
     196,   258,   203,   655,    84,   242,   204,   225,   114,   227,
     266,  -203,    95,   337,    95,   226,  -203,  -203,  -203,   228,
     230,  -203,   231,    98,   258,   246,   242,  -203,  -203,   244,
     232,  -203,   307,  -203,  -203,   250,   457,    95,   234,   258,
     301,   243,   274,    95,   487,   278,    84,  -203,   287,    95,
     258,  -203,  -203,   288,   517,  -203,   247,    84,  -203
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       5,     0,     2,     3,     0,     1,     0,     0,     0,     5,
       0,     0,     0,     0,     0,     0,     0,    21,     0,     0,
       0,     0,     4,     6,     7,     8,     0,     0,    31,    28,
      29,    27,    30,    26,    35,    36,     0,     0,     0,     0,
       0,    63,     0,    38,    39,    22,    24,    25,    23,    17,
      19,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    66,     0,     0,   104,    65,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    18,    20,     0,    34,
      59,    60,    41,    40,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    61,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    21,     0,     0,     0,    76,    78,     0,    77,    69,
      68,    64,    67,    70,    71,    72,    74,    73,    75,    16,
      33,    96,     0,    37,    56,    58,    57,    55,    52,    49,
      50,    51,    53,    54,    45,    46,    47,    48,    44,    43,
      42,    62,     0,     0,     0,     0,     0,     0,     0,     0,
     103,     0,     0,     0,     0,     0,     0,     0,     0,    87,
       0,     0,     0,     0,     0,     0,    79,    32,     0,    13,
      12,    11,    14,    15,     0,   105,     0,     0,   102,     0,
      10,    82,    83,    84,    85,    86,     0,    81,     0,    88,
       0,     0,     0,    97,     0,     0,     0,     0,     0,     0,
       0,    80,     0,     0,     0,   107,   106,   101,    99,     0,
       0,     9,     0,     0,     0,     0,     0,   100,    98,     0,
       0,    89,     0,    95,   108,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    90,     0,     0,
       0,    94,    91,     0,     0,    92,     0,     0,    93
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -203,  -203,  -203,  -203,   303,  -203,  -203,     6,  -203,    13,
    -203,   -25,   -14,  -203,  -203,   -17,   -63,  -203,  -203,  -203,
    -203,  -203,  -203,  -203,  -203,   195,  -203,  -203,  -202
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     1,     2,     3,     4,     9,   199,    63,    11,    64,
      13,    49,   141,    43,    44,    17,    65,    66,    67,    68,
      69,    70,    71,    72,    73,   142,    21,    74,   111
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      42,    76,   109,   131,    28,    29,    30,    31,    32,    33,
      10,    79,   182,   226,     6,    34,    35,    12,     6,    26,
      27,   169,    80,    81,    82,    83,    84,     7,    10,    50,
     170,     7,   197,    51,   244,    12,    19,   103,   121,     5,
      77,   198,    20,     8,    36,    37,   127,    75,    45,    46,
      47,    48,   104,   105,    18,   106,    38,    39,   187,   110,
      40,   107,   108,   188,   126,   208,    78,    23,    14,   216,
     188,   144,   145,   146,   147,   148,   149,   150,   151,   152,
     153,   154,   155,   156,   157,   158,   159,   160,    28,    29,
      30,    31,    32,    33,    45,    46,    47,    48,    55,    34,
      35,   167,     6,    14,   168,   179,    15,    16,   183,   200,
     185,     7,    56,    24,    51,    57,   240,   241,    58,    25,
      59,    60,    61,    52,    45,    46,    47,    48,    36,    37,
      95,    96,    97,    98,    99,   100,   101,    99,   100,   101,
      38,    39,   123,   195,    40,   229,    53,    41,    54,   125,
     112,    28,    29,    30,    31,    32,    33,   128,    62,   233,
     122,   235,    34,    35,   206,   124,   129,   130,   209,   139,
     132,   217,   133,   134,   213,   135,    28,    29,    30,    31,
      32,    33,   136,   137,   252,   138,    19,    34,    35,   225,
     258,    36,    37,   230,   101,   162,   263,   223,   163,   164,
     171,   173,   165,    38,    39,   166,   172,    40,   140,   174,
     175,   176,   177,   178,   245,   184,    36,    37,   192,   194,
     242,   191,   189,   190,   196,   246,   193,   201,    38,    39,
     202,   261,    40,   180,   203,   254,   214,   218,   204,   205,
     207,   211,   268,   215,   221,   109,   264,    28,    29,    30,
      31,    32,    33,   219,    45,    46,    47,    48,    34,    35,
     222,    28,    29,    30,    31,    32,    33,   224,   227,   232,
     243,   250,    34,    35,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,    36,    37,   228,
     231,   236,   237,   257,   238,   239,   247,   220,   253,    38,
      39,    36,    37,    40,   255,    85,    86,   256,   260,   262,
     265,   267,    22,    38,    39,   181,     0,    40,    87,    88,
       0,     0,    89,    90,    91,    92,    93,    94,    95,    96,
      97,    98,    99,   100,   101,    85,    86,    91,    92,    93,
      94,    95,    96,    97,    98,    99,   100,   101,    87,    88,
       0,     0,    89,    90,    91,    92,    93,    94,    95,    96,
      97,    98,    99,   100,   101,    85,    86,     0,     0,   248,
       0,   249,     0,     0,     0,     0,     0,     0,    87,    88,
       0,     0,    89,    90,    91,    92,    93,    94,    95,    96,
      97,    98,    99,   100,   101,    85,    86,     0,     0,     0,
       0,   234,     0,     0,     0,     0,     0,     0,    87,    88,
       0,     0,    89,    90,    91,    92,    93,    94,    95,    96,
      97,    98,    99,   100,   101,    85,    86,     0,     0,     0,
     186,     0,     0,     0,     0,     0,     0,     0,    87,    88,
       0,     0,    89,    90,    91,    92,    93,    94,    95,    96,
      97,    98,    99,   100,   101,    85,    86,     0,     0,   102,
       0,     0,     0,     0,     0,     0,     0,     0,    87,    88,
       0,     0,    89,    90,    91,    92,    93,    94,    95,    96,
      97,    98,    99,   100,   101,    85,    86,     0,     0,   161,
       0,     0,     0,     0,     0,     0,     0,     0,    87,    88,
       0,     0,    89,    90,    91,    92,    93,    94,    95,    96,
      97,    98,    99,   100,   101,    85,    86,     0,     0,   251,
       0,     0,     0,     0,     0,     0,     0,     0,    87,    88,
       0,     0,    89,    90,    91,    92,    93,    94,    95,    96,
      97,    98,    99,   100,   101,    85,    86,     0,     0,   259,
       0,     0,     0,     0,     0,     0,     0,     0,    87,    88,
       0,     0,    89,    90,    91,    92,    93,    94,    95,    96,
      97,    98,    99,   100,   101,    85,    86,     0,     0,   266,
       0,     0,     0,     0,     0,     0,     0,     0,    87,    88,
       0,     0,    89,    90,    91,    92,    93,    94,    95,    96,
      97,    98,    99,   100,   101,    85,    86,   143,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    87,    88,
       0,     0,    89,    90,    91,    92,    93,    94,    95,    96,
      97,    98,    99,   100,   101,    85,    86,   210,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    87,    88,
       0,     0,    89,    90,    91,    92,    93,    94,    95,    96,
      97,    98,    99,   100,   101,     0,     0,   212,   113,   114,
     115,   116,   117,   118,   119,     0,     0,     0,     0,     0,
       0,     0,     0,    85,    86,     0,     0,     0,     0,     0,
       0,     0,     0,   120,     0,    14,    87,    88,    15,    16,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    98,
      99,   100,   101,    85,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    88,     0,     0,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    98,
      99,   100,   101
};

static const yytype_int16 yycheck[] =
{
      14,    26,     3,    66,     3,     4,     5,     6,     7,     8,
       4,    28,    40,   215,     3,    14,    15,     4,     3,    64,
      65,    55,    36,    37,    38,    39,    40,    16,    22,    16,
      64,    16,    55,    61,   236,    22,     3,    51,    55,     0,
      27,    64,     9,    32,    43,    44,    60,    32,    10,    11,
      12,    13,     5,     6,     3,     8,    55,    56,    60,    60,
      59,    14,    15,    65,    63,    60,    59,    63,    61,    31,
      65,    85,    86,    87,    88,    89,    90,    91,    92,    93,
      94,    95,    96,    97,    98,    99,   100,   101,     3,     4,
       5,     6,     7,     8,    10,    11,    12,    13,     3,    14,
      15,    61,     3,    61,    64,   119,    64,    65,   122,   172,
     124,    16,    17,    63,    61,    20,    18,    19,    23,    63,
      25,    26,    27,    40,    10,    11,    12,    13,    43,    44,
      51,    52,    53,    54,    55,    56,    57,    55,    56,    57,
      55,    56,     3,   168,    59,    31,    59,    62,    59,    63,
      60,     3,     4,     5,     6,     7,     8,    63,    63,   222,
      59,   224,    14,    15,   178,    59,    63,    63,   182,    33,
      63,   196,    63,    63,   188,    63,     3,     4,     5,     6,
       7,     8,    63,    63,   247,    63,     3,    14,    15,   214,
     253,    43,    44,   218,    57,    64,   259,   211,    64,    64,
      60,     3,    64,    55,    56,    64,    64,    59,    60,     3,
       3,     3,     3,    61,   239,    21,    43,    44,    13,    62,
     234,    10,    12,    11,    50,   239,    13,    63,    55,    56,
      63,   256,    59,    60,    63,   249,    64,    50,    63,    63,
      63,    61,   267,    65,    63,     3,   260,     3,     4,     5,
       6,     7,     8,    33,    10,    11,    12,    13,    14,    15,
      64,     3,     4,     5,     6,     7,     8,    64,    64,     3,
      24,    21,    14,    15,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    43,    44,    64,
      63,    65,    64,    19,    64,    64,    64,    20,    64,    55,
      56,    43,    44,    59,     3,    28,    29,    64,    30,    22,
      22,    64,     9,    55,    56,   120,    -1,    59,    41,    42,
      -1,    -1,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    28,    29,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    41,    42,
      -1,    -1,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    28,    29,    -1,    -1,    62,
      -1,    64,    -1,    -1,    -1,    -1,    -1,    -1,    41,    42,
      -1,    -1,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    28,    29,    -1,    -1,    -1,
      -1,    64,    -1,    -1,    -1,    -1,    -1,    -1,    41,    42,
      -1,    -1,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    28,    29,    -1,    -1,    -1,
      63,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    41,    42,
      -1,    -1,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    28,    29,    -1,    -1,    62,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    41,    42,
      -1,    -1,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    28,    29,    -1,    -1,    62,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    41,    42,
      -1,    -1,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    28,    29,    -1,    -1,    62,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    41,    42,
      -1,    -1,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    28,    29,    -1,    -1,    62,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    41,    42,
      -1,    -1,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    28,    29,    -1,    -1,    62,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    41,    42,
      -1,    -1,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    28,    29,    60,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    41,    42,
      -1,    -1,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    28,    29,    60,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    41,    42,
      -1,    -1,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    -1,    -1,    60,    34,    35,
      36,    37,    38,    39,    40,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    28,    29,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    59,    -1,    61,    41,    42,    64,    65,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    28,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,    -1,    -1,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    67,    68,    69,    70,     0,     3,    16,    32,    71,
      73,    74,    75,    76,    61,    64,    65,    81,     3,     3,
       9,    92,    70,    63,    63,    63,    64,    65,     3,     4,
       5,     6,     7,     8,    14,    15,    43,    44,    55,    56,
      59,    62,    78,    79,    80,    10,    11,    12,    13,    77,
      75,    61,    40,    59,    59,     3,    17,    20,    23,    25,
      26,    27,    63,    73,    75,    82,    83,    84,    85,    86,
      87,    88,    89,    90,    93,    32,    77,    75,    59,    81,
      78,    78,    78,    78,    78,    28,    29,    41,    42,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    62,    78,     5,     6,     8,    14,    15,     3,
      60,    94,    60,    34,    35,    36,    37,    38,    39,    40,
      59,    81,    59,     3,    59,    63,    63,    78,    63,    63,
      63,    82,    63,    63,    63,    63,    63,    63,    63,    33,
      60,    78,    91,    60,    78,    78,    78,    78,    78,    78,
      78,    78,    78,    78,    78,    78,    78,    78,    78,    78,
      78,    62,    64,    64,    64,    64,    64,    61,    64,    55,
      64,    60,    64,     3,     3,     3,     3,     3,    61,    78,
      60,    91,    40,    78,    21,    78,    63,    60,    65,    12,
      11,    10,    13,    13,    62,    77,    50,    55,    64,    72,
      82,    63,    63,    63,    63,    63,    78,    63,    60,    78,
      60,    61,    60,    78,    64,    65,    31,    77,    50,    33,
      20,    63,    64,    78,    64,    77,    94,    64,    64,    31,
      77,    63,     3,    82,    64,    82,    65,    64,    64,    64,
      18,    19,    78,    24,    94,    77,    78,    64,    62,    64,
      21,    62,    82,    64,    78,     3,    64,    19,    82,    62,
      30,    77,    22,    82,    78,    22,    62,    64,    77
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    66,    67,    68,    69,    70,    70,    70,    70,    71,
      72,    73,    73,    73,    73,    73,    74,    75,    75,    75,
      75,    76,    77,    77,    77,    77,    78,    78,    78,    78,
      78,    78,    78,    78,    78,    78,    78,    78,    78,    78,
      78,    78,    79,    79,    79,    79,    79,    79,    79,    80,
      80,    80,    80,    80,    80,    80,    80,    80,    80,    80,
      80,    81,    81,    81,    82,    82,    83,    83,    83,    83,
      83,    83,    83,    83,    83,    83,    83,    83,    83,    83,
      83,    83,    83,    83,    83,    83,    83,    84,    85,    86,
      86,    87,    87,    88,    89,    90,    91,    91,    92,    92,
      92,    92,    92,    92,    93,    94,    94,    94,    94
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     3,     0,     3,     3,     3,     8,
       1,     6,     6,     6,     6,     6,     4,     3,     3,     3,
       3,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     4,     3,     2,     1,     1,     3,     1,     1,
       2,     2,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     2,
       2,     3,     4,     2,     2,     1,     1,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     3,
       5,     4,     4,     4,     4,     4,     4,     3,     4,     7,
      10,    11,    12,    15,    11,     7,     1,     3,     8,     7,
       8,     7,     5,     4,     1,     3,     5,     5,     7
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)




# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;




/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */

  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */


  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;


/*-----------.
| yybackup.  |
`-----------*/
yybackup:
  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 2: /* input: PROGRAM_START  */
#line 160 "Lambda_analyzer.y"
                      {printf("%s\n%s",c_prologue,(yyvsp[0].strng));}
#line 1475 "Lambda_analyzer.tab.c"
    break;

  case 3: /* PROGRAM_START: pdeclare  */
#line 162 "Lambda_analyzer.y"
                        {(yyval.strng) = template("%s",(yyvsp[0].strng));}
#line 1481 "Lambda_analyzer.tab.c"
    break;

  case 4: /* pdeclare: code s_main_s code  */
#line 166 "Lambda_analyzer.y"
                             {(yyval.strng) = template("%s\n%s\n%s",(yyvsp[-2].strng),(yyvsp[-1].strng),(yyvsp[0].strng));}
#line 1487 "Lambda_analyzer.tab.c"
    break;

  case 5: /* code: %empty  */
#line 168 "Lambda_analyzer.y"
             {(yyval.strng) = template("\n");}
#line 1493 "Lambda_analyzer.tab.c"
    break;

  case 6: /* code: code constant_declaration ';'  */
#line 169 "Lambda_analyzer.y"
                                     {(yyval.strng) = template("%s;\n%s",(yyvsp[-2].strng),(yyvsp[-1].strng));}
#line 1499 "Lambda_analyzer.tab.c"
    break;

  case 7: /* code: code function_declaration ';'  */
#line 170 "Lambda_analyzer.y"
                                     {(yyval.strng) = template("%s;\n%s",(yyvsp[-2].strng),(yyvsp[-1].strng));}
#line 1505 "Lambda_analyzer.tab.c"
    break;

  case 8: /* code: code variable_declaration ';'  */
#line 171 "Lambda_analyzer.y"
                                     {(yyval.strng) = template("%s;\n%s",(yyvsp[-2].strng),(yyvsp[-1].strng));}
#line 1511 "Lambda_analyzer.tab.c"
    break;

  case 9: /* s_main_s: KW_DEF KW_MAIN '(' ')' ':' main_body KW_ENDDEF ';'  */
#line 176 "Lambda_analyzer.y"
                                                            {(yyval.strng) = template("int main(){\n%s\n}",(yyvsp[-2].strng));}
#line 1517 "Lambda_analyzer.tab.c"
    break;

  case 10: /* main_body: commands  */
#line 178 "Lambda_analyzer.y"
                    {(yyval.strng) = (yyvsp[0].strng);}
#line 1523 "Lambda_analyzer.tab.c"
    break;

  case 11: /* constant_declaration: KW_CONST TK_IDENTIFIER SIMPLE_ASSIGN TK_NUMBER ':' KW_INTEGER  */
#line 182 "Lambda_analyzer.y"
                                                                                      {(yyval.strng) = template("const int %s = %s",(yyvsp[-4].strng),(yyvsp[-2].strng));}
#line 1529 "Lambda_analyzer.tab.c"
    break;

  case 12: /* constant_declaration: KW_CONST TK_IDENTIFIER SIMPLE_ASSIGN TK_REAL ':' KW_SCALAR  */
#line 183 "Lambda_analyzer.y"
                                                                                      {(yyval.strng) = template("const double %s = %s",(yyvsp[-4].strng),(yyvsp[-2].strng));}
#line 1535 "Lambda_analyzer.tab.c"
    break;

  case 13: /* constant_declaration: KW_CONST TK_IDENTIFIER SIMPLE_ASSIGN TK_STRING ':' KW_STR  */
#line 184 "Lambda_analyzer.y"
                                                                                      {(yyval.strng) = template("const StringType %s = %s",(yyvsp[-4].strng),(yyvsp[-2].strng));}
#line 1541 "Lambda_analyzer.tab.c"
    break;

  case 14: /* constant_declaration: KW_CONST TK_IDENTIFIER SIMPLE_ASSIGN KW_TRUE ':' KW_BOOL  */
#line 185 "Lambda_analyzer.y"
                                                                                      {(yyval.strng) = template("const int %s = 1",(yyvsp[-4].strng));}
#line 1547 "Lambda_analyzer.tab.c"
    break;

  case 15: /* constant_declaration: KW_CONST TK_IDENTIFIER SIMPLE_ASSIGN KW_FALSE ':' KW_BOOL  */
#line 186 "Lambda_analyzer.y"
                                                                                      {(yyval.strng) = template("const int %s = 0",(yyvsp[-4].strng));}
#line 1553 "Lambda_analyzer.tab.c"
    break;

  case 16: /* function_declaration: KW_DEF function_header function_body KW_ENDDEF  */
#line 190 "Lambda_analyzer.y"
                                                                      {(yyval.strng) = template("%s{\n%s\n}\n",(yyvsp[-2].strng),(yyvsp[-1].strng));}
#line 1559 "Lambda_analyzer.tab.c"
    break;

  case 17: /* variable_declaration: TK_IDENTIFIER ':' data_type  */
#line 192 "Lambda_analyzer.y"
                                                   {(yyval.strng) = template("%s %s" ,(yyvsp[0].strng),(yyvsp[-2].strng));}
#line 1565 "Lambda_analyzer.tab.c"
    break;

  case 18: /* variable_declaration: array_var ':' data_type  */
#line 193 "Lambda_analyzer.y"
                                                   {(yyval.strng) = template("%s %s" ,(yyvsp[0].strng),(yyvsp[-2].strng));}
#line 1571 "Lambda_analyzer.tab.c"
    break;

  case 19: /* variable_declaration: TK_IDENTIFIER ',' variable_declaration  */
#line 194 "Lambda_analyzer.y"
                                                             {(yyval.strng) = template("%s, %s",(yyvsp[0].strng),(yyvsp[-2].strng));}
#line 1577 "Lambda_analyzer.tab.c"
    break;

  case 20: /* variable_declaration: array_var ',' variable_declaration  */
#line 195 "Lambda_analyzer.y"
                                                             {(yyval.strng) = template("%s, %s",(yyvsp[0].strng),(yyvsp[-2].strng));}
#line 1583 "Lambda_analyzer.tab.c"
    break;

  case 21: /* array_var: TK_IDENTIFIER brackets  */
#line 199 "Lambda_analyzer.y"
                                   {(yyval.strng) = template("%s%s;\n" ,(yyvsp[-1].strng),(yyvsp[0].strng));}
#line 1589 "Lambda_analyzer.tab.c"
    break;

  case 22: /* data_type: KW_INTEGER  */
#line 204 "Lambda_analyzer.y"
                       {(yyval.strng) = template("int");}
#line 1595 "Lambda_analyzer.tab.c"
    break;

  case 23: /* data_type: KW_BOOL  */
#line 205 "Lambda_analyzer.y"
                       {(yyval.strng) = template("int");}
#line 1601 "Lambda_analyzer.tab.c"
    break;

  case 24: /* data_type: KW_SCALAR  */
#line 206 "Lambda_analyzer.y"
                       {(yyval.strng) = template("double");}
#line 1607 "Lambda_analyzer.tab.c"
    break;

  case 25: /* data_type: KW_STR  */
#line 207 "Lambda_analyzer.y"
                       {(yyval.strng) = template("StringType");}
#line 1613 "Lambda_analyzer.tab.c"
    break;

  case 26: /* expression: TK_NUMBER  */
#line 214 "Lambda_analyzer.y"
                                            {(yyval.strng) = template("%s", (yyvsp[0].strng));}
#line 1619 "Lambda_analyzer.tab.c"
    break;

  case 27: /* expression: TK_REAL  */
#line 215 "Lambda_analyzer.y"
                                            {(yyval.strng) = template("%s", (yyvsp[0].strng));}
#line 1625 "Lambda_analyzer.tab.c"
    break;

  case 28: /* expression: TK_CHAR  */
#line 216 "Lambda_analyzer.y"
                                            {(yyval.strng) = template("%s", (yyvsp[0].strng));}
#line 1631 "Lambda_analyzer.tab.c"
    break;

  case 29: /* expression: TK_STRING  */
#line 217 "Lambda_analyzer.y"
                                            {(yyval.strng) = template("%s", (yyvsp[0].strng));}
#line 1637 "Lambda_analyzer.tab.c"
    break;

  case 30: /* expression: TK_DIGIT  */
#line 218 "Lambda_analyzer.y"
                                            {(yyval.strng) = template("%s", (yyvsp[0].strng));}
#line 1643 "Lambda_analyzer.tab.c"
    break;

  case 31: /* expression: TK_IDENTIFIER  */
#line 219 "Lambda_analyzer.y"
                                            {(yyval.strng) = template("%s", (yyvsp[0].strng));}
#line 1649 "Lambda_analyzer.tab.c"
    break;

  case 32: /* expression: TK_IDENTIFIER '(' function_arg ')'  */
#line 220 "Lambda_analyzer.y"
                                            {(yyval.strng) = template("%s(%s)", (yyvsp[-3].strng), (yyvsp[-1].strng));}
#line 1655 "Lambda_analyzer.tab.c"
    break;

  case 33: /* expression: TK_IDENTIFIER '(' ')'  */
#line 221 "Lambda_analyzer.y"
                                            {(yyval.strng) = template("%s()", (yyvsp[-2].strng));}
#line 1661 "Lambda_analyzer.tab.c"
    break;

  case 34: /* expression: TK_IDENTIFIER brackets  */
#line 222 "Lambda_analyzer.y"
                                            {(yyval.strng) = template("%s%s", (yyvsp[-1].strng), (yyvsp[0].strng));}
#line 1667 "Lambda_analyzer.tab.c"
    break;

  case 35: /* expression: KW_TRUE  */
#line 223 "Lambda_analyzer.y"
                                            {(yyval.strng) = template("1");}
#line 1673 "Lambda_analyzer.tab.c"
    break;

  case 36: /* expression: KW_FALSE  */
#line 224 "Lambda_analyzer.y"
                                            {(yyval.strng) = template("0");}
#line 1679 "Lambda_analyzer.tab.c"
    break;

  case 37: /* expression: '(' expression ')'  */
#line 225 "Lambda_analyzer.y"
                                            {(yyval.strng) = template("(%s)",(yyvsp[-1].strng));}
#line 1685 "Lambda_analyzer.tab.c"
    break;

  case 38: /* expression: math_expression  */
#line 226 "Lambda_analyzer.y"
                                            {(yyval.strng) = (yyvsp[0].strng);}
#line 1691 "Lambda_analyzer.tab.c"
    break;

  case 39: /* expression: logical_expression  */
#line 227 "Lambda_analyzer.y"
                                            {(yyval.strng) = (yyvsp[0].strng);}
#line 1697 "Lambda_analyzer.tab.c"
    break;

  case 40: /* expression: '+' expression  */
#line 228 "Lambda_analyzer.y"
                                            {(yyval.strng) = template("+%s", (yyvsp[0].strng));}
#line 1703 "Lambda_analyzer.tab.c"
    break;

  case 41: /* expression: '-' expression  */
#line 229 "Lambda_analyzer.y"
                                            {(yyval.strng) = template("-%s", (yyvsp[0].strng));}
#line 1709 "Lambda_analyzer.tab.c"
    break;

  case 42: /* math_expression: expression POW expression  */
#line 233 "Lambda_analyzer.y"
                                    {(yyval.strng) = template("pow(%s,%s)", (yyvsp[-2].strng),(yyvsp[0].strng));}
#line 1715 "Lambda_analyzer.tab.c"
    break;

  case 43: /* math_expression: expression '+' expression  */
#line 234 "Lambda_analyzer.y"
                                    {(yyval.strng) = template("%s+%s", (yyvsp[-2].strng),(yyvsp[0].strng));}
#line 1721 "Lambda_analyzer.tab.c"
    break;

  case 44: /* math_expression: expression '-' expression  */
#line 235 "Lambda_analyzer.y"
                                    {(yyval.strng) = template("%s-%s", (yyvsp[-2].strng),(yyvsp[0].strng));}
#line 1727 "Lambda_analyzer.tab.c"
    break;

  case 45: /* math_expression: expression '*' expression  */
#line 236 "Lambda_analyzer.y"
                                    {(yyval.strng) = template("%s*%s", (yyvsp[-2].strng),(yyvsp[0].strng));}
#line 1733 "Lambda_analyzer.tab.c"
    break;

  case 46: /* math_expression: expression '/' expression  */
#line 237 "Lambda_analyzer.y"
                                    {(yyval.strng) = template("%s/%s", (yyvsp[-2].strng),(yyvsp[0].strng));}
#line 1739 "Lambda_analyzer.tab.c"
    break;

  case 47: /* math_expression: expression MOD expression  */
#line 238 "Lambda_analyzer.y"
                                    {(yyval.strng) = template("%s %% %s", (yyvsp[-2].strng),(yyvsp[0].strng));}
#line 1745 "Lambda_analyzer.tab.c"
    break;

  case 48: /* math_expression: expression KW_MOD expression  */
#line 239 "Lambda_analyzer.y"
                                    {(yyval.strng) = template("%s %% %s", (yyvsp[-2].strng),(yyvsp[0].strng));}
#line 1751 "Lambda_analyzer.tab.c"
    break;

  case 49: /* logical_expression: expression EQ expression  */
#line 243 "Lambda_analyzer.y"
                                    {(yyval.strng) = template("%s==%s",(yyvsp[-2].strng),(yyvsp[0].strng));}
#line 1757 "Lambda_analyzer.tab.c"
    break;

  case 50: /* logical_expression: expression LEQ expression  */
#line 244 "Lambda_analyzer.y"
                                    {(yyval.strng) = template("%s<=%s",(yyvsp[-2].strng),(yyvsp[0].strng));}
#line 1763 "Lambda_analyzer.tab.c"
    break;

  case 51: /* logical_expression: expression GEQ expression  */
#line 245 "Lambda_analyzer.y"
                                    {(yyval.strng) = template("%s>=%s",(yyvsp[-2].strng),(yyvsp[0].strng));}
#line 1769 "Lambda_analyzer.tab.c"
    break;

  case 52: /* logical_expression: expression NEQ expression  */
#line 246 "Lambda_analyzer.y"
                                    {(yyval.strng) = template("%s!=%s",(yyvsp[-2].strng),(yyvsp[0].strng));}
#line 1775 "Lambda_analyzer.tab.c"
    break;

  case 53: /* logical_expression: expression '<' expression  */
#line 247 "Lambda_analyzer.y"
                                    {(yyval.strng) = template("%s<%s",(yyvsp[-2].strng),(yyvsp[0].strng));}
#line 1781 "Lambda_analyzer.tab.c"
    break;

  case 54: /* logical_expression: expression '>' expression  */
#line 248 "Lambda_analyzer.y"
                                    {(yyval.strng) = template("%s>%s",(yyvsp[-2].strng),(yyvsp[0].strng));}
#line 1787 "Lambda_analyzer.tab.c"
    break;

  case 55: /* logical_expression: expression LAND expression  */
#line 249 "Lambda_analyzer.y"
                                    {(yyval.strng) = template("%s && %s",(yyvsp[-2].strng),(yyvsp[0].strng));}
#line 1793 "Lambda_analyzer.tab.c"
    break;

  case 56: /* logical_expression: expression KW_AND expression  */
#line 250 "Lambda_analyzer.y"
                                    {(yyval.strng) = template("%s && %s",(yyvsp[-2].strng),(yyvsp[0].strng));}
#line 1799 "Lambda_analyzer.tab.c"
    break;

  case 57: /* logical_expression: expression LOR expression  */
#line 251 "Lambda_analyzer.y"
                                    {(yyval.strng) = template("%s || %s",(yyvsp[-2].strng),(yyvsp[0].strng));}
#line 1805 "Lambda_analyzer.tab.c"
    break;

  case 58: /* logical_expression: expression KW_OR expression  */
#line 252 "Lambda_analyzer.y"
                                    {(yyval.strng) = template("%s || %s",(yyvsp[-2].strng),(yyvsp[0].strng));}
#line 1811 "Lambda_analyzer.tab.c"
    break;

  case 59: /* logical_expression: '!' expression  */
#line 253 "Lambda_analyzer.y"
                                    {(yyval.strng) = template("!%s",(yyvsp[0].strng));}
#line 1817 "Lambda_analyzer.tab.c"
    break;

  case 60: /* logical_expression: KW_NOT expression  */
#line 254 "Lambda_analyzer.y"
                                    {(yyval.strng) = template("!%s",(yyvsp[0].strng));}
#line 1823 "Lambda_analyzer.tab.c"
    break;

  case 61: /* brackets: '[' expression ']'  */
#line 259 "Lambda_analyzer.y"
                                         {(yyval.strng) = template( "[%s]", (yyvsp[-1].strng));}
#line 1829 "Lambda_analyzer.tab.c"
    break;

  case 62: /* brackets: brackets '[' expression ']'  */
#line 260 "Lambda_analyzer.y"
                                         {(yyval.strng) = template( "%s[%s]", (yyvsp[-3].strng), (yyvsp[-1].strng));}
#line 1835 "Lambda_analyzer.tab.c"
    break;

  case 63: /* brackets: '[' ']'  */
#line 261 "Lambda_analyzer.y"
                                         {(yyval.strng) = template( "[]");}
#line 1841 "Lambda_analyzer.tab.c"
    break;

  case 64: /* commands: command commands  */
#line 269 "Lambda_analyzer.y"
                           {(yyval.strng) = template("%s\n%s\n", (yyvsp[-1].strng),(yyvsp[0].strng));}
#line 1847 "Lambda_analyzer.tab.c"
    break;

  case 65: /* commands: command  */
#line 270 "Lambda_analyzer.y"
                           {(yyval.strng) = (yyvsp[0].strng);}
#line 1853 "Lambda_analyzer.tab.c"
    break;

  case 66: /* command: ';'  */
#line 274 "Lambda_analyzer.y"
        {(yyval.strng) = template(";");}
#line 1859 "Lambda_analyzer.tab.c"
    break;

  case 67: /* command: variable_assignement ';'  */
#line 275 "Lambda_analyzer.y"
                                               {(yyval.strng) = template("%s;\n",(yyvsp[-1].strng));}
#line 1865 "Lambda_analyzer.tab.c"
    break;

  case 68: /* command: variable_declaration ';'  */
#line 276 "Lambda_analyzer.y"
                                               {(yyval.strng) = template("%s;\n",(yyvsp[-1].strng));}
#line 1871 "Lambda_analyzer.tab.c"
    break;

  case 69: /* command: constant_declaration ';'  */
#line 277 "Lambda_analyzer.y"
                                               {(yyval.strng) = template("%s;\n",(yyvsp[-1].strng));}
#line 1877 "Lambda_analyzer.tab.c"
    break;

  case 70: /* command: array_assignement ';'  */
#line 278 "Lambda_analyzer.y"
                                               {(yyval.strng) = template("%s;\n",(yyvsp[-1].strng));}
#line 1883 "Lambda_analyzer.tab.c"
    break;

  case 71: /* command: if_statement ';'  */
#line 279 "Lambda_analyzer.y"
                                            {(yyval.strng) = template("%s\n",(yyvsp[-1].strng));}
#line 1889 "Lambda_analyzer.tab.c"
    break;

  case 72: /* command: for_statement ';'  */
#line 280 "Lambda_analyzer.y"
                                            {(yyval.strng) = template("%s\n",(yyvsp[-1].strng));}
#line 1895 "Lambda_analyzer.tab.c"
    break;

  case 73: /* command: compound_array_i ';'  */
#line 281 "Lambda_analyzer.y"
                                            {(yyval.strng) = template("%s;\n",(yyvsp[-1].strng));}
#line 1901 "Lambda_analyzer.tab.c"
    break;

  case 74: /* command: compound_array_a ';'  */
#line 282 "Lambda_analyzer.y"
                                            {(yyval.strng) = template("%s;\n",(yyvsp[-1].strng));}
#line 1907 "Lambda_analyzer.tab.c"
    break;

  case 75: /* command: while_statement ';'  */
#line 283 "Lambda_analyzer.y"
                                            {(yyval.strng) = template("%s\n",(yyvsp[-1].strng));}
#line 1913 "Lambda_analyzer.tab.c"
    break;

  case 76: /* command: KW_BREAK ';'  */
#line 284 "Lambda_analyzer.y"
                                            {(yyval.strng) = template("break;");}
#line 1919 "Lambda_analyzer.tab.c"
    break;

  case 77: /* command: KW_CONTINUE ';'  */
#line 285 "Lambda_analyzer.y"
                                            {(yyval.strng) = template("continue;");}
#line 1925 "Lambda_analyzer.tab.c"
    break;

  case 78: /* command: KW_RETURN ';'  */
#line 286 "Lambda_analyzer.y"
                                            {(yyval.strng) = template("return;");}
#line 1931 "Lambda_analyzer.tab.c"
    break;

  case 79: /* command: KW_RETURN expression ';'  */
#line 287 "Lambda_analyzer.y"
                                            {(yyval.strng) = template("return %s;",(yyvsp[-1].strng));}
#line 1937 "Lambda_analyzer.tab.c"
    break;

  case 80: /* command: TK_IDENTIFIER '(' function_arg ')' ';'  */
#line 288 "Lambda_analyzer.y"
                                            {(yyval.strng) = template("%s(%s);\n",(yyvsp[-4].strng),(yyvsp[-2].strng));}
#line 1943 "Lambda_analyzer.tab.c"
    break;

  case 81: /* command: TK_IDENTIFIER '(' ')' ';'  */
#line 289 "Lambda_analyzer.y"
                                            {(yyval.strng) = template("%s()\n",(yyvsp[-3].strng));}
#line 1949 "Lambda_analyzer.tab.c"
    break;

  case 82: /* command: TK_IDENTIFIER ADD_ASSIGN TK_IDENTIFIER ';'  */
#line 290 "Lambda_analyzer.y"
                                                  {(yyval.strng) = template("%s += %s;\n",(yyvsp[-3].strng),(yyvsp[-1].strng));}
#line 1955 "Lambda_analyzer.tab.c"
    break;

  case 83: /* command: TK_IDENTIFIER SUB_ASSIGN TK_IDENTIFIER ';'  */
#line 291 "Lambda_analyzer.y"
                                                  {(yyval.strng) = template("%s -= %s;\n",(yyvsp[-3].strng),(yyvsp[-1].strng));}
#line 1961 "Lambda_analyzer.tab.c"
    break;

  case 84: /* command: TK_IDENTIFIER MULT_ASSIGN TK_IDENTIFIER ';'  */
#line 292 "Lambda_analyzer.y"
                                                  {(yyval.strng) = template("%s *= %s;\n",(yyvsp[-3].strng),(yyvsp[-1].strng));}
#line 1967 "Lambda_analyzer.tab.c"
    break;

  case 85: /* command: TK_IDENTIFIER DIV_ASSIGN TK_IDENTIFIER ';'  */
#line 293 "Lambda_analyzer.y"
                                                  {(yyval.strng) = template("%s /= %s;\n",(yyvsp[-3].strng),(yyvsp[-1].strng));}
#line 1973 "Lambda_analyzer.tab.c"
    break;

  case 86: /* command: TK_IDENTIFIER MOD_ASSIGN TK_IDENTIFIER ';'  */
#line 294 "Lambda_analyzer.y"
                                                  {(yyval.strng) = template("%s %%= %s;\n",(yyvsp[-3].strng),(yyvsp[-1].strng));}
#line 1979 "Lambda_analyzer.tab.c"
    break;

  case 87: /* variable_assignement: TK_IDENTIFIER SIMPLE_ASSIGN expression  */
#line 298 "Lambda_analyzer.y"
                                                             {(yyval.strng) = template("%s = %s;\n",(yyvsp[-2].strng),(yyvsp[0].strng));}
#line 1985 "Lambda_analyzer.tab.c"
    break;

  case 88: /* array_assignement: TK_IDENTIFIER brackets SIMPLE_ASSIGN expression  */
#line 299 "Lambda_analyzer.y"
                                                                       {(yyval.strng) = template("%s%s = %s;\n",(yyvsp[-3].strng),(yyvsp[-2].strng),(yyvsp[0].strng));}
#line 1991 "Lambda_analyzer.tab.c"
    break;

  case 89: /* if_statement: KW_IF '(' expression ')' ':' commands KW_ENDIF  */
#line 302 "Lambda_analyzer.y"
                                                                                   {(yyval.strng) = template("if(%s){\n%s\n}\n",(yyvsp[-4].strng),(yyvsp[-1].strng));}
#line 1997 "Lambda_analyzer.tab.c"
    break;

  case 90: /* if_statement: KW_IF '(' expression ')' ':' commands KW_ELSE ':' commands KW_ENDIF  */
#line 303 "Lambda_analyzer.y"
                                                                                   {(yyval.strng) = template("if(%s){\n%s\n} else{\n%s\n}\n",(yyvsp[-7].strng),(yyvsp[-4].strng),(yyvsp[-1].strng));}
#line 2003 "Lambda_analyzer.tab.c"
    break;

  case 91: /* for_statement: KW_FOR TK_IDENTIFIER KW_IN '[' expression ':' expression ']' ':' commands KW_ENDFOR  */
#line 308 "Lambda_analyzer.y"
                                                                                                    {(yyval.strng) = template("for(int %s = (%s); %s < (%s); %s++){\n%s\n}\n" ,(yyvsp[-9].strng),(yyvsp[-6].strng),(yyvsp[-9].strng),(yyvsp[-4].strng),(yyvsp[-9].strng),(yyvsp[-1].strng));}
#line 2009 "Lambda_analyzer.tab.c"
    break;

  case 92: /* for_statement: KW_FOR TK_IDENTIFIER KW_IN '[' expression ':' expression ':' expression ']' commands KW_ENDFOR  */
#line 309 "Lambda_analyzer.y"
                                                                                                               {(yyval.strng) = template("for(int %s = (%s); %s < (%s); %s+=(%s)){\n%s\n}\n" ,(yyvsp[-10].strng),(yyvsp[-7].strng),(yyvsp[-10].strng),(yyvsp[-5].strng),(yyvsp[-10].strng),(yyvsp[-3].strng),(yyvsp[-1].strng));}
#line 2015 "Lambda_analyzer.tab.c"
    break;

  case 93: /* compound_array_a: TK_IDENTIFIER ASSIGN '[' expression KW_FOR TK_IDENTIFIER ':' data_type KW_IN TK_IDENTIFIER KW_OF expression ']' ':' data_type  */
#line 315 "Lambda_analyzer.y"
                                                                                                                                                   {(yyval.strng) = template("%s* %s = (%s*)malloc(%s * sizeof(%s));\nfor(int aRrAy_i999 = 0; aRrAy_i999 < %s; ++aRrAy_i999){\n%s[aRrAy_i999] = %s;\n}\n",(yyvsp[0].strng),(yyvsp[-14].strng),(yyvsp[0].strng),(yyvsp[-3].strng),(yyvsp[0].strng),(yyvsp[-3].strng),(yyvsp[-14].strng),replaceWord((yyvsp[-11].strng),(yyvsp[-9].strng),template("%s[aRrAy_i999]",(yyvsp[-5].strng))));}
#line 2021 "Lambda_analyzer.tab.c"
    break;

  case 94: /* compound_array_i: TK_IDENTIFIER ASSIGN '[' expression KW_FOR TK_IDENTIFIER ':' expression ']' ':' data_type  */
#line 321 "Lambda_analyzer.y"
                                                                                                            {(yyval.strng) = template("%s* %s = (%s*)malloc(%s * sizeof(%s));\nfor(int %s = 0; %s < %s; ++%s){\n%s[%s] = %s;\n}\n",(yyvsp[0].strng),(yyvsp[-10].strng),(yyvsp[0].strng),(yyvsp[-3].strng),(yyvsp[0].strng),(yyvsp[-5].strng),(yyvsp[-5].strng),(yyvsp[-3].strng),(yyvsp[-5].strng),(yyvsp[-10].strng),(yyvsp[-5].strng),(yyvsp[-7].strng));}
#line 2027 "Lambda_analyzer.tab.c"
    break;

  case 95: /* while_statement: KW_WHILE '(' expression ')' ':' commands KW_ENDWHILE  */
#line 324 "Lambda_analyzer.y"
                                                                       {(yyval.strng) = template("while(%s){\n%s\n}\n",(yyvsp[-4].strng),(yyvsp[-1].strng));}
#line 2033 "Lambda_analyzer.tab.c"
    break;

  case 96: /* function_arg: expression  */
#line 329 "Lambda_analyzer.y"
                         {(yyval.strng) = (yyvsp[0].strng);}
#line 2039 "Lambda_analyzer.tab.c"
    break;

  case 97: /* function_arg: function_arg ',' expression  */
#line 330 "Lambda_analyzer.y"
                              {(yyval.strng) = template( "%s, %s", (yyvsp[-2].strng), (yyvsp[0].strng));}
#line 2045 "Lambda_analyzer.tab.c"
    break;

  case 98: /* function_header: TK_IDENTIFIER '(' args ')' '-' '>' data_type ':'  */
#line 334 "Lambda_analyzer.y"
                                                                 {(yyval.strng) = template("%s %s(%s)",(yyvsp[-1].strng),(yyvsp[-7].strng),(yyvsp[-5].strng));}
#line 2051 "Lambda_analyzer.tab.c"
    break;

  case 99: /* function_header: TK_IDENTIFIER '(' ')' '-' '>' data_type ':'  */
#line 335 "Lambda_analyzer.y"
                                                                 {(yyval.strng) = template("%s %s()",(yyvsp[-1].strng),(yyvsp[-6].strng));}
#line 2057 "Lambda_analyzer.tab.c"
    break;

  case 100: /* function_header: TK_IDENTIFIER '(' args ')' '-' '>' KW_VOID ':'  */
#line 336 "Lambda_analyzer.y"
                                                               {(yyval.strng) = template("void %s(%s)",(yyvsp[-7].strng),(yyvsp[-5].strng));}
#line 2063 "Lambda_analyzer.tab.c"
    break;

  case 101: /* function_header: TK_IDENTIFIER '(' ')' '-' '>' KW_VOID ':'  */
#line 337 "Lambda_analyzer.y"
                                                               {(yyval.strng) = template("void %s()",(yyvsp[-6].strng));}
#line 2069 "Lambda_analyzer.tab.c"
    break;

  case 102: /* function_header: TK_IDENTIFIER '(' args ')' ':'  */
#line 338 "Lambda_analyzer.y"
                                                {(yyval.strng) = template("void %s(%s)",(yyvsp[-4].strng),(yyvsp[-2].strng));}
#line 2075 "Lambda_analyzer.tab.c"
    break;

  case 103: /* function_header: TK_IDENTIFIER '(' ')' ':'  */
#line 339 "Lambda_analyzer.y"
                                                {(yyval.strng) = template("void %s()",(yyvsp[-3].strng));}
#line 2081 "Lambda_analyzer.tab.c"
    break;

  case 104: /* function_body: commands  */
#line 341 "Lambda_analyzer.y"
                        {(yyval.strng) = template("%s\n",(yyvsp[0].strng));}
#line 2087 "Lambda_analyzer.tab.c"
    break;

  case 105: /* args: TK_IDENTIFIER ':' data_type  */
#line 343 "Lambda_analyzer.y"
                                                      {(yyval.strng) = template("%s %s",(yyvsp[0].strng),(yyvsp[-2].strng));}
#line 2093 "Lambda_analyzer.tab.c"
    break;

  case 106: /* args: TK_IDENTIFIER ':' data_type ',' args  */
#line 344 "Lambda_analyzer.y"
                                                      {(yyval.strng) = template("%s %s, %s",(yyvsp[-2].strng),(yyvsp[-4].strng),(yyvsp[0].strng));}
#line 2099 "Lambda_analyzer.tab.c"
    break;

  case 107: /* args: TK_IDENTIFIER '[' ']' ':' data_type  */
#line 345 "Lambda_analyzer.y"
                                                        {(yyval.strng) = template("%s* %s",(yyvsp[0].strng),(yyvsp[-4].strng));}
#line 2105 "Lambda_analyzer.tab.c"
    break;

  case 108: /* args: TK_IDENTIFIER '[' ']' ':' data_type ',' args  */
#line 346 "Lambda_analyzer.y"
                                                        {(yyval.strng) = template("%s* %s, %s",(yyvsp[-2].strng),(yyvsp[-6].strng),(yyvsp[0].strng));}
#line 2111 "Lambda_analyzer.tab.c"
    break;


#line 2115 "Lambda_analyzer.tab.c"

      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (YY_("syntax error"));
    }

  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;
  ++yynerrs;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 361 "Lambda_analyzer.y"

int main () {
  if ( yyparse() == 1 ) {
    printf("at token %s\nRejected!\n",yylval.strng);
  }
}
