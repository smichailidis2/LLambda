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

    extern int yylex(void);
    extern int line_num;

    const char* c_prologue = 
    "#include \"fclib.h\"\n#include \"math.h\"\n#include <stdio.h>\n"
    "\n"
    ;


#line 89 "Lambda_analyzer.tab.c"

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
  YYSYMBOL_TK_DECIMAL = 9,                 /* TK_DECIMAL  */
  YYSYMBOL_KW_MAIN = 10,                   /* KW_MAIN  */
  YYSYMBOL_KW_INTEGER = 11,                /* KW_INTEGER  */
  YYSYMBOL_KW_SCALAR = 12,                 /* KW_SCALAR  */
  YYSYMBOL_KW_STR = 13,                    /* KW_STR  */
  YYSYMBOL_KW_BOOL = 14,                   /* KW_BOOL  */
  YYSYMBOL_KW_TRUE = 15,                   /* KW_TRUE  */
  YYSYMBOL_KW_FALSE = 16,                  /* KW_FALSE  */
  YYSYMBOL_KW_CONST = 17,                  /* KW_CONST  */
  YYSYMBOL_KW_IF = 18,                     /* KW_IF  */
  YYSYMBOL_KW_ELSE = 19,                   /* KW_ELSE  */
  YYSYMBOL_KW_ENDIF = 20,                  /* KW_ENDIF  */
  YYSYMBOL_KW_FOR = 21,                    /* KW_FOR  */
  YYSYMBOL_KW_IN = 22,                     /* KW_IN  */
  YYSYMBOL_KW_ENDFOR = 23,                 /* KW_ENDFOR  */
  YYSYMBOL_KW_WHILE = 24,                  /* KW_WHILE  */
  YYSYMBOL_KW_ENDWHILE = 25,               /* KW_ENDWHILE  */
  YYSYMBOL_KW_BREAK = 26,                  /* KW_BREAK  */
  YYSYMBOL_KW_RETURN = 27,                 /* KW_RETURN  */
  YYSYMBOL_KW_CONTINUE = 28,               /* KW_CONTINUE  */
  YYSYMBOL_KW_AND = 29,                    /* KW_AND  */
  YYSYMBOL_KW_OR = 30,                     /* KW_OR  */
  YYSYMBOL_KW_OF = 31,                     /* KW_OF  */
  YYSYMBOL_KW_DEF = 32,                    /* KW_DEF  */
  YYSYMBOL_KW_ENDDEF = 33,                 /* KW_ENDDEF  */
  YYSYMBOL_ADD_ASSIGN = 34,                /* ADD_ASSIGN  */
  YYSYMBOL_SUB_ASSIGN = 35,                /* SUB_ASSIGN  */
  YYSYMBOL_MULT_ASSIGN = 36,               /* MULT_ASSIGN  */
  YYSYMBOL_DIV_ASSIGN = 37,                /* DIV_ASSIGN  */
  YYSYMBOL_MOD_ASSIGN = 38,                /* MOD_ASSIGN  */
  YYSYMBOL_ASSIGN = 39,                    /* ASSIGN  */
  YYSYMBOL_40_ = 40,                       /* '='  */
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
  YYSYMBOL_63_ = 63,                       /* ':'  */
  YYSYMBOL_64_ = 64,                       /* ';'  */
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
  YYSYMBOL_if_statement = 85,              /* if_statement  */
  YYSYMBOL_for_statement = 86,             /* for_statement  */
  YYSYMBOL_compound_array_a = 87,          /* compound_array_a  */
  YYSYMBOL_compound_array_i = 88,          /* compound_array_i  */
  YYSYMBOL_while_statement = 89,           /* while_statement  */
  YYSYMBOL_function_arg = 90,              /* function_arg  */
  YYSYMBOL_function_header = 91,           /* function_header  */
  YYSYMBOL_function_body = 92              /* function_body  */
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
typedef yytype_uint8 yy_state_t;

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
#define YYLAST   500

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  66
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  27
/* YYNRULES -- Number of rules.  */
#define YYNRULES  96
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  230

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   304


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
       2,     2,     2,     2,     2,     2,     2,     2,    63,    64,
      49,    40,    50,     2,     2,     2,     2,     2,     2,     2,
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
      35,    36,    37,    38,    39,    41,    42,    44,    45,    46,
      47,    48,    53,    54,    57
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   120,   120,   122,   124,   126,   127,   128,   129,   134,
     136,   140,   141,   142,   143,   144,   148,   150,   151,   152,
     156,   161,   162,   163,   164,   171,   172,   173,   174,   175,
     176,   177,   178,   179,   180,   181,   182,   183,   184,   185,
     186,   187,   191,   192,   193,   194,   195,   196,   197,   201,
     202,   203,   204,   205,   206,   207,   208,   209,   210,   211,
     212,   217,   218,   219,   227,   228,   232,   233,   234,   235,
     236,   237,   238,   239,   240,   241,   242,   243,   244,   245,
     246,   247,   248,   249,   250,   255,   258,   259,   264,   265,
     272,   278,   280,   284,   285,   289,   290
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
  "TK_CHAR", "TK_STRING", "TK_REAL", "TK_DIGIT", "TK_NUMBER", "TK_DECIMAL",
  "KW_MAIN", "KW_INTEGER", "KW_SCALAR", "KW_STR", "KW_BOOL", "KW_TRUE",
  "KW_FALSE", "KW_CONST", "KW_IF", "KW_ELSE", "KW_ENDIF", "KW_FOR",
  "KW_IN", "KW_ENDFOR", "KW_WHILE", "KW_ENDWHILE", "KW_BREAK", "KW_RETURN",
  "KW_CONTINUE", "KW_AND", "KW_OR", "KW_OF", "KW_DEF", "KW_ENDDEF",
  "ADD_ASSIGN", "SUB_ASSIGN", "MULT_ASSIGN", "DIV_ASSIGN", "MOD_ASSIGN",
  "ASSIGN", "'='", "LOR", "LAND", "'!'", "KW_NOT", "NEQ", "EQ", "LEQ",
  "GEQ", "'<'", "'>'", "'*'", "'/'", "MOD", "KW_MOD", "'-'", "'+'", "POW",
  "'.'", "'('", "')'", "'['", "']'", "':'", "';'", "','", "$accept",
  "input", "PROGRAM_START", "pdeclare", "code", "s_main_s", "main_body",
  "constant_declaration", "function_declaration", "variable_declaration",
  "array_var", "data_type", "expression", "math_expression",
  "logical_expression", "brackets", "commands", "command",
  "variable_assignement", "if_statement", "for_statement",
  "compound_array_a", "compound_array_i", "while_statement",
  "function_arg", "function_header", "function_body", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-77)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -77,    22,   -77,   -77,     9,   -77,    56,    25,    13,   -77,
     -77,   -77,   -77,   -77,     3,   132,    35,   -42,   -11,   -12,
      -6,     6,    28,     0,   -77,   -77,   -77,   -77,   -77,     2,
     -77,    60,   132,    76,   205,    30,   426,    34,   109,    57,
      54,    -1,    58,   -77,   -77,     6,   -77,    59,    61,    64,
      65,    67,    99,   131,   -77,   -77,    73,    83,    87,    88,
      90,    91,    92,   -15,   -77,   -77,   -77,   -77,   -77,   -77,
     -77,   -77,   205,   205,   205,   205,   205,   398,   -77,   -77,
     -40,    93,   154,   155,   157,   158,   159,   102,   205,   133,
     -22,   205,   142,   205,   -77,   -77,   253,   -77,   -77,   -77,
     -77,   -77,   -77,   -77,   -77,   -77,   -77,   152,   156,   162,
     161,   164,   191,   107,   443,   443,   112,   112,   369,   205,
     205,   205,   205,   205,   205,   205,   205,   205,   205,   205,
     205,   205,   205,   205,   205,   205,   115,   205,     6,   116,
     117,   119,   120,   121,    71,   282,   122,   -25,   205,   398,
     111,   118,   130,   -77,   -77,   -77,   -77,   -77,   -77,   -77,
      -4,   -77,   443,   427,   427,   443,   175,   175,   185,   185,
     185,   185,    16,    16,    16,    16,   112,   112,   112,   151,
     398,   169,   -77,   -77,   -77,   -77,   -77,   -77,   -77,   224,
     -77,   -77,   139,   311,   141,   197,     6,   -77,   132,   -77,
     212,   -77,   -77,     6,   153,   192,   -77,   170,    63,   210,
     -77,   205,   180,   -77,    26,   340,     6,     6,   211,   181,
     232,   233,   193,   132,   -77,   -77,     6,   -77,   234,   -77
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       5,     0,     2,     3,     0,     1,     0,     0,     0,     5,
       6,     7,     8,    19,     0,     0,     0,     0,     0,     0,
       0,     0,     4,     0,    63,    21,    23,    24,    22,     0,
      18,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    66,    96,    65,    67,     0,     0,     0,
       0,     0,     0,     0,    61,    17,     0,     0,     0,     0,
       0,     0,     0,    31,    27,    28,    26,    29,    25,    30,
      35,    36,     0,     0,     0,     0,     0,    93,    38,    39,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    74,    76,     0,    75,    64,    69,
      70,    72,    71,    73,    16,    62,    20,     0,     0,     0,
       0,     0,     0,    34,    59,    60,    41,    40,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      39,     0,    39,    77,    13,    11,    12,    14,    15,    33,
       0,    37,    56,    58,    57,    55,    52,    49,    50,    51,
      53,    54,    45,    46,    47,    48,    44,    43,    42,     0,
      94,     0,    10,    80,    81,    82,    83,    84,    90,     0,
      85,    79,     0,     0,     0,     0,     0,    32,     0,     9,
       0,    78,    68,     0,     0,     0,    95,     0,     0,     0,
      92,     0,     0,    86,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    87,    88,     0,    91,     0,    89
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -77,   -77,   -77,   -77,   249,   -77,   -77,   -77,   -77,   243,
     -77,   -32,   -24,   -77,   -34,   -26,   -44,   -77,   -77,   -77,
     -77,   -77,   -77,   -77,   -76,   -77,   -77
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     1,     2,     3,     4,     9,   181,    10,    11,    12,
      13,    29,    77,    78,    79,    17,    44,    45,    46,    47,
      48,    49,    50,    51,    80,    21,    52
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      57,    98,    63,    64,    65,    66,    67,    68,    69,    36,
      90,    23,     6,   147,    70,    71,    19,    96,   148,    31,
     136,    32,     5,    20,    37,   137,     7,    38,    18,    33,
      39,     6,    40,    41,    42,   192,   160,   113,     6,    31,
     137,     8,    72,    73,   112,     7,    14,    34,   114,   115,
     116,   117,   118,    35,    74,    75,   197,   150,    76,   152,
      53,   137,    54,    95,   145,    24,    55,   149,    56,   149,
      43,   133,   134,   135,    63,    64,    65,    66,    67,    68,
      69,    58,   212,   213,    59,    60,    70,    71,   217,   218,
      81,    61,    62,    91,   182,   162,   163,   164,   165,   166,
     167,   168,   169,   170,   171,   172,   173,   174,   175,   176,
     177,   178,    92,   180,    72,    73,    93,    14,    94,    15,
     189,    16,    97,    99,   193,   100,    74,    75,   101,   102,
      76,   103,   104,   188,    19,   105,    63,    64,    65,    66,
      67,    68,    69,    25,    26,    27,    28,   106,    70,    71,
     107,   108,   205,   109,   110,   111,   138,   139,   140,   208,
     141,   142,   143,   144,   151,   154,   206,   155,    31,   135,
     179,   194,   220,   221,   156,   157,    72,    73,   158,   195,
     183,   184,   228,   185,   186,   187,   191,   215,    74,    75,
     196,   227,    76,   146,    63,    64,    65,    66,    67,    68,
      69,   198,   199,   201,   203,   204,    70,    71,    63,    64,
      65,    66,    67,    68,    69,   207,   209,   210,   214,   222,
      70,    71,   125,   126,   127,   128,   129,   130,   131,   132,
     133,   134,   135,   211,    72,    73,   129,   130,   131,   132,
     133,   134,   135,   216,   223,   200,    74,    75,    72,    73,
      76,   159,   224,   119,   120,   226,   225,   229,    22,    30,
      74,    75,     0,     0,    76,   121,   122,     0,     0,   123,
     124,   125,   126,   127,   128,   129,   130,   131,   132,   133,
     134,   135,   119,   120,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   121,   122,     0,     0,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   119,   120,     0,     0,     0,     0,   153,     0,     0,
       0,     0,     0,   121,   122,     0,     0,   123,   124,   125,
     126,   127,   128,   129,   130,   131,   132,   133,   134,   135,
     119,   120,     0,     0,     0,     0,   190,     0,     0,     0,
       0,     0,   121,   122,     0,     0,   123,   124,   125,   126,
     127,   128,   129,   130,   131,   132,   133,   134,   135,   119,
     120,     0,     0,     0,     0,   202,     0,     0,     0,     0,
       0,   121,   122,     0,     0,   123,   124,   125,   126,   127,
     128,   129,   130,   131,   132,   133,   134,   135,   119,   120,
       0,     0,   219,     0,     0,     0,     0,     0,     0,     0,
     121,   122,     0,     0,   123,   124,   125,   126,   127,   128,
     129,   130,   131,   132,   133,   134,   135,   119,   120,   161,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   121,
     122,     0,     0,   123,   124,   125,   126,   127,   128,   129,
     130,   131,   132,   133,   134,   135,   119,     0,     0,     0,
      82,    83,    84,    85,    86,    87,    88,     0,     0,   122,
       0,     0,   123,   124,   125,   126,   127,   128,   129,   130,
     131,   132,   133,   134,   135,    89,     0,    14,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135
};

