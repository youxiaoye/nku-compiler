/* A Bison parser, made by GNU Bison 3.7.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2020 Free Software Foundation,
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
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

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

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.7.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "main.y"

    #include "common.h"
    #define YYSTYPE TreeNode *  
	#include<queue>
	#include<vector>
	#include<map>
	map<char*, int> idli;
    TreeNode* root;
    extern int lineno;
    int yylex();
    int yyerror( char const * );

#line 84 "main.tab.cc"

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
    T_CHAR = 258,                  /* T_CHAR  */
    T_INT = 259,                   /* T_INT  */
    T_STRING = 260,                /* T_STRING  */
    T_BOOL = 261,                  /* T_BOOL  */
    LOP_ASSIGN = 262,              /* LOP_ASSIGN  */
    COMMA = 263,                   /* COMMA  */
    L = 264,                       /* L  */
    R = 265,                       /* R  */
    CL = 266,                      /* CL  */
    CR = 267,                      /* CR  */
    SEMICOLON = 268,               /* SEMICOLON  */
    IDENTIFIER = 269,              /* IDENTIFIER  */
    INTEGER = 270,                 /* INTEGER  */
    CHAR = 271,                    /* CHAR  */
    BOOL = 272,                    /* BOOL  */
    STRING = 273,                  /* STRING  */
    WHILE = 274,                   /* WHILE  */
    IF = 275,                      /* IF  */
    ELSE = 276,                    /* ELSE  */
    FOR = 277,                     /* FOR  */
    PRINTF = 278,                  /* PRINTF  */
    SCANF = 279,                   /* SCANF  */
    PLUSE = 280,                   /* PLUSE  */
    MINUSE = 281,                  /* MINUSE  */
    OR = 282,                      /* OR  */
    AND = 283,                     /* AND  */
    LOP_EQ = 284,                  /* LOP_EQ  */
    EQUAL = 285,                   /* EQUAL  */
    PLUS = 286,                    /* PLUS  */
    MINUS = 287,                   /* MINUS  */
    MUL = 288,                     /* MUL  */
    DIV = 289,                     /* DIV  */
    MOD = 290,                     /* MOD  */
    BIGGER = 291,                  /* BIGGER  */
    LESS = 292,                    /* LESS  */
    BIGGERE = 293,                 /* BIGGERE  */
    LESSE = 294,                   /* LESSE  */
    NOT = 295,                     /* NOT  */
    PP = 296,                      /* PP  */
    MM = 297,                      /* MM  */
    QU = 298                       /* QU  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);


/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_T_CHAR = 3,                     /* T_CHAR  */
  YYSYMBOL_T_INT = 4,                      /* T_INT  */
  YYSYMBOL_T_STRING = 5,                   /* T_STRING  */
  YYSYMBOL_T_BOOL = 6,                     /* T_BOOL  */
  YYSYMBOL_LOP_ASSIGN = 7,                 /* LOP_ASSIGN  */
  YYSYMBOL_COMMA = 8,                      /* COMMA  */
  YYSYMBOL_L = 9,                          /* L  */
  YYSYMBOL_R = 10,                         /* R  */
  YYSYMBOL_CL = 11,                        /* CL  */
  YYSYMBOL_CR = 12,                        /* CR  */
  YYSYMBOL_SEMICOLON = 13,                 /* SEMICOLON  */
  YYSYMBOL_IDENTIFIER = 14,                /* IDENTIFIER  */
  YYSYMBOL_INTEGER = 15,                   /* INTEGER  */
  YYSYMBOL_CHAR = 16,                      /* CHAR  */
  YYSYMBOL_BOOL = 17,                      /* BOOL  */
  YYSYMBOL_STRING = 18,                    /* STRING  */
  YYSYMBOL_WHILE = 19,                     /* WHILE  */
  YYSYMBOL_IF = 20,                        /* IF  */
  YYSYMBOL_ELSE = 21,                      /* ELSE  */
  YYSYMBOL_FOR = 22,                       /* FOR  */
  YYSYMBOL_PRINTF = 23,                    /* PRINTF  */
  YYSYMBOL_SCANF = 24,                     /* SCANF  */
  YYSYMBOL_PLUSE = 25,                     /* PLUSE  */
  YYSYMBOL_MINUSE = 26,                    /* MINUSE  */
  YYSYMBOL_OR = 27,                        /* OR  */
  YYSYMBOL_AND = 28,                       /* AND  */
  YYSYMBOL_LOP_EQ = 29,                    /* LOP_EQ  */
  YYSYMBOL_EQUAL = 30,                     /* EQUAL  */
  YYSYMBOL_PLUS = 31,                      /* PLUS  */
  YYSYMBOL_MINUS = 32,                     /* MINUS  */
  YYSYMBOL_MUL = 33,                       /* MUL  */
  YYSYMBOL_DIV = 34,                       /* DIV  */
  YYSYMBOL_MOD = 35,                       /* MOD  */
  YYSYMBOL_BIGGER = 36,                    /* BIGGER  */
  YYSYMBOL_LESS = 37,                      /* LESS  */
  YYSYMBOL_BIGGERE = 38,                   /* BIGGERE  */
  YYSYMBOL_LESSE = 39,                     /* LESSE  */
  YYSYMBOL_NOT = 40,                       /* NOT  */
  YYSYMBOL_PP = 41,                        /* PP  */
  YYSYMBOL_MM = 42,                        /* MM  */
  YYSYMBOL_QU = 43,                        /* QU  */
  YYSYMBOL_YYACCEPT = 44,                  /* $accept  */
  YYSYMBOL_program = 45,                   /* program  */
  YYSYMBOL_functions = 46,                 /* functions  */
  YYSYMBOL_function = 47,                  /* function  */
  YYSYMBOL_statements = 48,                /* statements  */
  YYSYMBOL_statement = 49,                 /* statement  */
  YYSYMBOL_scanf = 50,                     /* scanf  */
  YYSYMBOL_scanbodys = 51,                 /* scanbodys  */
  YYSYMBOL_scanbody = 52,                  /* scanbody  */
  YYSYMBOL_printf = 53,                    /* printf  */
  YYSYMBOL_printfbodys = 54,               /* printfbodys  */
  YYSYMBOL_printfbody = 55,                /* printfbody  */
  YYSYMBOL_for = 56,                       /* for  */
  YYSYMBOL_forcondition = 57,              /* forcondition  */
  YYSYMBOL_if = 58,                        /* if  */
  YYSYMBOL_while = 59,                     /* while  */
  YYSYMBOL_assign = 60,                    /* assign  */
  YYSYMBOL_declaration = 61,               /* declaration  */
  YYSYMBOL_decs = 62,                      /* decs  */
  YYSYMBOL_singledec = 63,                 /* singledec  */
  YYSYMBOL_expr = 64,                      /* expr  */
  YYSYMBOL_T = 65                          /* T  */
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
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && ! defined __ICC && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                            \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
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
#define YYFINAL  8
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   404

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  44
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  22
/* YYNRULES -- Number of rules.  */
#define YYNRULES  65
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  130

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   298


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
      35,    36,    37,    38,    39,    40,    41,    42,    43
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    30,    30,    34,    35,    39,    42,    43,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    61,
      65,    66,    69,    70,    74,    78,    79,    82,    86,    90,
      94,    98,   102,   111,   121,   122,   130,   136,   142,   145,
     148,   151,   154,   155,   156,   157,   158,   159,   160,   161,
     162,   163,   164,   165,   166,   167,   168,   169,   170,   171,
     172,   173,   174,   177,   178,   179
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
  "\"end of file\"", "error", "\"invalid token\"", "T_CHAR", "T_INT",
  "T_STRING", "T_BOOL", "LOP_ASSIGN", "COMMA", "L", "R", "CL", "CR",
  "SEMICOLON", "IDENTIFIER", "INTEGER", "CHAR", "BOOL", "STRING", "WHILE",
  "IF", "ELSE", "FOR", "PRINTF", "SCANF", "PLUSE", "MINUSE", "OR", "AND",
  "LOP_EQ", "EQUAL", "PLUS", "MINUS", "MUL", "DIV", "MOD", "BIGGER",
  "LESS", "BIGGERE", "LESSE", "NOT", "PP", "MM", "QU", "$accept",
  "program", "functions", "function", "statements", "statement", "scanf",
  "scanbodys", "scanbody", "printf", "printfbodys", "printfbody", "for",
  "forcondition", "if", "while", "assign", "declaration", "decs",
  "singledec", "expr", "T", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_int16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298
};
#endif

