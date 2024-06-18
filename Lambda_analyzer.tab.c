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
  YYSYMBOL_KW_COMP = 31,                   /* KW_COMP  */
  YYSYMBOL_KW_ENDCOMP = 32,                /* KW_ENDCOMP  */
  YYSYMBOL_KW_OF = 33,                     /* KW_OF  */
  YYSYMBOL_KW_DEF = 34,                    /* KW_DEF  */
  YYSYMBOL_KW_ENDDEF = 35,                 /* KW_ENDDEF  */
  YYSYMBOL_ADD_ASSIGN = 36,                /* ADD_ASSIGN  */
  YYSYMBOL_SUB_ASSIGN = 37,                /* SUB_ASSIGN  */
  YYSYMBOL_MULT_ASSIGN = 38,               /* MULT_ASSIGN  */
  YYSYMBOL_DIV_ASSIGN = 39,                /* DIV_ASSIGN  */
  YYSYMBOL_MOD_ASSIGN = 40,                /* MOD_ASSIGN  */
  YYSYMBOL_ASSIGN = 41,                    /* ASSIGN  */
  YYSYMBOL_42_ = 42,                       /* '='  */
  YYSYMBOL_LOR = 43,                       /* LOR  */
  YYSYMBOL_LAND = 44,                      /* LAND  */
  YYSYMBOL_45_ = 45,                       /* '!'  */
  YYSYMBOL_KW_NOT = 46,                    /* KW_NOT  */
  YYSYMBOL_NEQ = 47,                       /* NEQ  */
  YYSYMBOL_EQ = 48,                        /* EQ  */
  YYSYMBOL_LEQ = 49,                       /* LEQ  */
  YYSYMBOL_GEQ = 50,                       /* GEQ  */
  YYSYMBOL_51_ = 51,                       /* '<'  */
  YYSYMBOL_52_ = 52,                       /* '>'  */
  YYSYMBOL_53_ = 53,                       /* '*'  */
  YYSYMBOL_54_ = 54,                       /* '/'  */
  YYSYMBOL_MOD = 55,                       /* MOD  */
  YYSYMBOL_KW_MOD = 56,                    /* KW_MOD  */
  YYSYMBOL_57_ = 57,                       /* '-'  */
  YYSYMBOL_58_ = 58,                       /* '+'  */
  YYSYMBOL_POW = 59,                       /* POW  */
  YYSYMBOL_60_ = 60,                       /* '.'  */
  YYSYMBOL_61_ = 61,                       /* '('  */
  YYSYMBOL_62_ = 62,                       /* ')'  */
  YYSYMBOL_63_ = 63,                       /* '['  */
  YYSYMBOL_64_ = 64,                       /* ']'  */
  YYSYMBOL_65_ = 65,                       /* ':'  */
  YYSYMBOL_66_ = 66,                       /* ';'  */
  YYSYMBOL_67_ = 67,                       /* ','  */
  YYSYMBOL_YYACCEPT = 68,                  /* $accept  */
  YYSYMBOL_input = 69,                     /* input  */
  YYSYMBOL_PROGRAM_START = 70,             /* PROGRAM_START  */
  YYSYMBOL_pdeclare = 71,                  /* pdeclare  */
  YYSYMBOL_s_main_s = 72,                  /* s_main_s  */
  YYSYMBOL_main_body = 73,                 /* main_body  */
  YYSYMBOL_constant_declaration = 74,      /* constant_declaration  */
  YYSYMBOL_composite_declaration = 75,     /* composite_declaration  */
  YYSYMBOL_function_declaration = 76,      /* function_declaration  */
  YYSYMBOL_variable_declaration = 77,      /* variable_declaration  */
  YYSYMBOL_data_type = 78,                 /* data_type  */
  YYSYMBOL_basic_data_type = 79,           /* basic_data_type  */
  YYSYMBOL_composite_data_type = 80,       /* composite_data_type  */
  YYSYMBOL_expression = 81,                /* expression  */
  YYSYMBOL_math_expression = 82,           /* math_expression  */
  YYSYMBOL_logical_expression = 83,        /* logical_expression  */
  YYSYMBOL_brackets = 84,                  /* brackets  */
  YYSYMBOL_commands = 85,                  /* commands  */
  YYSYMBOL_command = 86,                   /* command  */
  YYSYMBOL_variable_assignement = 87,      /* variable_assignement  */
  YYSYMBOL_if_statement = 88,              /* if_statement  */
  YYSYMBOL_for_statement = 89,             /* for_statement  */
  YYSYMBOL_compound_array_a = 90,          /* compound_array_a  */
  YYSYMBOL_compound_array_i = 91,          /* compound_array_i  */
  YYSYMBOL_while_statement = 92,           /* while_statement  */
  YYSYMBOL_function_arg = 93,              /* function_arg  */
  YYSYMBOL_function_header = 94,           /* function_header  */
  YYSYMBOL_function_body = 95              /* function_body  */
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
#define YYFINAL  10
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   544

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  68
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  28
/* YYNRULES -- Number of rules.  */
#define YYNRULES  98
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  234

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   306


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
       2,     2,     2,    45,     2,     2,     2,     2,     2,     2,
      61,    62,    53,    58,    67,    57,    60,    54,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    65,    66,
      51,    42,    52,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    63,     2,    64,     2,     2,     2,     2,     2,     2,
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
      35,    36,    37,    38,    39,    40,    41,    43,    44,    46,
      47,    48,    49,    50,    55,    56,    59
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   124,   124,   126,   128,   129,   130,   131,   132,   137,
     139,   143,   144,   145,   146,   147,   150,   152,   154,   155,
     160,   161,   164,   165,   166,   167,   170,   175,   176,   177,
     178,   179,   180,   181,   182,   183,   184,   185,   186,   187,
     188,   189,   190,   191,   192,   196,   197,   198,   199,   200,
     201,   202,   206,   207,   208,   209,   210,   211,   212,   213,
     214,   215,   216,   217,   222,   223,   231,   232,   236,   237,
     238,   239,   240,   241,   242,   243,   244,   245,   246,   247,
     248,   249,   250,   251,   252,   253,   254,   259,   262,   263,
     268,   269,   276,   282,   284,   288,   289,   293,   294
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
  "KW_CONTINUE", "KW_AND", "KW_OR", "KW_COMP", "KW_ENDCOMP", "KW_OF",
  "KW_DEF", "KW_ENDDEF", "ADD_ASSIGN", "SUB_ASSIGN", "MULT_ASSIGN",
  "DIV_ASSIGN", "MOD_ASSIGN", "ASSIGN", "'='", "LOR", "LAND", "'!'",
  "KW_NOT", "NEQ", "EQ", "LEQ", "GEQ", "'<'", "'>'", "'*'", "'/'", "MOD",
  "KW_MOD", "'-'", "'+'", "POW", "'.'", "'('", "')'", "'['", "']'", "':'",
  "';'", "','", "$accept", "input", "PROGRAM_START", "pdeclare",
  "s_main_s", "main_body", "constant_declaration", "composite_declaration",
  "function_declaration", "variable_declaration", "data_type",
  "basic_data_type", "composite_data_type", "expression",
  "math_expression", "logical_expression", "brackets", "commands",
  "command", "variable_assignement", "if_statement", "for_statement",
  "compound_array_a", "compound_array_i", "while_statement",
  "function_arg", "function_header", "function_body", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-190)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
       1,    19,     3,    29,  -190,  -190,  -190,     6,     5,    -5,
    -190,  -190,  -190,    35,    59,    -9,    11,  -190,     8,     7,
      34,    66,    68,    89,    52,    95,    52,    99,  -190,   134,
     158,   156,   160,   161,   162,   468,   113,   177,   121,   117,
       0,   127,  -190,   163,  -190,    52,  -190,   130,   131,   135,
     136,   137,   232,  -190,   170,    13,  -190,  -190,  -190,  -190,
    -190,  -190,   203,   204,   205,   206,   207,   150,   232,   154,
     232,   -30,   232,   192,   232,  -190,   -20,  -190,  -190,  -190,
    -190,  -190,  -190,  -190,  -190,   221,   232,   232,   232,   232,
     232,  -190,   165,   283,  -190,  -190,  -190,  -190,  -190,  -190,
    -190,  -190,  -190,  -190,   469,    -8,  -190,  -190,  -190,  -190,
    -190,    -4,  -190,  -190,   166,   167,   168,   176,   178,   120,
     314,   180,    -2,   376,   232,   232,   469,   164,   186,   169,
     214,   187,  -190,   485,   485,   184,   184,   438,   232,   232,
     232,   232,   232,   232,   232,   232,   232,   232,   232,   232,
     232,   232,   232,   232,   232,   232,  -190,   171,   232,  -190,
     224,  -190,  -190,  -190,  -190,  -190,  -190,   252,  -190,  -190,
     185,  -190,   345,   407,   188,   244,    52,  -190,    15,  -190,
    -190,   485,    90,    90,   485,    39,    39,   133,   133,   133,
     133,    26,    26,    26,    26,   184,   184,   184,   202,   469,
    -190,   253,  -190,  -190,  -190,    52,   190,   233,  -190,    13,
     196,   102,   249,  -190,  -190,   254,   199,  -190,    88,   201,
      52,    52,   258,   209,   247,   245,   215,    13,  -190,  -190,
      52,  -190,   246,  -190
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,     0,     0,     2,     3,     4,     0,     0,     0,
       1,    16,     5,     0,     0,     0,     0,     6,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     7,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    68,     0,    10,    67,    69,     0,     0,     0,
       0,     0,     0,    98,     0,     0,     8,    13,    11,    12,
      14,    15,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    76,    33,    29,    30,    28,
      31,    27,    32,    37,    38,     0,     0,     0,     0,     0,
       0,    78,     0,     0,    41,    42,    77,     9,    66,    71,
      72,    74,    73,    75,    95,     0,    17,    22,    24,    25,
      23,     0,    20,    21,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    42,     0,    42,
       0,    36,    26,    62,    63,    44,    43,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    79,     0,     0,    18,
       0,    82,    83,    84,    85,    86,    92,     0,    87,    81,
       0,    64,     0,     0,     0,     0,     0,    35,     0,    39,
      40,    59,    61,    60,    58,    55,    52,    53,    54,    56,
      57,    48,    49,    50,    51,    47,    46,    45,     0,    96,
      19,     0,    80,    70,    65,     0,     0,     0,    34,     0,
       0,     0,     0,    94,    97,     0,     0,    88,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    89,    90,
       0,    93,     0,    91
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -190,  -190,  -190,  -190,    10,  -190,  -190,  -190,  -190,   110,
    -189,  -190,   -54,   -38,  -190,    58,   208,   -26,  -190,  -190,
    -190,  -190,  -190,  -190,  -190,   -59,  -190,  -190
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
       0,     3,     4,     5,     6,    43,     7,    13,    18,    29,
     111,   112,    92,   104,    94,    95,    71,    44,    45,    46,
      47,    48,    49,    50,    51,   105,    26,    54
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      53,   113,    93,    76,    77,    78,    79,    80,    81,    82,
     122,    27,   124,     9,    25,    83,    84,    12,     1,    98,
     214,     9,     8,    17,   107,   108,   109,   110,    28,    10,
     120,    85,   123,   125,   126,     2,   126,    11,   231,    56,
       2,   130,     2,    70,    85,    86,    87,    14,   133,   134,
     135,   136,   137,    24,   157,    35,    15,    88,    89,   158,
     170,    90,   159,   160,    19,   158,    91,    20,    21,    16,
      36,   178,    30,    37,    22,    23,    38,   208,    39,    40,
      41,   167,   158,   153,   154,   155,   172,   173,   145,   146,
     147,   148,   149,   150,   151,   152,   153,   154,   155,    31,
     180,   181,   182,   183,   184,   185,   186,   187,   188,   189,
     190,   191,   192,   193,   194,   195,   196,   197,    42,   139,
     199,   216,   217,    76,    77,    78,    79,    80,    81,    82,
     127,    32,   129,    33,   142,    83,    84,   143,   144,   145,
     146,   147,   148,   149,   150,   151,   152,   153,   154,   155,
     207,    85,   221,   222,    34,   113,    52,    76,    77,    78,
      79,    80,    81,    82,    55,    86,    87,    58,     2,    83,
      84,    57,    59,   113,    72,    60,    61,    88,    89,   211,
      73,    90,    74,    75,   166,    85,   149,   150,   151,   152,
     153,   154,   155,    96,   224,   225,    99,   100,    97,    86,
      87,   101,   102,   103,   232,   106,   114,   115,   116,   117,
     118,    88,    89,   119,   128,    90,   121,    76,    77,    78,
      79,    80,    81,    82,   132,   138,   174,    27,   198,    83,
      84,   176,   161,   162,   163,    76,    77,    78,    79,    80,
      81,    82,   164,   155,   165,    85,   169,    83,    84,   175,
     125,   202,   206,   205,   209,   212,   210,   218,   213,    86,
      87,   215,   219,    85,   220,   223,   226,   228,   229,   233,
     200,    88,    89,   201,   227,    90,   177,    86,    87,   230,
       0,   139,   140,     0,   131,     0,     0,     0,     0,    88,
      89,     0,     0,    90,     0,   141,   142,     0,     0,   143,
     144,   145,   146,   147,   148,   149,   150,   151,   152,   153,
     154,   155,   139,   140,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   141,   142,     0,     0,
     143,   144,   145,   146,   147,   148,   149,   150,   151,   152,
     153,   154,   155,   139,   140,     0,     0,     0,     0,   156,
       0,     0,     0,     0,     0,     0,     0,   141,   142,     0,
       0,   143,   144,   145,   146,   147,   148,   149,   150,   151,
     152,   153,   154,   155,   139,   140,     0,     0,     0,     0,
     168,     0,     0,     0,     0,     0,     0,     0,   141,   142,
       0,     0,   143,   144,   145,   146,   147,   148,   149,   150,
     151,   152,   153,   154,   155,   139,   140,     0,     0,     0,
       0,   203,     0,     0,     0,     0,     0,     0,     0,   141,
     142,     0,     0,   143,   144,   145,   146,   147,   148,   149,
     150,   151,   152,   153,   154,   155,   139,   140,     0,     0,
     171,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     141,   142,     0,     0,   143,   144,   145,   146,   147,   148,
     149,   150,   151,   152,   153,   154,   155,   139,   140,     0,
       0,   204,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   141,   142,     0,     0,   143,   144,   145,   146,   147,
     148,   149,   150,   151,   152,   153,   154,   155,   139,   140,
     179,     0,     0,     0,    62,    63,    64,    65,    66,    67,
      68,     0,   141,   142,     0,     0,   143,   144,   145,   146,
     147,   148,   149,   150,   151,   152,   153,   154,   155,    69,
       0,    70,   143,   144,   145,   146,   147,   148,   149,   150,
     151,   152,   153,   154,   155
};