static const yytype_int16 yycheck[] =
{
      32,    45,     3,     4,     5,     6,     7,     8,     9,     3,
      36,     8,     3,    89,    15,    16,     3,    41,    40,    61,
      60,    63,     0,    10,    18,    65,    17,    21,     3,    40,
      24,     3,    26,    27,    28,    60,   112,    63,     3,    61,
      65,    32,    43,    44,    59,    17,    61,    59,    72,    73,
      74,    75,    76,    59,    55,    56,    60,    91,    59,    93,
      32,    65,    62,    64,    88,    62,    64,    91,     8,    93,
      64,    55,    56,    57,     3,     4,     5,     6,     7,     8,
       9,     5,    19,    20,     8,     9,    15,    16,    62,    63,
      60,    15,    16,    59,   138,   119,   120,   121,   122,   123,
     124,   125,   126,   127,   128,   129,   130,   131,   132,   133,
     134,   135,     3,   137,    43,    44,    59,    61,    64,    63,
     144,    65,    64,    64,   148,    64,    55,    56,    64,    64,
      59,    64,    33,    62,     3,    62,     3,     4,     5,     6,
       7,     8,     9,    11,    12,    13,    14,    64,    15,    16,
      63,    63,   196,    63,    63,    63,    63,     3,     3,   203,
       3,     3,     3,    61,    22,    13,   198,    11,    61,    57,
      55,    60,   216,   217,    12,    14,    43,    44,    14,    61,
      64,    64,   226,    64,    64,    64,    64,   211,    55,    56,
      60,   223,    59,    60,     3,     4,     5,     6,     7,     8,
       9,    50,    33,    64,    63,     8,    15,    16,     3,     4,
       5,     6,     7,     8,     9,     3,    63,    25,     8,     8,
      15,    16,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    63,    43,    44,    51,    52,    53,    54,
      55,    56,    57,    63,    63,    21,    55,    56,    43,    44,
      59,    60,    20,    29,    30,    62,    23,    23,     9,    16,
      55,    56,    -1,    -1,    59,    41,    42,    -1,    -1,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    29,    30,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    41,    42,    -1,    -1,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    29,    30,    -1,    -1,    -1,    -1,    64,    -1,    -1,
      -1,    -1,    -1,    41,    42,    -1,    -1,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      29,    30,    -1,    -1,    -1,    -1,    64,    -1,    -1,    -1,
      -1,    -1,    41,    42,    -1,    -1,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    29,
      30,    -1,    -1,    -1,    -1,    64,    -1,    -1,    -1,    -1,
      -1,    41,    42,    -1,    -1,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    29,    30,
      -1,    -1,    62,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      41,    42,    -1,    -1,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    29,    30,    60,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    41,
      42,    -1,    -1,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    29,    -1,    -1,    -1,
      34,    35,    36,    37,    38,    39,    40,    -1,    -1,    42,
      -1,    -1,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    59,    -1,    61,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    67,    68,    69,    70,     0,     3,    17,    32,    71,
      73,    74,    75,    76,    61,    63,    65,    81,     3,     3,
      10,    91,    70,     8,    62,    11,    12,    13,    14,    77,
      75,    61,    63,    40,    59,    59,     3,    18,    21,    24,
      26,    27,    28,    64,    82,    83,    84,    85,    86,    87,
      88,    89,    92,    32,    62,    64,     8,    77,     5,     8,
       9,    15,    16,     3,     4,     5,     6,     7,     8,     9,
      15,    16,    43,    44,    55,    56,    59,    78,    79,    80,
      90,    60,    34,    35,    36,    37,    38,    39,    40,    59,
      81,    59,     3,    59,    64,    64,    78,    64,    82,    64,
      64,    64,    64,    64,    33,    62,    64,    63,    63,    63,
      63,    63,    59,    81,    78,    78,    78,    78,    78,    29,
      30,    41,    42,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    60,    65,    63,     3,
       3,     3,     3,     3,    61,    78,    60,    90,    40,    78,
      80,    22,    80,    64,    13,    11,    12,    14,    14,    60,
      90,    60,    78,    78,    78,    78,    78,    78,    78,    78,
      78,    78,    78,    78,    78,    78,    78,    78,    78,    55,
      78,    72,    82,    64,    64,    64,    64,    64,    62,    78,
      64,    64,    60,    78,    60,    61,    60,    60,    50,    33,
      21,    64,    64,    63,     8,    82,    77,     3,    82,    63,
      25,    63,    19,    20,     8,    78,    63,    62,    63,    62,
      82,    82,     8,    63,    20,    23,    62,    77,    82,    23
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    66,    67,    68,    69,    70,    70,    70,    70,    71,
      72,    73,    73,    73,    73,    73,    74,    75,    75,    75,
      76,    77,    77,    77,    77,    78,    78,    78,    78,    78,
      78,    78,    78,    78,    78,    78,    78,    78,    78,    78,
      78,    78,    79,    79,    79,    79,    79,    79,    79,    80,
      80,    80,    80,    80,    80,    80,    80,    80,    80,    80,
      80,    81,    81,    81,    82,    82,    83,    83,    83,    83,
      83,    83,    83,    83,    83,    83,    83,    83,    83,    83,
      83,    83,    83,    83,    83,    84,    85,    85,    86,    86,
      87,    88,    89,    90,    90,    91,    92
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     3,     0,     2,     2,     2,     7,
       1,     6,     6,     6,     6,     6,     4,     4,     3,     1,
       5,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     4,     3,     2,     1,     1,     3,     1,     1,
       2,     2,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     2,
       2,     3,     4,     2,     2,     1,     1,     1,     5,     2,
       2,     2,     2,     2,     2,     2,     2,     3,     5,     4,
       4,     4,     4,     4,     4,     4,     7,    10,    10,    12,
       4,    11,     6,     1,     3,     7,     1
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
#line 120 "Lambda_analyzer.y"
                      {puts(c_prologue);}
#line 1371 "Lambda_analyzer.tab.c"
    break;

  case 3: /* PROGRAM_START: pdeclare  */
#line 122 "Lambda_analyzer.y"
                        {(yyval.strng) = template("%s",(yyvsp[0].strng));}
#line 1377 "Lambda_analyzer.tab.c"
    break;

  case 4: /* pdeclare: code s_main_s code  */
#line 124 "Lambda_analyzer.y"
                             {(yyval.strng) = template("%s\n%s\n%s",(yyvsp[-2].strng),(yyvsp[-1].strng),(yyvsp[0].strng));}
#line 1383 "Lambda_analyzer.tab.c"
    break;

  case 5: /* code: %empty  */
#line 126 "Lambda_analyzer.y"
             {(yyval.strng) = template("\n");}
#line 1389 "Lambda_analyzer.tab.c"
    break;

  case 6: /* code: code constant_declaration  */
#line 127 "Lambda_analyzer.y"
                                  {(yyval.strng) = template("%s\n%s",(yyvsp[-1].strng),(yyvsp[0].strng));}
#line 1395 "Lambda_analyzer.tab.c"
    break;

  case 7: /* code: code function_declaration  */
#line 128 "Lambda_analyzer.y"
                                  {(yyval.strng) = template("%s\n%s",(yyvsp[-1].strng),(yyvsp[0].strng));}
#line 1401 "Lambda_analyzer.tab.c"
    break;

  case 8: /* code: code variable_declaration  */
#line 129 "Lambda_analyzer.y"
                                  {(yyval.strng) = template("%s\n%s",(yyvsp[-1].strng),(yyvsp[0].strng));}
#line 1407 "Lambda_analyzer.tab.c"
    break;

  case 9: /* s_main_s: KW_DEF KW_MAIN '(' ')' ':' main_body KW_ENDDEF  */
#line 134 "Lambda_analyzer.y"
                                                        {(yyval.strng) = template("int main(){\n%s\n}",(yyvsp[-1].strng));}
#line 1413 "Lambda_analyzer.tab.c"
    break;

  case 10: /* main_body: commands  */
#line 136 "Lambda_analyzer.y"
                    {(yyval.strng) = (yyvsp[0].strng);}
#line 1419 "Lambda_analyzer.tab.c"
    break;

  case 11: /* constant_declaration: KW_CONST TK_IDENTIFIER '=' TK_NUMBER ':' KW_INTEGER  */
#line 140 "Lambda_analyzer.y"
                                                                           {(yyval.strng) = template("const int %s = %s;\n;",(yyvsp[-4].strng),(yyvsp[-2].strng));}
#line 1425 "Lambda_analyzer.tab.c"
    break;

  case 12: /* constant_declaration: KW_CONST TK_IDENTIFIER '=' TK_DECIMAL ':' KW_SCALAR  */
#line 141 "Lambda_analyzer.y"
                                                                           {(yyval.strng) = template("const double %s = %s;\n;",(yyvsp[-4].strng),(yyvsp[-2].strng));}
#line 1431 "Lambda_analyzer.tab.c"
    break;

  case 13: /* constant_declaration: KW_CONST TK_IDENTIFIER '=' TK_STRING ':' KW_STR  */
#line 142 "Lambda_analyzer.y"
                                                                           {(yyval.strng) = template("const StringType %s = %s;\n;",(yyvsp[-4].strng),(yyvsp[-2].strng));}
#line 1437 "Lambda_analyzer.tab.c"
    break;

  case 14: /* constant_declaration: KW_CONST TK_IDENTIFIER '=' KW_TRUE ':' KW_BOOL  */
#line 143 "Lambda_analyzer.y"
                                                                           {(yyval.strng) = template("const int %s = 1;\n;",(yyvsp[-4].strng));}
#line 1443 "Lambda_analyzer.tab.c"
    break;

  case 15: /* constant_declaration: KW_CONST TK_IDENTIFIER '=' KW_FALSE ':' KW_BOOL  */
#line 144 "Lambda_analyzer.y"
                                                                           {(yyval.strng) = template("const int %s = 0;\n;",(yyvsp[-4].strng));}
#line 1449 "Lambda_analyzer.tab.c"
    break;

  case 16: /* function_declaration: KW_DEF function_header function_body KW_ENDDEF  */
#line 148 "Lambda_analyzer.y"
                                                                     {(yyval.strng) = template("%s{\n%s\n}\n",(yyvsp[-2].strng),(yyvsp[-1].strng));}
#line 1455 "Lambda_analyzer.tab.c"
    break;

  case 17: /* variable_declaration: TK_IDENTIFIER ':' data_type ';'  */
#line 150 "Lambda_analyzer.y"
                                                      {(yyval.strng) = template("%s %s;\n" ,(yyvsp[-1].strng),(yyvsp[-3].strng));}
#line 1461 "Lambda_analyzer.tab.c"
    break;

  case 18: /* variable_declaration: TK_IDENTIFIER ',' variable_declaration  */
#line 151 "Lambda_analyzer.y"
                                                             {(yyval.strng) = template("%s %s;\n%s");}
#line 1467 "Lambda_analyzer.tab.c"
    break;

  case 20: /* array_var: TK_IDENTIFIER brackets ':' data_type ';'  */
#line 156 "Lambda_analyzer.y"
                                                     {(yyval.strng) = template("%s %s%s;\n" ,(yyvsp[-1].strng),(yyvsp[-4].strng),(yyvsp[-3].strng));}
#line 1473 "Lambda_analyzer.tab.c"
    break;

  case 21: /* data_type: KW_INTEGER  */
#line 161 "Lambda_analyzer.y"
                       {(yyval.strng) = template("int");}
#line 1479 "Lambda_analyzer.tab.c"
    break;

  case 22: /* data_type: KW_BOOL  */
#line 162 "Lambda_analyzer.y"
                       {(yyval.strng) = template("int");}
#line 1485 "Lambda_analyzer.tab.c"
    break;

  case 23: /* data_type: KW_SCALAR  */
#line 163 "Lambda_analyzer.y"
                       {(yyval.strng) = template("double");}
#line 1491 "Lambda_analyzer.tab.c"
    break;

  case 24: /* data_type: KW_STR  */
#line 164 "Lambda_analyzer.y"
                       {(yyval.strng) = template("StringType");}
#line 1497 "Lambda_analyzer.tab.c"
    break;

  case 25: /* expression: TK_NUMBER  */
#line 171 "Lambda_analyzer.y"
                                            {(yyval.strng) = template("%s", (yyvsp[0].strng));}
#line 1503 "Lambda_analyzer.tab.c"
    break;

  case 26: /* expression: TK_REAL  */
#line 172 "Lambda_analyzer.y"
                                            {(yyval.strng) = template("%s", (yyvsp[0].strng));}
#line 1509 "Lambda_analyzer.tab.c"
    break;

  case 27: /* expression: TK_CHAR  */
#line 173 "Lambda_analyzer.y"
                                            {(yyval.strng) = template("%s", (yyvsp[0].strng));}
#line 1515 "Lambda_analyzer.tab.c"
    break;

  case 28: /* expression: TK_STRING  */
#line 174 "Lambda_analyzer.y"
                                            {(yyval.strng) = template("%s", (yyvsp[0].strng));}
#line 1521 "Lambda_analyzer.tab.c"
    break;

  case 29: /* expression: TK_DIGIT  */
#line 175 "Lambda_analyzer.y"
                                            {(yyval.strng) = template("%s", (yyvsp[0].strng));}
#line 1527 "Lambda_analyzer.tab.c"
    break;

  case 30: /* expression: TK_DECIMAL  */
#line 176 "Lambda_analyzer.y"
                                            {(yyval.strng) = template("%s", (yyvsp[0].strng));}
#line 1533 "Lambda_analyzer.tab.c"
    break;

  case 31: /* expression: TK_IDENTIFIER  */
#line 177 "Lambda_analyzer.y"
                                            {(yyval.strng) = template("%s", (yyvsp[0].strng));}
#line 1539 "Lambda_analyzer.tab.c"
    break;

  case 32: /* expression: TK_IDENTIFIER '(' function_arg ')'  */
#line 178 "Lambda_analyzer.y"
                                            {(yyval.strng) = template("%s(%s)", (yyvsp[-3].strng), (yyvsp[-1].strng));}
#line 1545 "Lambda_analyzer.tab.c"
    break;

  case 33: /* expression: TK_IDENTIFIER '(' ')'  */
#line 179 "Lambda_analyzer.y"
                                            {(yyval.strng) = template("%s()", (yyvsp[-2].strng));}
#line 1551 "Lambda_analyzer.tab.c"
    break;

  case 34: /* expression: TK_IDENTIFIER brackets  */
#line 180 "Lambda_analyzer.y"
                                            {(yyval.strng) = template("%s%s", (yyvsp[-1].strng), (yyvsp[0].strng));}
#line 1557 "Lambda_analyzer.tab.c"
    break;

  case 35: /* expression: KW_TRUE  */
#line 181 "Lambda_analyzer.y"
                                            {(yyval.strng) = template("1");}
#line 1563 "Lambda_analyzer.tab.c"
    break;

  case 36: /* expression: KW_FALSE  */
#line 182 "Lambda_analyzer.y"
                                            {(yyval.strng) = template("0");}
#line 1569 "Lambda_analyzer.tab.c"
    break;

  case 37: /* expression: '(' expression ')'  */
#line 183 "Lambda_analyzer.y"
                                            {(yyval.strng) = template("(%s)",(yyvsp[-1].strng));}
#line 1575 "Lambda_analyzer.tab.c"
    break;

  case 38: /* expression: math_expression  */
#line 184 "Lambda_analyzer.y"
                                            {(yyval.strng) = (yyvsp[0].strng);}
#line 1581 "Lambda_analyzer.tab.c"
    break;

  case 39: /* expression: logical_expression  */
#line 185 "Lambda_analyzer.y"
                                            {(yyval.strng) = (yyvsp[0].strng);}
#line 1587 "Lambda_analyzer.tab.c"
    break;

  case 40: /* expression: '+' expression  */
#line 186 "Lambda_analyzer.y"
                                            {(yyval.strng) = template("+%s", (yyvsp[0].strng));}
#line 1593 "Lambda_analyzer.tab.c"
    break;

  case 41: /* expression: '-' expression  */
#line 187 "Lambda_analyzer.y"
                                            {(yyval.strng) = template("-%s", (yyvsp[0].strng));}
#line 1599 "Lambda_analyzer.tab.c"
    break;

  case 42: /* math_expression: expression POW expression  */
#line 191 "Lambda_analyzer.y"
                                    {(yyval.strng) = template("pow(%s,%s)", (yyvsp[-2].strng),(yyvsp[0].strng));}
#line 1605 "Lambda_analyzer.tab.c"
    break;

  case 43: /* math_expression: expression '+' expression  */
#line 192 "Lambda_analyzer.y"
                                    {(yyval.strng) = template("%s+%s", (yyvsp[-2].strng),(yyvsp[0].strng));}
#line 1611 "Lambda_analyzer.tab.c"
    break;

  case 44: /* math_expression: expression '-' expression  */
#line 193 "Lambda_analyzer.y"
                                    {(yyval.strng) = template("%s-%s", (yyvsp[-2].strng),(yyvsp[0].strng));}
#line 1617 "Lambda_analyzer.tab.c"
    break;

  case 45: /* math_expression: expression '*' expression  */
#line 194 "Lambda_analyzer.y"
                                    {(yyval.strng) = template("%s*%s", (yyvsp[-2].strng),(yyvsp[0].strng));}
#line 1623 "Lambda_analyzer.tab.c"
    break;

  case 46: /* math_expression: expression '/' expression  */
#line 195 "Lambda_analyzer.y"
                                    {(yyval.strng) = template("%s/%s", (yyvsp[-2].strng),(yyvsp[0].strng));}
#line 1629 "Lambda_analyzer.tab.c"
    break;

  case 47: /* math_expression: expression MOD expression  */
#line 196 "Lambda_analyzer.y"
                                    {(yyval.strng) = template("%s %% %s", (yyvsp[-2].strng),(yyvsp[0].strng));}
#line 1635 "Lambda_analyzer.tab.c"
    break;

  case 48: /* math_expression: expression KW_MOD expression  */
#line 197 "Lambda_analyzer.y"
                                    {(yyval.strng) = template("%s %% %s", (yyvsp[-2].strng),(yyvsp[0].strng));}
#line 1641 "Lambda_analyzer.tab.c"
    break;

  case 49: /* logical_expression: expression EQ expression  */
#line 201 "Lambda_analyzer.y"
                                    {(yyval.strng) = template("%s==%s",(yyvsp[-2].strng),(yyvsp[0].strng));}
#line 1647 "Lambda_analyzer.tab.c"
    break;

  case 50: /* logical_expression: expression LEQ expression  */
#line 202 "Lambda_analyzer.y"
                                    {(yyval.strng) = template("%s<=%s",(yyvsp[-2].strng),(yyvsp[0].strng));}
#line 1653 "Lambda_analyzer.tab.c"
    break;

  case 51: /* logical_expression: expression GEQ expression  */
#line 203 "Lambda_analyzer.y"
                                    {(yyval.strng) = template("%s>=%s",(yyvsp[-2].strng),(yyvsp[0].strng));}
#line 1659 "Lambda_analyzer.tab.c"
    break;

  case 52: /* logical_expression: expression NEQ expression  */
#line 204 "Lambda_analyzer.y"
                                    {(yyval.strng) = template("%s!=%s",(yyvsp[-2].strng),(yyvsp[0].strng));}
#line 1665 "Lambda_analyzer.tab.c"
    break;

  case 53: /* logical_expression: expression '<' expression  */
#line 205 "Lambda_analyzer.y"
                                    {(yyval.strng) = template("%s<%s",(yyvsp[-2].strng),(yyvsp[0].strng));}
#line 1671 "Lambda_analyzer.tab.c"
    break;

  case 54: /* logical_expression: expression '>' expression  */
#line 206 "Lambda_analyzer.y"
                                    {(yyval.strng) = template("%s>%s",(yyvsp[-2].strng),(yyvsp[0].strng));}
#line 1677 "Lambda_analyzer.tab.c"
    break;

  case 55: /* logical_expression: expression LAND expression  */
#line 207 "Lambda_analyzer.y"
                                    {(yyval.strng) = template("%s && %s",(yyvsp[-2].strng),(yyvsp[0].strng));}
#line 1683 "Lambda_analyzer.tab.c"
    break;

  case 56: /* logical_expression: expression KW_AND expression  */
#line 208 "Lambda_analyzer.y"
                                    {(yyval.strng) = template("%s && %s",(yyvsp[-2].strng),(yyvsp[0].strng));}
#line 1689 "Lambda_analyzer.tab.c"
    break;

  case 57: /* logical_expression: expression LOR expression  */
#line 209 "Lambda_analyzer.y"
                                    {(yyval.strng) = template("%s || %s",(yyvsp[-2].strng),(yyvsp[0].strng));}
#line 1695 "Lambda_analyzer.tab.c"
    break;

  case 58: /* logical_expression: expression KW_OR expression  */
#line 210 "Lambda_analyzer.y"
                                    {(yyval.strng) = template("%s || %s",(yyvsp[-2].strng),(yyvsp[0].strng));}
#line 1701 "Lambda_analyzer.tab.c"
    break;

  case 59: /* logical_expression: '!' expression  */
#line 211 "Lambda_analyzer.y"
                                    {(yyval.strng) = template("!%s",(yyvsp[0].strng));}
#line 1707 "Lambda_analyzer.tab.c"
    break;

  case 60: /* logical_expression: KW_NOT expression  */
#line 212 "Lambda_analyzer.y"
                                    {(yyval.strng) = template("!%s",(yyvsp[0].strng));}
#line 1713 "Lambda_analyzer.tab.c"
    break;

  case 61: /* brackets: '[' TK_NUMBER ']'  */
#line 217 "Lambda_analyzer.y"
                                        {(yyval.strng) = template( "[%s]", (yyvsp[-1].strng));}
#line 1719 "Lambda_analyzer.tab.c"
    break;

  case 62: /* brackets: brackets '[' TK_NUMBER ']'  */
#line 218 "Lambda_analyzer.y"
                                        {(yyval.strng) = template( "%s[%s]", (yyvsp[-3].strng), (yyvsp[-1].strng));}
#line 1725 "Lambda_analyzer.tab.c"
    break;

  case 63: /* brackets: '[' ']'  */
#line 219 "Lambda_analyzer.y"
                                        {(yyval.strng) = template( "[]");}
#line 1731 "Lambda_analyzer.tab.c"
    break;

  case 64: /* commands: command commands  */
#line 227 "Lambda_analyzer.y"
                           {(yyval.strng) = template("%s\n%s\n", (yyvsp[-1].strng),(yyvsp[0].strng));}
#line 1737 "Lambda_analyzer.tab.c"
    break;

  case 65: /* commands: command  */
#line 228 "Lambda_analyzer.y"
                           {(yyval.strng) = (yyvsp[0].strng);}
#line 1743 "Lambda_analyzer.tab.c"
    break;

  case 66: /* command: ';'  */
#line 232 "Lambda_analyzer.y"
        {(yyval.strng) = template(";");}
#line 1749 "Lambda_analyzer.tab.c"
    break;

  case 67: /* command: variable_assignement  */
#line 233 "Lambda_analyzer.y"
                                            {(yyval.strng) = (yyvsp[0].strng);}
#line 1755 "Lambda_analyzer.tab.c"
    break;

  case 68: /* command: TK_IDENTIFIER brackets '=' expression ';'  */
#line 234 "Lambda_analyzer.y"
                                            {(yyval.strng) = template("%s%s = %s;\n",(yyvsp[-4].strng),(yyvsp[-3].strng),(yyvsp[-1].strng));}
#line 1761 "Lambda_analyzer.tab.c"
    break;

  case 69: /* command: if_statement ';'  */
#line 235 "Lambda_analyzer.y"
                                            {(yyval.strng) = template("%s;\n",(yyvsp[-1].strng));}
#line 1767 "Lambda_analyzer.tab.c"
    break;

  case 70: /* command: for_statement ';'  */
#line 236 "Lambda_analyzer.y"
                                            {(yyval.strng) = template("%s;\n",(yyvsp[-1].strng));}
#line 1773 "Lambda_analyzer.tab.c"
    break;

  case 71: /* command: compound_array_i ';'  */
#line 237 "Lambda_analyzer.y"
                                            {(yyval.strng) = template("%s;\n",(yyvsp[-1].strng));}
#line 1779 "Lambda_analyzer.tab.c"
    break;

  case 72: /* command: compound_array_a ';'  */
#line 238 "Lambda_analyzer.y"
                                            {(yyval.strng) = template("%s;\n",(yyvsp[-1].strng));}
#line 1785 "Lambda_analyzer.tab.c"
    break;

  case 73: /* command: while_statement ';'  */
#line 239 "Lambda_analyzer.y"
                                            {(yyval.strng) = template("%s;\n",(yyvsp[-1].strng));}
#line 1791 "Lambda_analyzer.tab.c"
    break;

  case 74: /* command: KW_BREAK ';'  */
#line 240 "Lambda_analyzer.y"
                                            {(yyval.strng) = template("break;");}
#line 1797 "Lambda_analyzer.tab.c"
    break;

  case 75: /* command: KW_CONTINUE ';'  */
#line 241 "Lambda_analyzer.y"
                                            {(yyval.strng) = template("continue;");}
#line 1803 "Lambda_analyzer.tab.c"
    break;

  case 76: /* command: KW_RETURN ';'  */
#line 242 "Lambda_analyzer.y"
                                            {(yyval.strng) = template("return;");}
#line 1809 "Lambda_analyzer.tab.c"
    break;

  case 77: /* command: KW_RETURN expression ';'  */
#line 243 "Lambda_analyzer.y"
                                            {(yyval.strng) = template("return %s;",(yyvsp[-1].strng));}
#line 1815 "Lambda_analyzer.tab.c"
    break;

  case 78: /* command: TK_IDENTIFIER '(' function_arg ')' ';'  */
#line 244 "Lambda_analyzer.y"
                                            {(yyval.strng) = template("%s(%s);\n",(yyvsp[-4].strng),(yyvsp[-2].strng));}
#line 1821 "Lambda_analyzer.tab.c"
    break;

  case 79: /* command: TK_IDENTIFIER '(' ')' ';'  */
#line 245 "Lambda_analyzer.y"
                                            {(yyval.strng) = template("%s()\n",(yyvsp[-3].strng));}
#line 1827 "Lambda_analyzer.tab.c"
    break;

  case 80: /* command: TK_IDENTIFIER ADD_ASSIGN TK_IDENTIFIER ';'  */
#line 246 "Lambda_analyzer.y"
                                                  {(yyval.strng) = template("%s += %s;\n",(yyvsp[-3].strng),(yyvsp[-1].strng));}
#line 1833 "Lambda_analyzer.tab.c"
    break;

  case 81: /* command: TK_IDENTIFIER SUB_ASSIGN TK_IDENTIFIER ';'  */
#line 247 "Lambda_analyzer.y"
                                                  {(yyval.strng) = template("%s -= %s;\n",(yyvsp[-3].strng),(yyvsp[-1].strng));}
#line 1839 "Lambda_analyzer.tab.c"
    break;

  case 82: /* command: TK_IDENTIFIER MULT_ASSIGN TK_IDENTIFIER ';'  */
#line 248 "Lambda_analyzer.y"
                                                  {(yyval.strng) = template("%s *= %s;\n",(yyvsp[-3].strng),(yyvsp[-1].strng));}
#line 1845 "Lambda_analyzer.tab.c"
    break;

  case 83: /* command: TK_IDENTIFIER DIV_ASSIGN TK_IDENTIFIER ';'  */
#line 249 "Lambda_analyzer.y"
                                                  {(yyval.strng) = template("%s /= %s;\n",(yyvsp[-3].strng),(yyvsp[-1].strng));}
#line 1851 "Lambda_analyzer.tab.c"
    break;

  case 84: /* command: TK_IDENTIFIER MOD_ASSIGN TK_IDENTIFIER ';'  */
#line 250 "Lambda_analyzer.y"
                                                  {(yyval.strng) = template("%s %%= %s;\n",(yyvsp[-3].strng),(yyvsp[-1].strng));}
#line 1857 "Lambda_analyzer.tab.c"
    break;

  case 85: /* variable_assignement: TK_IDENTIFIER '=' expression ';'  */
#line 255 "Lambda_analyzer.y"
                                                       {(yyval.strng) = template("%s = %s;\n",(yyvsp[-3].strng),(yyvsp[-1].strng));}
#line 1863 "Lambda_analyzer.tab.c"
    break;

  case 86: /* if_statement: KW_IF '(' logical_expression ')' ':' commands KW_ENDIF  */
#line 258 "Lambda_analyzer.y"
                                                                     {(yyval.strng) = template("if(%s){\n%s\n}\n",(yyvsp[-4].strng),(yyvsp[-1].strng));}
#line 1869 "Lambda_analyzer.tab.c"
    break;

  case 87: /* if_statement: KW_IF '(' logical_expression ')' ':' commands KW_ELSE ':' commands KW_ENDIF  */
#line 259 "Lambda_analyzer.y"
                                                                                          {(yyval.strng) = template("if(%s){\n%s\n} else{\n%s\n}\n",(yyvsp[-7].strng),(yyvsp[-4].strng),(yyvsp[-1].strng));}
#line 1875 "Lambda_analyzer.tab.c"
    break;

  case 88: /* for_statement: KW_FOR TK_IDENTIFIER KW_IN '[' TK_NUMBER ':' TK_NUMBER ']' commands KW_ENDFOR  */
#line 264 "Lambda_analyzer.y"
                                                                                             {(yyval.strng) = template("for(%s = %s; %s <= %s; %s++){\n%s\n}\n" ,(yyvsp[-8].strng),(yyvsp[-5].strng),(yyvsp[-8].strng),(yyvsp[-3].strng),(yyvsp[-8].strng),(yyvsp[-1].strng));}
#line 1881 "Lambda_analyzer.tab.c"
    break;

  case 89: /* for_statement: KW_FOR TK_IDENTIFIER KW_IN '[' TK_NUMBER ':' TK_NUMBER ':' TK_NUMBER ']' commands KW_ENDFOR  */
#line 265 "Lambda_analyzer.y"
                                                                                                           {(yyval.strng) = template("for(%s = %s; %s <= %s; %s+=%s){\n%s\n}\n" ,(yyvsp[-10].strng),(yyvsp[-7].strng),(yyvsp[-10].strng),(yyvsp[-5].strng),(yyvsp[-10].strng),(yyvsp[-3].strng),(yyvsp[-1].strng));}
#line 1887 "Lambda_analyzer.tab.c"
    break;

  case 90: /* compound_array_a: TK_IDENTIFIER ASSIGN '[' ']'  */
#line 272 "Lambda_analyzer.y"
                                               {(yyval.strng) = template(";\n");}
#line 1893 "Lambda_analyzer.tab.c"
    break;

  case 91: /* compound_array_i: TK_IDENTIFIER ASSIGN '[' expression KW_FOR TK_IDENTIFIER ':' expression ']' ':' data_type  */
#line 278 "Lambda_analyzer.y"
                                                                                                            {(yyval.strng) = template("%s* %s = (%s*)malloc(%s * sizeof(%s));\nfor(int %s = 0; %s < %s; ++%s){\n%s[%s] = %s;\n}\n",(yyvsp[0].strng),(yyvsp[-10].strng),(yyvsp[0].strng),(yyvsp[-3].strng),(yyvsp[0].strng),(yyvsp[-5].strng),(yyvsp[-5].strng),(yyvsp[-3].strng),(yyvsp[-5].strng),(yyvsp[-10].strng),(yyvsp[-5].strng),(yyvsp[-7].strng));}
#line 1899 "Lambda_analyzer.tab.c"
    break;

  case 92: /* while_statement: KW_WHILE '(' logical_expression ')' commands KW_ENDWHILE  */
#line 280 "Lambda_analyzer.y"
                                                                          {(yyval.strng) = template("while(%s){\n%s\n}\n",(yyvsp[-3].strng),(yyvsp[-1].strng));}
#line 1905 "Lambda_analyzer.tab.c"
    break;

  case 93: /* function_arg: expression  */
#line 284 "Lambda_analyzer.y"
                         {(yyval.strng) = (yyvsp[0].strng);}
#line 1911 "Lambda_analyzer.tab.c"
    break;

  case 94: /* function_arg: function_arg ',' expression  */
#line 285 "Lambda_analyzer.y"
                              {(yyval.strng) = template( "%s, %s", (yyvsp[-2].strng), (yyvsp[0].strng));}
#line 1917 "Lambda_analyzer.tab.c"
    break;

  case 95: /* function_header: TK_IDENTIFIER '(' function_arg ')' '-' '>' data_type  */
#line 289 "Lambda_analyzer.y"
                                                                     {(yyval.strng) = template("%s %s(%s)",(yyvsp[0].strng),(yyvsp[-6].strng),(yyvsp[-4].strng));}
#line 1923 "Lambda_analyzer.tab.c"
    break;

  case 96: /* function_body: commands  */
#line 290 "Lambda_analyzer.y"
                        {(yyval.strng) = template("%s\n",(yyvsp[0].strng));}
#line 1929 "Lambda_analyzer.tab.c"
    break;


#line 1933 "Lambda_analyzer.tab.c"

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

#line 297 "Lambda_analyzer.y"

int main () {
  if ( yyparse() == 1 ) {
    printf("at token %s\nRejected!\n",yylval.strng);
  }
}