#define YYPACT_NINF (-30)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      38,   -30,   -30,   -30,     4,    38,   -30,    -9,   -30,   -30,
      -5,    16,    -1,   224,   104,   239,   -30,    -4,   -30,   -30,
     -30,    23,    34,    59,    60,    69,   239,   239,    35,    37,
     144,   -30,    68,    83,   -30,   -30,   -30,    84,    85,   315,
      87,   -30,   184,   -16,   255,   239,   239,   239,   -30,   -30,
     239,   239,    38,   224,   239,    32,   -19,   -30,   -30,   -30,
     -30,   -30,   -30,   -30,   -30,   -30,   -30,   239,   239,   239,
     239,   239,   239,   239,   239,   239,   239,   239,   239,    75,
     -30,    94,   -30,   -30,   344,   344,   344,   272,   285,    91,
     -30,    15,   -30,   344,    92,    21,   -30,   344,   356,    55,
     365,   -19,   -19,    30,    30,    40,   -30,   -30,   -30,   -30,
     239,    87,   224,   224,   239,   239,   -30,   -30,    32,   -30,
     344,   -30,   -30,   -30,   331,   -30,   -30,   239,   302,   -30
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,    64,    63,    65,     0,     2,     3,     0,     1,     4,
       0,     0,     0,     0,     0,     0,     8,    38,    39,    40,
      41,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     6,     0,     0,    16,    13,    12,     0,     0,     0,
       0,    15,     0,    38,     0,     0,     0,     0,    42,    43,
       0,     0,     0,     0,     0,     0,    62,    58,    44,    45,
       5,     7,    17,    18,    11,    10,     9,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    37,
      33,    34,    14,    53,    32,    46,    47,     0,     0,     0,
      28,     0,    25,    27,     0,     0,    20,    22,    60,    59,
      48,    49,    50,    51,    52,    61,    54,    56,    55,    57,
       0,     0,     0,     0,     0,     0,    24,    23,     0,    19,
      36,    35,    31,    30,     0,    26,    21,     0,     0,    29
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -30,   -30,   -30,   100,    95,   -29,   -30,   -30,    -7,   -30,
     -30,     1,   -30,   -30,   -30,   -30,   -30,    73,    10,   -30,
     -15,     2
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     4,     5,     6,    30,    31,    32,    95,    96,    33,
      91,    92,    34,    53,    35,    36,    37,    38,    80,    81,
      39,    40
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      44,    61,     7,    45,     8,    10,    11,     7,    13,    46,
      47,    56,    57,    61,    72,    73,    74,    75,    76,    77,
      78,    46,    47,   115,    90,    48,    49,   116,    12,   118,
      84,    85,    86,   119,    50,    87,    88,    48,    49,    93,
      97,     1,     2,    15,     3,    51,    43,    18,    19,    58,
      20,    59,    98,    99,   100,   101,   102,   103,   104,   105,
     106,   107,   108,   109,    26,    74,    75,    76,    77,    78,
      52,    54,    27,    28,    29,    94,    75,    76,    77,    78,
      55,    62,   110,   122,   123,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,   120,    63,    64,    65,   124,
      93,    79,   111,    97,   114,     9,   117,     1,     2,    42,
       3,   126,   128,    14,    41,    15,   125,    16,    17,    18,
      19,   121,    20,    21,    22,    89,    23,    24,    25,     0,
       0,     0,     0,     0,     0,     0,    26,     0,     0,     0,
       0,     0,     0,     0,    27,    28,    29,     1,     2,     0,
       3,     0,     0,    14,    60,    15,     0,    16,    17,    18,
      19,     0,    20,    21,    22,     0,    23,    24,    25,     0,
       0,     0,     0,     0,     0,     0,    26,     0,     0,     0,
       0,     0,     0,     0,    27,    28,    29,     1,     2,     0,
       3,     0,     0,    14,    82,    15,     0,    16,    17,    18,
      19,     0,    20,    21,    22,     0,    23,    24,    25,     0,
       0,     0,     0,     0,     0,     0,    26,     0,     0,     0,
       0,     0,     0,     0,    27,    28,    29,     1,     2,     0,
       3,     0,     0,    14,     0,    15,     0,    16,    17,    18,
      19,     0,    20,    21,    22,     0,    23,    24,    25,     0,
      15,     0,     0,    43,    18,    19,    26,    20,     0,     0,
       0,     0,     0,     0,    27,    28,    29,    83,     0,     0,
       0,    26,     0,     0,     0,     0,     0,     0,     0,    27,
      28,    29,    67,    68,   112,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,     0,     0,   113,     0,    67,
      68,     0,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    67,    68,   129,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,     0,     0,     0,    66,    67,
      68,     0,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    67,    68,   127,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,     0,     0,     0,    67,    68,
       0,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    67,    68,     0,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    68,     0,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    70,    71,    72,    73,
      74,    75,    76,    77,    78
};