static const yytype_int16 yycheck[] =
{
      26,    55,    40,     3,     4,     5,     6,     7,     8,     9,
      69,     3,    42,    10,     3,    15,    16,     7,    17,    45,
     209,    10,     3,    13,    11,    12,    13,    14,    18,     0,
      68,    31,    70,    63,    72,    34,    74,    31,   227,    29,
      34,    61,    34,    63,    31,    45,    46,    42,    86,    87,
      88,    89,    90,    62,    62,     3,    61,    57,    58,    67,
      62,    61,    66,    67,     5,    67,    66,     8,     9,    34,
      18,   130,    65,    21,    15,    16,    24,    62,    26,    27,
      28,   119,    67,    57,    58,    59,   124,   125,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    65,
     138,   139,   140,   141,   142,   143,   144,   145,   146,   147,
     148,   149,   150,   151,   152,   153,   154,   155,    66,    29,
     158,    19,    20,     3,     4,     5,     6,     7,     8,     9,
      72,    65,    74,    65,    44,    15,    16,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
     176,    31,    64,    65,    65,   209,    61,     3,     4,     5,
       6,     7,     8,     9,    65,    45,    46,    11,    34,    15,
      16,    13,    12,   227,    61,    14,    14,    57,    58,   205,
       3,    61,    61,    66,    64,    31,    53,    54,    55,    56,
      57,    58,    59,    66,   220,   221,    66,    66,    35,    45,
      46,    66,    66,    66,   230,    35,     3,     3,     3,     3,
       3,    57,    58,    63,    22,    61,    62,     3,     4,     5,
       6,     7,     8,     9,     3,    60,    62,     3,    57,    15,
      16,    62,    66,    66,    66,     3,     4,     5,     6,     7,
       8,     9,    66,    59,    66,    31,    66,    15,    16,    63,
      63,    66,     8,    65,    52,    65,     3,     8,    25,    45,
      46,    65,     8,    31,    65,    64,     8,    20,    23,    23,
     160,    57,    58,    21,    65,    61,    62,    45,    46,    64,
      -1,    29,    30,    -1,    76,    -1,    -1,    -1,    -1,    57,
      58,    -1,    -1,    61,    -1,    43,    44,    -1,    -1,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    29,    30,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    43,    44,    -1,    -1,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    29,    30,    -1,    -1,    -1,    -1,    66,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    43,    44,    -1,
      -1,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    29,    30,    -1,    -1,    -1,    -1,
      66,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    43,    44,
      -1,    -1,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    29,    30,    -1,    -1,    -1,
      -1,    66,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    43,
      44,    -1,    -1,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    29,    30,    -1,    -1,
      64,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      43,    44,    -1,    -1,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    29,    30,    -1,
      -1,    64,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    43,    44,    -1,    -1,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    29,    30,
      62,    -1,    -1,    -1,    36,    37,    38,    39,    40,    41,
      42,    -1,    43,    44,    -1,    -1,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    61,
      -1,    63,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    17,    34,    69,    70,    71,    72,    74,     3,    10,
       0,    31,    72,    75,    42,    61,    34,    72,    76,     5,
       8,     9,    15,    16,    62,     3,    94,     3,    72,    77,
      65,    65,    65,    65,    65,     3,    18,    21,    24,    26,
      27,    28,    66,    73,    85,    86,    87,    88,    89,    90,
      91,    92,    61,    85,    95,    65,    72,    13,    11,    12,
      14,    14,    36,    37,    38,    39,    40,    41,    42,    61,
      63,    84,    61,     3,    61,    66,     3,     4,     5,     6,
       7,     8,     9,    15,    16,    31,    45,    46,    57,    58,
      61,    66,    80,    81,    82,    83,    66,    35,    85,    66,
      66,    66,    66,    66,    81,    93,    35,    11,    12,    13,
      14,    78,    79,    80,     3,     3,     3,     3,     3,    63,
      81,    62,    93,    81,    42,    63,    81,    83,    22,    83,
      61,    84,     3,    81,    81,    81,    81,    81,    60,    29,
      30,    43,    44,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    66,    62,    67,    66,
      67,    66,    66,    66,    66,    66,    64,    81,    66,    66,
      62,    64,    81,    81,    62,    63,    62,    62,    93,    62,
      81,    81,    81,    81,    81,    81,    81,    81,    81,    81,
      81,    81,    81,    81,    81,    81,    81,    81,    57,    81,
      77,    21,    66,    66,    64,    65,     8,    85,    62,    52,
       3,    85,    65,    25,    78,    65,    19,    20,     8,     8,
      65,    64,    65,    64,    85,    85,     8,    65,    20,    23,
      64,    78,    85,    23
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    68,    69,    70,    71,    71,    71,    71,    71,    72,
      73,    74,    74,    74,    74,    74,    75,    76,    77,    77,
      78,    78,    79,    79,    79,    79,    80,    81,    81,    81,
      81,    81,    81,    81,    81,    81,    81,    81,    81,    81,
      81,    81,    81,    81,    81,    82,    82,    82,    82,    82,
      82,    82,    83,    83,    83,    83,    83,    83,    83,    83,
      83,    83,    83,    83,    84,    84,    85,    85,    86,    86,
      86,    86,    86,    86,    86,    86,    86,    86,    86,    86,
      86,    86,    86,    86,    86,    86,    86,    87,    88,    88,
      89,    89,    90,    91,    92,    93,    93,    94,    95
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     1,     2,     3,     4,     5,     6,
       1,     6,     6,     6,     6,     6,     1,     4,     4,     5,
       1,     1,     1,     1,     1,     1,     2,     1,     1,     1,
       1,     1,     1,     1,     4,     3,     2,     1,     1,     3,
       3,     1,     1,     2,     2,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     2,     2,     3,     4,     2,     1,     1,     1,
       5,     2,     2,     2,     2,     2,     2,     2,     2,     3,
       5,     4,     4,     4,     4,     4,     4,     4,     7,    10,
      10,    12,     4,    11,     6,     1,     3,     7,     1
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
#line 124 "Lambda_analyzer.y"
                      {puts(c_prologue);}
#line 1386 "Lambda_analyzer.tab.c"
    break;

  case 3: /* PROGRAM_START: pdeclare  */
#line 126 "Lambda_analyzer.y"
                        {(yyval.strng) = template("%s",(yyvsp[0].strng));}
#line 1392 "Lambda_analyzer.tab.c"
    break;

  case 4: /* pdeclare: s_main_s  */
#line 128 "Lambda_analyzer.y"
                         {(yyval.strng) = template("%s",(yyvsp[0].strng));}
#line 1398 "Lambda_analyzer.tab.c"
    break;

  case 5: /* pdeclare: constant_declaration s_main_s  */
#line 129 "Lambda_analyzer.y"
                                             {(yyval.strng) = template("%s\n%s",(yyvsp[-1].strng),(yyvsp[0].strng));}
#line 1404 "Lambda_analyzer.tab.c"
    break;

  case 6: /* pdeclare: constant_declaration composite_declaration s_main_s  */
#line 130 "Lambda_analyzer.y"
                                                                    {(yyval.strng) = template("%s\n%s\n%s",(yyvsp[-2].strng),(yyvsp[-1].strng),(yyvsp[0].strng));}
#line 1410 "Lambda_analyzer.tab.c"
    break;

  case 7: /* pdeclare: constant_declaration composite_declaration function_declaration s_main_s  */
#line 131 "Lambda_analyzer.y"
                                                                                        {(yyval.strng) = template("%s\n%s\n%s\n%s",(yyvsp[-3].strng),(yyvsp[-2].strng),(yyvsp[-1].strng),(yyvsp[0].strng));}
#line 1416 "Lambda_analyzer.tab.c"
    break;

  case 8: /* pdeclare: constant_declaration composite_declaration function_declaration variable_declaration s_main_s  */
#line 132 "Lambda_analyzer.y"
                                                                                                             {(yyval.strng) = template("%s\n%s\n%s\n%s\n%s",(yyvsp[-4].strng),(yyvsp[-3].strng),(yyvsp[-2].strng),(yyvsp[-1].strng),(yyvsp[0].strng));}
#line 1422 "Lambda_analyzer.tab.c"
    break;

  case 9: /* s_main_s: KW_DEF KW_MAIN '(' ')' main_body KW_ENDDEF  */
#line 137 "Lambda_analyzer.y"
                                                    {(yyval.strng) = template("int main(){\n%s\n}",(yyvsp[-1].strng));}
#line 1428 "Lambda_analyzer.tab.c"
    break;

  case 10: /* main_body: commands  */
#line 139 "Lambda_analyzer.y"
                    {(yyval.strng) = (yyvsp[0].strng);}
#line 1434 "Lambda_analyzer.tab.c"
    break;

  case 11: /* constant_declaration: KW_CONST TK_IDENTIFIER '=' TK_NUMBER ':' KW_INTEGER  */
#line 143 "Lambda_analyzer.y"
                                                                           {(yyval.strng) = template("const int %s = %s;\n;",(yyvsp[-4].strng),(yyvsp[-2].strng));}
#line 1440 "Lambda_analyzer.tab.c"
    break;

  case 12: /* constant_declaration: KW_CONST TK_IDENTIFIER '=' TK_DECIMAL ':' KW_SCALAR  */
#line 144 "Lambda_analyzer.y"
                                                                           {(yyval.strng) = template("const double %s = %s;\n;",(yyvsp[-4].strng),(yyvsp[-2].strng));}
#line 1446 "Lambda_analyzer.tab.c"
    break;

  case 13: /* constant_declaration: KW_CONST TK_IDENTIFIER '=' TK_STRING ':' KW_STR  */
#line 145 "Lambda_analyzer.y"
                                                                           {(yyval.strng) = template("const StringType %s = %s;\n;",(yyvsp[-4].strng),(yyvsp[-2].strng));}
#line 1452 "Lambda_analyzer.tab.c"
    break;

  case 14: /* constant_declaration: KW_CONST TK_IDENTIFIER '=' KW_TRUE ':' KW_BOOL  */
#line 146 "Lambda_analyzer.y"
                                                                           {(yyval.strng) = template("const int %s = 1;\n;",(yyvsp[-4].strng));}
#line 1458 "Lambda_analyzer.tab.c"
    break;

  case 15: /* constant_declaration: KW_CONST TK_IDENTIFIER '=' KW_FALSE ':' KW_BOOL  */
#line 147 "Lambda_analyzer.y"
                                                                           {(yyval.strng) = template("const int %s = 0;\n;",(yyvsp[-4].strng));}
#line 1464 "Lambda_analyzer.tab.c"
    break;

  case 16: /* composite_declaration: KW_COMP  */
#line 150 "Lambda_analyzer.y"
                               {(yyval.strng) = template(";\n");}
#line 1470 "Lambda_analyzer.tab.c"
    break;

  case 17: /* function_declaration: KW_DEF function_header function_body KW_ENDDEF  */
#line 152 "Lambda_analyzer.y"
                                                                     {(yyval.strng) = template("%s{\n%s\n}\n",(yyvsp[-2].strng),(yyvsp[-1].strng));}
#line 1476 "Lambda_analyzer.tab.c"
    break;

  case 18: /* variable_declaration: TK_IDENTIFIER ':' data_type ';'  */
#line 154 "Lambda_analyzer.y"
                                                      {(yyval.strng) = template("%s %s;\n" ,(yyvsp[-1].strng),(yyvsp[-3].strng));}
#line 1482 "Lambda_analyzer.tab.c"
    break;

  case 19: /* variable_declaration: TK_IDENTIFIER ':' data_type ',' variable_declaration  */
#line 155 "Lambda_analyzer.y"
                                                                           {(yyval.strng) = template("%s %s;\n%s");}
#line 1488 "Lambda_analyzer.tab.c"
    break;

  case 20: /* data_type: basic_data_type  */
#line 160 "Lambda_analyzer.y"
                                {(yyval.strng) = (yyvsp[0].strng);}
#line 1494 "Lambda_analyzer.tab.c"
    break;

  case 21: /* data_type: composite_data_type  */
#line 161 "Lambda_analyzer.y"
                                {(yyval.strng) = (yyvsp[0].strng);}
#line 1500 "Lambda_analyzer.tab.c"
    break;

  case 22: /* basic_data_type: KW_INTEGER  */
#line 164 "Lambda_analyzer.y"
                             {(yyval.strng) = template("int");}
#line 1506 "Lambda_analyzer.tab.c"
    break;

  case 23: /* basic_data_type: KW_BOOL  */
#line 165 "Lambda_analyzer.y"
                             {(yyval.strng) = template("int");}
#line 1512 "Lambda_analyzer.tab.c"
    break;

  case 24: /* basic_data_type: KW_SCALAR  */
#line 166 "Lambda_analyzer.y"
                             {(yyval.strng) = template("double");}
#line 1518 "Lambda_analyzer.tab.c"
    break;

  case 25: /* basic_data_type: KW_STR  */
#line 167 "Lambda_analyzer.y"
                             {(yyval.strng) = template("StringType");}
#line 1524 "Lambda_analyzer.tab.c"
    break;

  case 26: /* composite_data_type: KW_COMP TK_IDENTIFIER  */
#line 170 "Lambda_analyzer.y"
                                            {(yyval.strng) = template(";\n");}
#line 1530 "Lambda_analyzer.tab.c"
    break;

  case 27: /* expression: TK_NUMBER  */
#line 175 "Lambda_analyzer.y"
                                            {(yyval.strng) = template("%s", (yyvsp[0].strng));}
#line 1536 "Lambda_analyzer.tab.c"
    break;

  case 28: /* expression: TK_REAL  */
#line 176 "Lambda_analyzer.y"
                                            {(yyval.strng) = template("%s", (yyvsp[0].strng));}
#line 1542 "Lambda_analyzer.tab.c"
    break;

  case 29: /* expression: TK_CHAR  */
#line 177 "Lambda_analyzer.y"
                                            {(yyval.strng) = template("%s", (yyvsp[0].strng));}
#line 1548 "Lambda_analyzer.tab.c"
    break;

  case 30: /* expression: TK_STRING  */
#line 178 "Lambda_analyzer.y"
                                            {(yyval.strng) = template("%s", (yyvsp[0].strng));}
#line 1554 "Lambda_analyzer.tab.c"
    break;

  case 31: /* expression: TK_DIGIT  */
#line 179 "Lambda_analyzer.y"
                                            {(yyval.strng) = template("%s", (yyvsp[0].strng));}
#line 1560 "Lambda_analyzer.tab.c"
    break;

  case 32: /* expression: TK_DECIMAL  */
#line 180 "Lambda_analyzer.y"
                                            {(yyval.strng) = template("%s", (yyvsp[0].strng));}
#line 1566 "Lambda_analyzer.tab.c"
    break;

  case 33: /* expression: TK_IDENTIFIER  */
#line 181 "Lambda_analyzer.y"
                                            {(yyval.strng) = template("%s", (yyvsp[0].strng));}
#line 1572 "Lambda_analyzer.tab.c"
    break;

  case 34: /* expression: TK_IDENTIFIER '(' function_arg ')'  */
#line 182 "Lambda_analyzer.y"
                                            {(yyval.strng) = template("%s(%s)", (yyvsp[-3].strng), (yyvsp[-1].strng));}
#line 1578 "Lambda_analyzer.tab.c"
    break;

  case 35: /* expression: TK_IDENTIFIER '(' ')'  */
#line 183 "Lambda_analyzer.y"
                                            {(yyval.strng) = template("%s()", (yyvsp[-2].strng));}
#line 1584 "Lambda_analyzer.tab.c"
    break;

  case 36: /* expression: TK_IDENTIFIER brackets  */
#line 184 "Lambda_analyzer.y"
                                            {(yyval.strng) = template("%s%s", (yyvsp[-1].strng), (yyvsp[0].strng));}
#line 1590 "Lambda_analyzer.tab.c"
    break;

  case 37: /* expression: KW_TRUE  */
#line 185 "Lambda_analyzer.y"
                                            {(yyval.strng) = template("1");}
#line 1596 "Lambda_analyzer.tab.c"
    break;

  case 38: /* expression: KW_FALSE  */
#line 186 "Lambda_analyzer.y"
                                            {(yyval.strng) = template("0");}
#line 1602 "Lambda_analyzer.tab.c"
    break;

  case 39: /* expression: '(' expression ')'  */
#line 187 "Lambda_analyzer.y"
                                            {(yyval.strng) = template("(%s)",(yyvsp[-1].strng));}
#line 1608 "Lambda_analyzer.tab.c"
    break;

  case 40: /* expression: composite_data_type '.' expression  */
#line 188 "Lambda_analyzer.y"
                                            {(yyval.strng) = template("%s.%s", (yyvsp[-2].strng),(yyvsp[0].strng));}
#line 1614 "Lambda_analyzer.tab.c"
    break;

  case 41: /* expression: math_expression  */
#line 189 "Lambda_analyzer.y"
                                            {(yyval.strng) = (yyvsp[0].strng);}
#line 1620 "Lambda_analyzer.tab.c"
    break;

  case 42: /* expression: logical_expression  */
#line 190 "Lambda_analyzer.y"
                                            {(yyval.strng) = (yyvsp[0].strng);}
#line 1626 "Lambda_analyzer.tab.c"
    break;

  case 43: /* expression: '+' expression  */
#line 191 "Lambda_analyzer.y"
                                            {(yyval.strng) = template("+%s", (yyvsp[0].strng));}
#line 1632 "Lambda_analyzer.tab.c"
    break;

  case 44: /* expression: '-' expression  */
#line 192 "Lambda_analyzer.y"
                                            {(yyval.strng) = template("-%s", (yyvsp[0].strng));}
#line 1638 "Lambda_analyzer.tab.c"
    break;

  case 45: /* math_expression: expression POW expression  */
#line 196 "Lambda_analyzer.y"
                                    {(yyval.strng) = template("pow(%s,%s)", (yyvsp[-2].strng),(yyvsp[0].strng));}
#line 1644 "Lambda_analyzer.tab.c"
    break;

  case 46: /* math_expression: expression '+' expression  */
#line 197 "Lambda_analyzer.y"
                                    {(yyval.strng) = template("%s+%s", (yyvsp[-2].strng),(yyvsp[0].strng));}
#line 1650 "Lambda_analyzer.tab.c"
    break;

  case 47: /* math_expression: expression '-' expression  */
#line 198 "Lambda_analyzer.y"
                                    {(yyval.strng) = template("%s-%s", (yyvsp[-2].strng),(yyvsp[0].strng));}
#line 1656 "Lambda_analyzer.tab.c"
    break;

  case 48: /* math_expression: expression '*' expression  */
#line 199 "Lambda_analyzer.y"
                                    {(yyval.strng) = template("%s*%s", (yyvsp[-2].strng),(yyvsp[0].strng));}
#line 1662 "Lambda_analyzer.tab.c"
    break;

  case 49: /* math_expression: expression '/' expression  */
#line 200 "Lambda_analyzer.y"
                                    {(yyval.strng) = template("%s/%s", (yyvsp[-2].strng),(yyvsp[0].strng));}
#line 1668 "Lambda_analyzer.tab.c"
    break;

  case 50: /* math_expression: expression MOD expression  */
#line 201 "Lambda_analyzer.y"
                                    {(yyval.strng) = template("%s %% %s", (yyvsp[-2].strng),(yyvsp[0].strng));}
#line 1674 "Lambda_analyzer.tab.c"
    break;

  case 51: /* math_expression: expression KW_MOD expression  */
#line 202 "Lambda_analyzer.y"
                                    {(yyval.strng) = template("%s %% %s", (yyvsp[-2].strng),(yyvsp[0].strng));}
#line 1680 "Lambda_analyzer.tab.c"
    break;

  case 52: /* logical_expression: expression EQ expression  */
#line 206 "Lambda_analyzer.y"
                                    {(yyval.strng) = template("%s==%s",(yyvsp[-2].strng),(yyvsp[0].strng));}
#line 1686 "Lambda_analyzer.tab.c"
    break;

  case 53: /* logical_expression: expression LEQ expression  */
#line 207 "Lambda_analyzer.y"
                                    {(yyval.strng) = template("%s<=%s",(yyvsp[-2].strng),(yyvsp[0].strng));}
#line 1692 "Lambda_analyzer.tab.c"
    break;

  case 54: /* logical_expression: expression GEQ expression  */
#line 208 "Lambda_analyzer.y"
                                    {(yyval.strng) = template("%s>=%s",(yyvsp[-2].strng),(yyvsp[0].strng));}
#line 1698 "Lambda_analyzer.tab.c"
    break;

  case 55: /* logical_expression: expression NEQ expression  */
#line 209 "Lambda_analyzer.y"
                                    {(yyval.strng) = template("%s!=%s",(yyvsp[-2].strng),(yyvsp[0].strng));}
#line 1704 "Lambda_analyzer.tab.c"
    break;

  case 56: /* logical_expression: expression '<' expression  */
#line 210 "Lambda_analyzer.y"
                                    {(yyval.strng) = template("%s<%s",(yyvsp[-2].strng),(yyvsp[0].strng));}
#line 1710 "Lambda_analyzer.tab.c"
    break;

  case 57: /* logical_expression: expression '>' expression  */
#line 211 "Lambda_analyzer.y"
                                    {(yyval.strng) = template("%s>%s",(yyvsp[-2].strng),(yyvsp[0].strng));}
#line 1716 "Lambda_analyzer.tab.c"
    break;

  case 58: /* logical_expression: expression LAND expression  */
#line 212 "Lambda_analyzer.y"
                                    {(yyval.strng) = template("%s && %s",(yyvsp[-2].strng),(yyvsp[0].strng));}
#line 1722 "Lambda_analyzer.tab.c"
    break;

  case 59: /* logical_expression: expression KW_AND expression  */
#line 213 "Lambda_analyzer.y"
                                    {(yyval.strng) = template("%s && %s",(yyvsp[-2].strng),(yyvsp[0].strng));}
#line 1728 "Lambda_analyzer.tab.c"
    break;

  case 60: /* logical_expression: expression LOR expression  */
#line 214 "Lambda_analyzer.y"
                                    {(yyval.strng) = template("%s || %s",(yyvsp[-2].strng),(yyvsp[0].strng));}
#line 1734 "Lambda_analyzer.tab.c"
    break;

  case 61: /* logical_expression: expression KW_OR expression  */
#line 215 "Lambda_analyzer.y"
                                    {(yyval.strng) = template("%s || %s",(yyvsp[-2].strng),(yyvsp[0].strng));}
#line 1740 "Lambda_analyzer.tab.c"
    break;

  case 62: /* logical_expression: '!' expression  */
#line 216 "Lambda_analyzer.y"
                                    {(yyval.strng) = template("!%s",(yyvsp[0].strng));}
#line 1746 "Lambda_analyzer.tab.c"
    break;

  case 63: /* logical_expression: KW_NOT expression  */
#line 217 "Lambda_analyzer.y"
                                    {(yyval.strng) = template("!%s",(yyvsp[0].strng));}
#line 1752 "Lambda_analyzer.tab.c"
    break;

  case 64: /* brackets: '[' expression ']'  */
#line 222 "Lambda_analyzer.y"
                                        {(yyval.strng) = template( "[%s]", (yyvsp[-1].strng));}
#line 1758 "Lambda_analyzer.tab.c"
    break;

  case 65: /* brackets: brackets '[' expression ']'  */
#line 223 "Lambda_analyzer.y"
                                        {(yyval.strng) = template( "%s[%s]", (yyvsp[-3].strng), (yyvsp[-1].strng));}
#line 1764 "Lambda_analyzer.tab.c"
    break;

  case 66: /* commands: command commands  */
#line 231 "Lambda_analyzer.y"
                           {(yyval.strng) = template("%s\n%s\n", (yyvsp[-1].strng),(yyvsp[0].strng));}
#line 1770 "Lambda_analyzer.tab.c"
    break;

  case 67: /* commands: command  */
#line 232 "Lambda_analyzer.y"
                           {(yyval.strng) = (yyvsp[0].strng);}
#line 1776 "Lambda_analyzer.tab.c"
    break;

  case 68: /* command: ';'  */
#line 236 "Lambda_analyzer.y"
        {(yyval.strng) = template(";");}
#line 1782 "Lambda_analyzer.tab.c"
    break;

  case 69: /* command: variable_assignement  */
#line 237 "Lambda_analyzer.y"
                                            {(yyval.strng) = (yyvsp[0].strng);}
#line 1788 "Lambda_analyzer.tab.c"
    break;

  case 70: /* command: TK_IDENTIFIER brackets '=' expression ';'  */
#line 238 "Lambda_analyzer.y"
                                            {(yyval.strng) = template("%s%s = %s;\n",(yyvsp[-4].strng),(yyvsp[-3].strng),(yyvsp[-1].strng));}
#line 1794 "Lambda_analyzer.tab.c"
    break;

  case 71: /* command: if_statement ';'  */
#line 239 "Lambda_analyzer.y"
                                            {(yyval.strng) = template("%s;\n",(yyvsp[-1].strng));}
#line 1800 "Lambda_analyzer.tab.c"
    break;

  case 72: /* command: for_statement ';'  */
#line 240 "Lambda_analyzer.y"
                                            {(yyval.strng) = template("%s;\n",(yyvsp[-1].strng));}
#line 1806 "Lambda_analyzer.tab.c"
    break;

  case 73: /* command: compound_array_i ';'  */
#line 241 "Lambda_analyzer.y"
                                            {(yyval.strng) = template("%s;\n",(yyvsp[-1].strng));}
#line 1812 "Lambda_analyzer.tab.c"
    break;

  case 74: /* command: compound_array_a ';'  */
#line 242 "Lambda_analyzer.y"
                                            {(yyval.strng) = template("%s;\n",(yyvsp[-1].strng));}
#line 1818 "Lambda_analyzer.tab.c"
    break;

  case 75: /* command: while_statement ';'  */
#line 243 "Lambda_analyzer.y"
                                            {(yyval.strng) = template("%s;\n",(yyvsp[-1].strng));}
#line 1824 "Lambda_analyzer.tab.c"
    break;

  case 76: /* command: KW_BREAK ';'  */
#line 244 "Lambda_analyzer.y"
                                            {(yyval.strng) = template("break;");}
#line 1830 "Lambda_analyzer.tab.c"
    break;

  case 77: /* command: KW_CONTINUE ';'  */
#line 245 "Lambda_analyzer.y"
                                            {(yyval.strng) = template("continue;");}
#line 1836 "Lambda_analyzer.tab.c"
    break;

  case 78: /* command: KW_RETURN ';'  */
#line 246 "Lambda_analyzer.y"
                                            {(yyval.strng) = template("return;");}
#line 1842 "Lambda_analyzer.tab.c"
    break;

  case 79: /* command: KW_RETURN expression ';'  */
#line 247 "Lambda_analyzer.y"
                                            {(yyval.strng) = template("return %s;",(yyvsp[-1].strng));}
#line 1848 "Lambda_analyzer.tab.c"
    break;

  case 80: /* command: TK_IDENTIFIER '(' function_arg ')' ';'  */
#line 248 "Lambda_analyzer.y"
                                            {(yyval.strng) = template("%s(%s);\n",(yyvsp[-4].strng),(yyvsp[-2].strng));}
#line 1854 "Lambda_analyzer.tab.c"
    break;

  case 81: /* command: TK_IDENTIFIER '(' ')' ';'  */
#line 249 "Lambda_analyzer.y"
                                            {(yyval.strng) = template("%s()\n",(yyvsp[-3].strng));}
#line 1860 "Lambda_analyzer.tab.c"
    break;

  case 82: /* command: TK_IDENTIFIER ADD_ASSIGN TK_IDENTIFIER ';'  */
#line 250 "Lambda_analyzer.y"
                                                  {(yyval.strng) = template("%s += %s;\n",(yyvsp[-3].strng),(yyvsp[-1].strng));}
#line 1866 "Lambda_analyzer.tab.c"
    break;

  case 83: /* command: TK_IDENTIFIER SUB_ASSIGN TK_IDENTIFIER ';'  */
#line 251 "Lambda_analyzer.y"
                                                  {(yyval.strng) = template("%s -= %s;\n",(yyvsp[-3].strng),(yyvsp[-1].strng));}
#line 1872 "Lambda_analyzer.tab.c"
    break;

  case 84: /* command: TK_IDENTIFIER MULT_ASSIGN TK_IDENTIFIER ';'  */
#line 252 "Lambda_analyzer.y"
                                                  {(yyval.strng) = template("%s *= %s;\n",(yyvsp[-3].strng),(yyvsp[-1].strng));}
#line 1878 "Lambda_analyzer.tab.c"
    break;

  case 85: /* command: TK_IDENTIFIER DIV_ASSIGN TK_IDENTIFIER ';'  */
#line 253 "Lambda_analyzer.y"
                                                  {(yyval.strng) = template("%s /= %s;\n",(yyvsp[-3].strng),(yyvsp[-1].strng));}
#line 1884 "Lambda_analyzer.tab.c"
    break;

  case 86: /* command: TK_IDENTIFIER MOD_ASSIGN TK_IDENTIFIER ';'  */
#line 254 "Lambda_analyzer.y"
                                                  {(yyval.strng) = template("%s %%= %s;\n",(yyvsp[-3].strng),(yyvsp[-1].strng));}
#line 1890 "Lambda_analyzer.tab.c"
    break;

  case 87: /* variable_assignement: TK_IDENTIFIER '=' expression ';'  */
#line 259 "Lambda_analyzer.y"
                                                       {(yyval.strng) = template("%s = %s;\n",(yyvsp[-3].strng),(yyvsp[-1].strng));}
#line 1896 "Lambda_analyzer.tab.c"
    break;

  case 88: /* if_statement: KW_IF '(' logical_expression ')' ':' commands KW_ENDIF  */
#line 262 "Lambda_analyzer.y"
                                                                     {(yyval.strng) = template("if(%s){\n%s\n}\n",(yyvsp[-4].strng),(yyvsp[-1].strng));}
#line 1902 "Lambda_analyzer.tab.c"
    break;

  case 89: /* if_statement: KW_IF '(' logical_expression ')' ':' commands KW_ELSE ':' commands KW_ENDIF  */
#line 263 "Lambda_analyzer.y"
                                                                                          {(yyval.strng) = template("if(%s){\n%s\n} else{\n%s\n}\n",(yyvsp[-7].strng),(yyvsp[-4].strng),(yyvsp[-1].strng));}
#line 1908 "Lambda_analyzer.tab.c"
    break;

  case 90: /* for_statement: KW_FOR TK_IDENTIFIER KW_IN '[' TK_NUMBER ':' TK_NUMBER ']' commands KW_ENDFOR  */
#line 268 "Lambda_analyzer.y"
                                                                                             {(yyval.strng) = template("for(%s = %s; %s <= %s; %s++){\n%s\n}\n" ,(yyvsp[-8].strng),(yyvsp[-5].strng),(yyvsp[-8].strng),(yyvsp[-3].strng),(yyvsp[-8].strng),(yyvsp[-1].strng));}
#line 1914 "Lambda_analyzer.tab.c"
    break;

  case 91: /* for_statement: KW_FOR TK_IDENTIFIER KW_IN '[' TK_NUMBER ':' TK_NUMBER ':' TK_NUMBER ']' commands KW_ENDFOR  */
#line 269 "Lambda_analyzer.y"
                                                                                                           {(yyval.strng) = template("for(%s = %s; %s <= %s; %s+=%s){\n%s\n}\n" ,(yyvsp[-10].strng),(yyvsp[-7].strng),(yyvsp[-10].strng),(yyvsp[-5].strng),(yyvsp[-10].strng),(yyvsp[-3].strng),(yyvsp[-1].strng));}
#line 1920 "Lambda_analyzer.tab.c"
    break;

  case 92: /* compound_array_a: TK_IDENTIFIER ASSIGN '[' ']'  */
#line 276 "Lambda_analyzer.y"
                                               {(yyval.strng) = template(";\n");}
#line 1926 "Lambda_analyzer.tab.c"
    break;

  case 93: /* compound_array_i: TK_IDENTIFIER ASSIGN '[' expression KW_FOR TK_IDENTIFIER ':' TK_NUMBER ']' ':' data_type  */
#line 282 "Lambda_analyzer.y"
                                                                                                           {(yyval.strng) = template("%s* %s = (%s*)malloc(%s * sizeof(%s));\nfor(int %s = 0; %s < %s; ++%s){\n%s[%s] = %s;\n}\n",(yyvsp[0].strng),(yyvsp[-10].strng),(yyvsp[0].strng),(yyvsp[-3].strng),(yyvsp[0].strng),(yyvsp[-5].strng),(yyvsp[-5].strng),(yyvsp[-3].strng),(yyvsp[-5].strng),(yyvsp[-10].strng),(yyvsp[-5].strng),(yyvsp[-7].strng));}
#line 1932 "Lambda_analyzer.tab.c"
    break;

  case 94: /* while_statement: KW_WHILE '(' logical_expression ')' commands KW_ENDWHILE  */
#line 284 "Lambda_analyzer.y"
                                                                          {(yyval.strng) = template("while(%s){\n%s\n}\n",(yyvsp[-3].strng),(yyvsp[-1].strng));}
#line 1938 "Lambda_analyzer.tab.c"
    break;

  case 95: /* function_arg: expression  */
#line 288 "Lambda_analyzer.y"
                         {(yyval.strng) = (yyvsp[0].strng);}
#line 1944 "Lambda_analyzer.tab.c"
    break;

  case 96: /* function_arg: function_arg ',' expression  */
#line 289 "Lambda_analyzer.y"
                              {(yyval.strng) = template( "%s, %s", (yyvsp[-2].strng), (yyvsp[0].strng));}
#line 1950 "Lambda_analyzer.tab.c"
    break;

  case 97: /* function_header: TK_IDENTIFIER '(' function_arg ')' '-' '>' data_type  */
#line 293 "Lambda_analyzer.y"
                                                                     {(yyval.strng) = template("%s %s(%s)",(yyvsp[0].strng),(yyvsp[-6].strng),(yyvsp[-4].strng));}
#line 1956 "Lambda_analyzer.tab.c"
    break;

  case 98: /* function_body: commands  */
#line 294 "Lambda_analyzer.y"
                        {(yyval.strng) = template("%s\n",(yyvsp[0].strng));}
#line 1962 "Lambda_analyzer.tab.c"
    break;


#line 1966 "Lambda_analyzer.tab.c"

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

#line 301 "Lambda_analyzer.y"

int main () {
  if ( yyparse() == 1 ) {
    printf("Rejected!\n");
  }
}