static const yytype_int8 yycheck[] =
{
      15,    30,     0,     7,     0,    14,    11,     5,     9,    25,
      26,    26,    27,    42,    33,    34,    35,    36,    37,    38,
      39,    25,    26,     8,    53,    41,    42,    12,    12,     8,
      45,    46,    47,    12,    11,    50,    51,    41,    42,    54,
      55,     3,     4,    11,     6,    11,    14,    15,    16,    14,
      18,    14,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    32,    35,    36,    37,    38,    39,
      11,    11,    40,    41,    42,    43,    36,    37,    38,    39,
      11,    13,     7,   112,   113,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,   110,    13,    13,    13,   114,
     115,    14,     8,   118,    13,     5,    14,     3,     4,    14,
       6,   118,   127,     9,    10,    11,   115,    13,    14,    15,
      16,   111,    18,    19,    20,    52,    22,    23,    24,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    32,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    40,    41,    42,     3,     4,    -1,
       6,    -1,    -1,     9,    10,    11,    -1,    13,    14,    15,
      16,    -1,    18,    19,    20,    -1,    22,    23,    24,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    32,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    40,    41,    42,     3,     4,    -1,
       6,    -1,    -1,     9,    10,    11,    -1,    13,    14,    15,
      16,    -1,    18,    19,    20,    -1,    22,    23,    24,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    32,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    40,    41,    42,     3,     4,    -1,
       6,    -1,    -1,     9,    -1,    11,    -1,    13,    14,    15,
      16,    -1,    18,    19,    20,    -1,    22,    23,    24,    -1,
      11,    -1,    -1,    14,    15,    16,    32,    18,    -1,    -1,
      -1,    -1,    -1,    -1,    40,    41,    42,    12,    -1,    -1,
      -1,    32,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    40,
      41,    42,    27,    28,    12,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    -1,    -1,    12,    -1,    27,
      28,    -1,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    27,    28,    12,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    -1,    -1,    -1,    13,    27,
      28,    -1,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    27,    28,    13,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    -1,    -1,    -1,    27,    28,
      -1,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    27,    28,    -1,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    28,    -1,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    31,    32,    33,    34,
      35,    36,    37,    38,    39
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     3,     4,     6,    45,    46,    47,    65,     0,    47,
      14,    11,    12,     9,     9,    11,    13,    14,    15,    16,
      18,    19,    20,    22,    23,    24,    32,    40,    41,    42,
      48,    49,    50,    53,    56,    58,    59,    60,    61,    64,
      65,    10,    48,    14,    64,     7,    25,    26,    41,    42,
      11,    11,    11,    57,    11,    11,    64,    64,    14,    14,
      10,    49,    13,    13,    13,    13,    13,    27,    28,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    14,
      62,    63,    10,    12,    64,    64,    64,    64,    64,    61,
      49,    54,    55,    64,    43,    51,    52,    64,    64,    64,
      64,    64,    64,    64,    64,    64,    64,    64,    64,    64,
       7,     8,    12,    12,    13,     8,    12,    14,     8,    12,
      64,    62,    49,    49,    64,    55,    52,    13,    64,    12
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    44,    45,    46,    46,    47,    48,    48,    49,    49,
      49,    49,    49,    49,    49,    49,    49,    49,    49,    50,
      51,    51,    52,    52,    53,    54,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    62,    63,    63,    64,    64,
      64,    64,    64,    64,    64,    64,    64,    64,    64,    64,
      64,    64,    64,    64,    64,    64,    64,    64,    64,    64,
      64,    64,    64,    65,    65,    65
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     2,     7,     1,     2,     1,     2,
       2,     2,     1,     1,     3,     2,     1,     2,     2,     4,
       1,     3,     1,     2,     4,     1,     3,     1,     3,     7,
       5,     5,     3,     2,     1,     3,     3,     1,     1,     1,
       1,     1,     2,     2,     2,     2,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     2,     3,
       3,     3,     2,     1,     1,     1
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


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

/* This macro is provided for backward compatibility. */
# ifndef YY_LOCATION_PRINT
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif


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
  YYUSE (yyoutput);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yykind < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yykind], *yyvaluep);
# endif
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yykind);
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
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yykind);
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
    goto yyexhaustedlab;
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
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          goto yyexhaustedlab;
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
  case 2: /* program: functions  */
#line 30 "main.y"
           {root = new TreeNode(0, NODE_PROG); root->addChild(yyvsp[0]);}
#line 1346 "main.tab.cc"
    break;

  case 3: /* functions: function  */
#line 34 "main.y"
         {yyval=yyvsp[0];}
#line 1352 "main.tab.cc"
    break;

  case 4: /* functions: functions function  */
#line 35 "main.y"
                   {yyval=yyvsp[-1];yyval->addSibling(yyvsp[0]);}
#line 1358 "main.tab.cc"
    break;

  case 5: /* function: T IDENTIFIER CL CR L statements R  */
#line 39 "main.y"
                                  {yyval=new TreeNode(lineno, NODE_FUNC);yyval->addChild(yyvsp[-6]);yyval->addChild(yyvsp[-5]);yyval->addChild(yyvsp[-1]);}
#line 1364 "main.tab.cc"
    break;

  case 6: /* statements: statement  */
#line 42 "main.y"
             {yyval=yyvsp[0];}
#line 1370 "main.tab.cc"
    break;

  case 7: /* statements: statements statement  */
#line 43 "main.y"
                        {yyval=yyvsp[-1];yyval->addSibling(yyvsp[0]);}
#line 1376 "main.tab.cc"
    break;

  case 8: /* statement: SEMICOLON  */
#line 47 "main.y"
             {yyval = new TreeNode(lineno, NODE_STMT); yyval->stype = STMT_SKIP;}
#line 1382 "main.tab.cc"
    break;

  case 9: /* statement: expr SEMICOLON  */
#line 48 "main.y"
                {yyval = yyvsp[-1];}
#line 1388 "main.tab.cc"
    break;

  case 10: /* statement: declaration SEMICOLON  */
#line 49 "main.y"
                        {yyval = yyvsp[-1];}
#line 1394 "main.tab.cc"
    break;

  case 11: /* statement: assign SEMICOLON  */
#line 50 "main.y"
                   {yyval=yyvsp[-1];}
#line 1400 "main.tab.cc"
    break;

  case 12: /* statement: while  */
#line 51 "main.y"
        {yyval=yyvsp[0];}
#line 1406 "main.tab.cc"
    break;

  case 13: /* statement: if  */
#line 52 "main.y"
     {yyval=yyvsp[0];}
#line 1412 "main.tab.cc"
    break;

  case 14: /* statement: L statements R  */
#line 53 "main.y"
                 {yyval = new TreeNode(lineno, NODE_STMT); yyval->stype = STMTS;yyval->addChild(yyvsp[-1]);}
#line 1418 "main.tab.cc"
    break;

  case 15: /* statement: L R  */
#line 54 "main.y"
      {yyval = new TreeNode(lineno, NODE_STMT);}
#line 1424 "main.tab.cc"
    break;

  case 16: /* statement: for  */
#line 55 "main.y"
     {yyval=yyvsp[0];}
#line 1430 "main.tab.cc"
    break;

  case 17: /* statement: scanf SEMICOLON  */
#line 56 "main.y"
                 {yyval=yyvsp[-1];}
#line 1436 "main.tab.cc"
    break;

  case 18: /* statement: printf SEMICOLON  */
#line 57 "main.y"
                  {yyval=yyvsp[-1];}
#line 1442 "main.tab.cc"
    break;

  case 19: /* scanf: SCANF CL scanbodys CR  */
#line 61 "main.y"
                      {yyval = new TreeNode(lineno, NODE_STMT); yyval->stype = STMT_SCANF;yyval->addChild(yyvsp[-3]);yyval->addChild(yyvsp[-1]);}
#line 1448 "main.tab.cc"
    break;

  case 20: /* scanbodys: scanbody  */
#line 65 "main.y"
          {yyval=yyvsp[0];}
#line 1454 "main.tab.cc"
    break;

  case 21: /* scanbodys: scanbodys COMMA scanbody  */
#line 66 "main.y"
                          {yyval=yyvsp[-2];yyval->addSibling(yyvsp[0]);}
#line 1460 "main.tab.cc"
    break;

  case 22: /* scanbody: expr  */
#line 69 "main.y"
     {yyval=yyvsp[0];}
#line 1466 "main.tab.cc"
    break;

  case 23: /* scanbody: QU IDENTIFIER  */
#line 70 "main.y"
              {yyval=yyvsp[0];}
#line 1472 "main.tab.cc"
    break;

  case 24: /* printf: PRINTF CL printfbodys CR  */
#line 74 "main.y"
                         {yyval = new TreeNode(lineno, NODE_STMT); yyval->stype = STMT_PRINTF;yyval->addChild(yyvsp[-3]);yyval->addChild(yyvsp[-1]);}
#line 1478 "main.tab.cc"
    break;

  case 25: /* printfbodys: printfbody  */
#line 78 "main.y"
            {yyval=yyvsp[0];}
#line 1484 "main.tab.cc"
    break;

  case 26: /* printfbodys: printfbodys COMMA printfbody  */
#line 79 "main.y"
                              {yyval=yyvsp[-2];yyval->addSibling(yyvsp[0]);}
#line 1490 "main.tab.cc"
    break;

  case 27: /* printfbody: expr  */
#line 82 "main.y"
     {yyval=yyvsp[0];}
#line 1496 "main.tab.cc"
    break;

  case 28: /* for: FOR forcondition statement  */
#line 86 "main.y"
                           {yyval = new TreeNode(lineno, NODE_STMT); yyval->stype = STMT_FOR;yyval->addChild(yyvsp[-1]);yyval->addChild(yyvsp[0]);}
#line 1502 "main.tab.cc"
    break;

  case 29: /* forcondition: CL declaration SEMICOLON expr SEMICOLON expr CR  */
#line 90 "main.y"
                                                 {yyval=yyvsp[-5];yyval->addSibling(yyvsp[-3]);yyval->addSibling(yyvsp[-1]);}
#line 1508 "main.tab.cc"
    break;

  case 30: /* if: IF CL expr CR statement  */
#line 94 "main.y"
                        {yyval = new TreeNode(lineno, NODE_STMT); yyval->stype = STMT_IF;yyval->addChild(yyvsp[-2]);yyval->addChild(yyvsp[0]);}
#line 1514 "main.tab.cc"
    break;

  case 31: /* while: WHILE CL expr CR statement  */
#line 98 "main.y"
                            {yyval = new TreeNode(lineno, NODE_STMT); yyval->stype =STMT_WHILE;yyval->addChild(yyvsp[-2]);yyval->addChild(yyvsp[0]);}
#line 1520 "main.tab.cc"
    break;

  case 32: /* assign: IDENTIFIER LOP_ASSIGN expr  */
#line 102 "main.y"
                           {
    TreeNode* node = new TreeNode(yyvsp[-2]->lineno, NODE_STMT);
    node->stype = STMT_ASSIGN;
    node->addChild(yyvsp[-2]);
    node->addChild(yyvsp[0]);
    yyval = node; 
}
#line 1532 "main.tab.cc"
    break;

  case 33: /* declaration: T decs  */
#line 111 "main.y"
       {
	TreeNode* node = new TreeNode(yyvsp[-1]->lineno, NODE_STMT);
	node->stype = STMT_DECL;
	node->addChild(yyvsp[-1]);
	node->addChild(yyvsp[0]);
	yyval=node;
}
#line 1544 "main.tab.cc"
    break;

  case 34: /* decs: singledec  */
#line 121 "main.y"
           {yyval=new TreeNode(yyvsp[0]->lineno, NODE_IDLIST);yyval->addChild(yyvsp[0]);}
#line 1550 "main.tab.cc"
    break;

  case 35: /* decs: singledec COMMA decs  */
#line 122 "main.y"
                      {
	yyval=new TreeNode(yyvsp[-2]->lineno, NODE_IDLIST);
	yyval->addChild(yyvsp[-2]);
	yyval->addChild(yyvsp[0]);
}
#line 1560 "main.tab.cc"
    break;

  case 36: /* singledec: IDENTIFIER LOP_ASSIGN expr  */
#line 130 "main.y"
                           {
    TreeNode* node = new TreeNode(yyvsp[-2]->lineno, NODE_STMT);
    node->stype = STMT_DECL;
    node->addChild(yyvsp[-2]);
    node->addChild(yyvsp[0]);
    yyval = node;}
#line 1571 "main.tab.cc"
    break;

  case 37: /* singledec: IDENTIFIER  */
#line 136 "main.y"
            {
    yyval = yyvsp[0];
}
#line 1579 "main.tab.cc"
    break;

  case 38: /* expr: IDENTIFIER  */
#line 142 "main.y"
             {
    yyval = yyvsp[0];
}
#line 1587 "main.tab.cc"
    break;

  case 39: /* expr: INTEGER  */
#line 145 "main.y"
          {
    yyval = yyvsp[0];
}
#line 1595 "main.tab.cc"
    break;

  case 40: /* expr: CHAR  */
#line 148 "main.y"
       {
    yyval = yyvsp[0];
}
#line 1603 "main.tab.cc"
    break;

  case 41: /* expr: STRING  */
#line 151 "main.y"
         {
    yyval = yyvsp[0];
}
#line 1611 "main.tab.cc"
    break;

  case 42: /* expr: IDENTIFIER PP  */
#line 154 "main.y"
              {yyval= new TreeNode(lineno, NODE_EXPR);yyval->optype=OP_PP;yyval->addChild(yyvsp[-1]);}
#line 1617 "main.tab.cc"
    break;

  case 43: /* expr: IDENTIFIER MM  */
#line 155 "main.y"
              {yyval= new TreeNode(lineno, NODE_EXPR);yyval->optype=OP_PP;yyval->addChild(yyvsp[-1]);}
#line 1623 "main.tab.cc"
    break;

  case 44: /* expr: PP IDENTIFIER  */
#line 156 "main.y"
              {yyval= new TreeNode(lineno, NODE_EXPR);yyval->optype=OP_P;yyval->addChild(yyvsp[0]);}
#line 1629 "main.tab.cc"
    break;

  case 45: /* expr: MM IDENTIFIER  */
#line 157 "main.y"
              {yyval= new TreeNode(lineno, NODE_EXPR);yyval->optype=OP_M;yyval->addChild(yyvsp[0]);}
#line 1635 "main.tab.cc"
    break;

  case 46: /* expr: IDENTIFIER PLUSE expr  */
#line 158 "main.y"
                       {yyval= new TreeNode(lineno, NODE_EXPR);yyval->optype=OP_PLUSE;yyval->addChild(yyvsp[-2]);yyval->addChild(yyvsp[0]);}
#line 1641 "main.tab.cc"
    break;

  case 47: /* expr: IDENTIFIER MINUSE expr  */
#line 159 "main.y"
                        {yyval= new TreeNode(lineno, NODE_EXPR);yyval->optype=OP_MINUSE;yyval->addChild(yyvsp[-2]);yyval->addChild(yyvsp[0]);}
#line 1647 "main.tab.cc"
    break;

  case 48: /* expr: expr EQUAL expr  */
#line 160 "main.y"
                 {yyval= new TreeNode(lineno, NODE_EXPR);yyval->optype=OP_EQUAL;yyval->addChild(yyvsp[-2]);yyval->addChild(yyvsp[0]);}
#line 1653 "main.tab.cc"
    break;

  case 49: /* expr: expr PLUS expr  */
#line 161 "main.y"
                {yyval= new TreeNode(lineno, NODE_EXPR);yyval->optype=OP_PLUS;yyval->addChild(yyvsp[-2]);yyval->addChild(yyvsp[0]);}
#line 1659 "main.tab.cc"
    break;

  case 50: /* expr: expr MINUS expr  */
#line 162 "main.y"
                        {TreeNode* node = new TreeNode(lineno, NODE_EXPR);node->optype=OP_MINUS;node->addChild(yyvsp[-2]);node->addChild(yyvsp[0]);yyval=node;}
#line 1665 "main.tab.cc"
    break;

  case 51: /* expr: expr MUL expr  */
#line 163 "main.y"
                {TreeNode* node = new TreeNode(lineno, NODE_EXPR);node->optype=OP_MUL;node->addChild(yyvsp[-2]);node->addChild(yyvsp[0]);yyval=node;}
#line 1671 "main.tab.cc"
    break;

  case 52: /* expr: expr DIV expr  */
#line 164 "main.y"
                {TreeNode* node = new TreeNode(lineno, NODE_EXPR);node->optype=OP_DIV;node->addChild(yyvsp[-2]);node->addChild(yyvsp[0]);yyval=node;}
#line 1677 "main.tab.cc"
    break;

  case 53: /* expr: CL expr CR  */
#line 165 "main.y"
                        {yyval=yyvsp[-1];}
#line 1683 "main.tab.cc"
    break;

  case 54: /* expr: expr BIGGER expr  */
#line 166 "main.y"
                 {yyval= new TreeNode(lineno, NODE_EXPR);yyval->optype=OP_BIGGER;yyval->addChild(yyvsp[-2]);yyval->addChild(yyvsp[0]);}
#line 1689 "main.tab.cc"
    break;

  case 55: /* expr: expr BIGGERE expr  */
#line 167 "main.y"
                  {yyval= new TreeNode(lineno, NODE_EXPR);yyval->optype=OP_BIGGERE;yyval->addChild(yyvsp[-2]);yyval->addChild(yyvsp[0]);}
#line 1695 "main.tab.cc"
    break;

  case 56: /* expr: expr LESS expr  */
#line 168 "main.y"
                {yyval= new TreeNode(lineno, NODE_EXPR);yyval->optype=OP_LESS;yyval->addChild(yyvsp[-2]);yyval->addChild(yyvsp[0]);}
#line 1701 "main.tab.cc"
    break;

  case 57: /* expr: expr LESSE expr  */
#line 169 "main.y"
                        {yyval= new TreeNode(lineno, NODE_EXPR);yyval->optype=OP_LESSE;yyval->addChild(yyvsp[-2]);yyval->addChild(yyvsp[0]);}
#line 1707 "main.tab.cc"
    break;

  case 58: /* expr: NOT expr  */
#line 170 "main.y"
                {yyval= new TreeNode(lineno, NODE_EXPR);yyval->optype=OP_NOT;yyval->addChild(yyvsp[0]);}
#line 1713 "main.tab.cc"
    break;

  case 59: /* expr: expr AND expr  */
#line 171 "main.y"
                {yyval= new TreeNode(lineno, NODE_EXPR);yyval->optype=OP_AND;yyval->addChild(yyvsp[-2]);yyval->addChild(yyvsp[0]);}
#line 1719 "main.tab.cc"
    break;

  case 60: /* expr: expr OR expr  */
#line 172 "main.y"
                {yyval= new TreeNode(lineno, NODE_EXPR);yyval->optype=OP_OR;yyval->addChild(yyvsp[-2]);yyval->addChild(yyvsp[0]);}
#line 1725 "main.tab.cc"
    break;

  case 61: /* expr: expr MOD expr  */
#line 173 "main.y"
                {yyval= new TreeNode(lineno, NODE_EXPR);yyval->optype=OP_MOD;yyval->addChild(yyvsp[-2]);yyval->addChild(yyvsp[0]);}
#line 1731 "main.tab.cc"
    break;

  case 62: /* expr: MINUS expr  */
#line 174 "main.y"
            {yyval=yyvsp[0];yyval->int_val=-yyval->int_val;}
#line 1737 "main.tab.cc"
    break;

  case 63: /* T: T_INT  */
#line 177 "main.y"
         {yyval = new TreeNode(lineno, NODE_TYPE); yyval->type = TYPE_INT;}
#line 1743 "main.tab.cc"
    break;

  case 64: /* T: T_CHAR  */
#line 178 "main.y"
         {yyval = new TreeNode(lineno, NODE_TYPE); yyval->type = TYPE_CHAR;}
#line 1749 "main.tab.cc"
    break;

  case 65: /* T: T_BOOL  */
#line 179 "main.y"
         {yyval = new TreeNode(lineno, NODE_TYPE); yyval->type = TYPE_BOOL;}
#line 1755 "main.tab.cc"
    break;


#line 1759 "main.tab.cc"

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
  goto yyreturn;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;


#if !defined yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturn;
#endif


/*-------------------------------------------------------.
| yyreturn -- parsing is finished, clean up and return.  |
`-------------------------------------------------------*/
yyreturn:
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

#line 182 "main.y"


int yyerror(char const* message)
{
  cout << message << " at line " << lineno << endl;
  return -1;
}
