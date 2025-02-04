/* A Bison parser, made by GNU Bison 3.5.1.  */

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

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.5.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* "%code top" blocks.  */
#line 1 "src/parser.y"

    #include <iostream>
    #include <assert.h>
    #include "parser.h"
    extern Ast ast;
    int yylex();
    int yyerror( char const * );

#line 76 "src/parser.cpp"




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

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
#ifndef YY_YY_INCLUDE_PARSER_H_INCLUDED
# define YY_YY_INCLUDE_PARSER_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif
/* "%code requires" blocks.  */
#line 10 "src/parser.y"

    #include "Ast.h"
    #include "SymbolTable.h"
    #include "Type.h"

#line 128 "src/parser.cpp"

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    ID = 258,
    INTEGER = 259,
    IF = 260,
    ELSE = 261,
    BREAK = 262,
    CONTINUE = 263,
    WHILE = 264,
    FOR = 265,
    INT = 266,
    VOID = 267,
    CHAR = 268,
    CONST = 269,
    LPAREN = 270,
    RPAREN = 271,
    LBRACE = 272,
    RBRACE = 273,
    SEMICOLON = 274,
    COMMA = 275,
    ADD = 276,
    SUB = 277,
    MUL = 278,
    DIV = 279,
    EXCLAMATION = 280,
    MORE = 281,
    OR = 282,
    AND = 283,
    LESS = 284,
    ASSIGN = 285,
    EQUAL = 286,
    NOEQUAL = 287,
    LESSEQUAL = 288,
    MOREEQUAL = 289,
    PERC = 290,
    PLUSPLUS = 291,
    MINUSMINUS = 292,
    PRE_INCREMENT = 293,
    POST_INCREMENT = 294,
    PRE_DECREMENT = 295,
    POST_DECREMENT = 296,
    RETURN = 297,
    LINECOMMENT = 298,
    COMMENTBEIGN = 299,
    COMMENTELEMENT = 300,
    COMMENTLINE = 301,
    COMMENTEND = 302,
    THEN = 303
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 16 "src/parser.y"

    int itype;
    char* strtype;
    StmtNode* stmttype;
    ExprNode* exprtype;
    Type* type;
    IdList* Idlisttype;
    FuncFParams* Fstype;
    FuncRParams* FRtype;
    ConstIdList* CIdstype;
    AssignStmt* asstype;

#line 201 "src/parser.cpp"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_INCLUDE_PARSER_H_INCLUDED  */



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

#if ! defined yyoverflow || YYERROR_VERBOSE

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
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


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
#define YYFINAL  64
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   227

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  49
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  34
/* YYNRULES -- Number of rules.  */
#define YYNRULES  82
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  159

#define YYUNDEFTOK  2
#define YYMAXUTOK   303


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

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
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    59,    59,    64,    65,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    86,    92,
      98,    97,   108,   111,   114,   119,   125,   131,   135,   139,
     154,   157,   164,   165,   176,   187,   191,   195,   199,   203,
     211,   213,   219,   225,   233,   235,   241,   249,   250,   251,
     255,   259,   263,   267,   271,   279,   285,   290,   296,   301,
     311,   314,   317,   323,   329,   335,   348,   362,   374,   384,
     398,   412,   420,   429,   442,   453,   468,   483,   483,   503,
     503,   524,   524
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "ID", "INTEGER", "IF", "ELSE", "BREAK",
  "CONTINUE", "WHILE", "FOR", "INT", "VOID", "CHAR", "CONST", "LPAREN",
  "RPAREN", "LBRACE", "RBRACE", "SEMICOLON", "COMMA", "ADD", "SUB", "MUL",
  "DIV", "EXCLAMATION", "MORE", "OR", "AND", "LESS", "ASSIGN", "EQUAL",
  "NOEQUAL", "LESSEQUAL", "MOREEQUAL", "PERC", "PLUSPLUS", "MINUSMINUS",
  "PRE_INCREMENT", "POST_INCREMENT", "PRE_DECREMENT", "POST_DECREMENT",
  "RETURN", "LINECOMMENT", "COMMENTBEIGN", "COMMENTELEMENT", "COMMENTLINE",
  "COMMENTEND", "THEN", "$accept", "Stmts", "Stmt", "AssignStmt",
  "BlockStmt", "IfStmt", "ReturnStmt", "DeclStmt", "FuncDef", "WhileStmt",
  "ConstDeclStmt", "SignleStmt", "ForStmt", "OptDecl", "Exp", "UnaryExp",
  "AddExp", "MulExp", "Cond", "LOrExp", "PrimaryExp", "LVal", "RelExp",
  "LAndExp", "Type", "Idlist", "FuncFParams", "FuncRParams", "ConstIdList",
  "Program", "$@1", "$@2", "$@3", "$@4", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_int16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303
};
# endif

#define YYPACT_NINF (-88)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-78)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     149,     2,   -88,    12,    17,    35,    44,    47,   -88,   -88,
     -88,    57,   -88,   -88,    92,    69,    69,    92,   149,   -88,
     -88,   -88,   -88,   -88,   -88,   -88,   -88,   -88,   -88,   -88,
      55,   -88,   -10,   -14,   -88,   -23,    73,    77,    48,    79,
     -88,   -88,    79,   -88,    83,   149,   -88,   -17,   -88,   -88,
     -88,    61,   -88,   -88,    92,    92,    92,    92,    92,    92,
     -88,   -88,    -7,    22,   -88,   -88,   -88,    40,    79,   -10,
      84,    74,   138,    60,    97,    57,    89,    72,    21,   -88,
     -14,   -14,   -88,   -88,   -88,    80,    98,    92,   -88,   117,
     -88,    92,   115,   185,    79,    92,    92,    92,    92,    92,
      92,    79,   149,   102,   122,    92,   -88,   123,   -88,   -88,
     111,    57,   -88,   100,   -88,   -88,   114,   128,    60,   -10,
     -10,   -10,   -10,   -10,   -10,   138,   -88,    79,   109,   -88,
     112,   133,   142,    45,    92,   -88,   149,   132,    92,    92,
     -88,   135,   133,    57,   -88,   -88,    92,   -88,   -88,    92,
     -88,   170,   159,   -88,   146,   149,    92,   -88,   -88
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,    29,    31,     0,     0,     0,     0,     0,    60,    61,
      62,     0,    20,    13,     0,     0,     0,     0,     2,     3,
       5,     6,     7,     8,     9,    11,    12,    10,    16,    17,
       0,    40,    27,    44,    32,    30,     0,     0,     0,     0,
      14,    15,     0,    81,     0,     0,    35,    30,    29,    36,
      37,     0,     4,    18,     0,     0,     0,     0,     0,     0,
      38,    39,    67,     0,     1,    33,    71,     0,     0,    48,
       0,    28,    56,    58,     0,     0,     0,     0,     0,    26,
      45,    46,    41,    42,    43,     0,    79,     0,    63,     0,
      34,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    64,     0,    21,    19,
       0,     0,    69,    68,    72,    47,    20,    22,    57,    50,
      49,    53,    54,    51,    52,    55,    25,     0,     0,    65,
       0,     0,     0,     0,     0,    23,     0,     0,     0,     0,
      78,    73,     0,     0,    70,    24,     0,    59,    66,     0,
      80,     0,     0,    75,    74,     0,     0,    82,    76
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -88,   134,   -12,   -88,   -87,   -88,   -88,   -88,   -88,   -88,
     -88,   -88,   -88,   -88,   -16,    -9,    11,    43,   -40,   -88,
     -88,     0,   -64,    86,    -8,   -88,   -88,   -88,   -88,   -88,
     -88,   -88,   -88,   -88
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,   103,    30,    31,    32,    33,    70,    71,
      34,    47,    72,    73,    36,    63,   133,    67,    77,    37,
      45,   110,   111,    75
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      35,    51,    74,    44,    92,    46,    52,    59,    86,    56,
      57,    54,    55,    60,    61,    49,    50,    38,    35,    60,
      61,    58,    66,    87,     1,     2,     3,    39,     4,     5,
       6,     7,     8,     9,    10,    11,    40,   125,    12,   108,
      13,    88,    89,    85,   140,    35,    14,    82,    83,    84,
      69,     1,     2,    69,    41,   150,    90,    15,    16,    42,
      91,   142,    43,    17,    65,   143,    52,   104,     8,     9,
      10,   112,    48,    14,    53,   114,    62,    64,    35,    69,
      79,   117,     1,     2,    15,    16,    76,   137,   101,   129,
     126,   106,   107,    35,    68,     1,     2,    80,    81,   109,
      93,    94,    35,   132,    14,    69,   119,   120,   121,   122,
     123,   124,    69,   102,   -77,    15,    16,    14,   144,   105,
     113,   127,   147,   148,   145,   128,   130,   131,    15,    16,
     134,   115,   135,   153,   136,   151,    35,   152,    69,   138,
     158,    95,   139,   157,    96,   141,    97,    98,    99,   100,
      12,   146,     1,     2,     3,    35,     4,     5,     6,     7,
       8,     9,    10,    11,    95,   149,    12,    96,    13,    97,
      98,    99,   100,   154,    14,   155,   156,     0,     0,    78,
     118,     0,     0,     0,     0,    15,    16,     0,     1,     2,
       3,    17,     4,     5,     6,     7,     8,     9,    10,    11,
       0,     0,   116,     0,    13,     0,     0,     0,     0,     0,
      14,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    15,    16,     0,     0,     0,     0,    17
};

static const yytype_int16 yycheck[] =
{
       0,    17,    42,    11,    68,    14,    18,    30,    15,    23,
      24,    21,    22,    36,    37,    15,    16,    15,    18,    36,
      37,    35,    38,    30,     3,     4,     5,    15,     7,     8,
       9,    10,    11,    12,    13,    14,    19,   101,    17,    18,
      19,    19,    20,    59,   131,    45,    25,    56,    57,    58,
      39,     3,     4,    42,    19,   142,    16,    36,    37,    15,
      20,    16,    15,    42,    16,    20,    78,    75,    11,    12,
      13,    87,     3,    25,    19,    91,     3,     0,    78,    68,
      19,    93,     3,     4,    36,    37,     3,   127,    28,   105,
     102,    19,    20,    93,    15,     3,     4,    54,    55,    19,
      16,    27,   102,   111,    25,    94,    95,    96,    97,    98,
      99,   100,   101,    16,    16,    36,    37,    25,   134,    30,
       3,    19,   138,   139,   136,     3,     3,    16,    36,    37,
      30,    16,    18,   149,     6,   143,   136,   146,   127,    30,
     156,    26,    30,   155,    29,     3,    31,    32,    33,    34,
      17,    19,     3,     4,     5,   155,     7,     8,     9,    10,
      11,    12,    13,    14,    26,    30,    17,    29,    19,    31,
      32,    33,    34,     3,    25,    16,    30,    -1,    -1,    45,
      94,    -1,    -1,    -1,    -1,    36,    37,    -1,     3,     4,
       5,    42,     7,     8,     9,    10,    11,    12,    13,    14,
      -1,    -1,    17,    -1,    19,    -1,    -1,    -1,    -1,    -1,
      25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    36,    37,    -1,    -1,    -1,    -1,    42
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     3,     4,     5,     7,     8,     9,    10,    11,    12,
      13,    14,    17,    19,    25,    36,    37,    42,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      63,    64,    65,    66,    69,    70,    73,    78,    15,    15,
      19,    19,    15,    15,    73,    79,    64,    70,     3,    70,
      70,    63,    51,    19,    21,    22,    23,    24,    35,    30,
      36,    37,     3,    74,     0,    16,    63,    76,    15,    65,
      67,    68,    71,    72,    67,    82,     3,    77,    50,    19,
      66,    66,    64,    64,    64,    63,    15,    30,    19,    20,
      16,    20,    71,    16,    27,    26,    29,    31,    32,    33,
      34,    28,    16,    62,    73,    30,    19,    20,    18,    19,
      80,    81,    63,     3,    63,    16,    17,    51,    72,    65,
      65,    65,    65,    65,    65,    71,    51,    19,     3,    63,
       3,    16,    73,    75,    30,    18,     6,    67,    30,    30,
      53,     3,    16,    20,    63,    51,    19,    63,    63,    30,
      53,    73,    64,    63,     3,    16,    30,    51,    63
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    49,    78,    50,    50,    51,    51,    51,    51,    51,
      51,    51,    51,    51,    51,    51,    51,    51,    60,    52,
      79,    53,    54,    54,    54,    58,    55,    63,    67,    70,
      69,    69,    64,    64,    64,    64,    64,    64,    64,    64,
      66,    66,    66,    66,    65,    65,    65,    71,    71,    71,
      71,    71,    71,    71,    71,    72,    72,    68,    68,    62,
      73,    73,    73,    56,    59,    77,    77,    74,    74,    74,
      74,    76,    76,    75,    75,    75,    75,    80,    57,    81,
      57,    82,    61
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     2,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     2,     2,     1,     1,     2,     4,
       0,     4,     5,     6,     7,     5,     3,     1,     1,     1,
       1,     1,     1,     3,     4,     2,     2,     2,     2,     2,
       1,     3,     3,     3,     1,     3,     3,     3,     1,     3,
       3,     3,     3,     3,     3,     3,     1,     3,     1,     4,
       1,     1,     1,     3,     4,     3,     5,     1,     3,     3,
       5,     1,     3,     2,     4,     4,     6,     0,     6,     0,
       7,     0,    10
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

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

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



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
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YYUSE (yyoutput);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yytype], *yyvaluep);
# endif
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyo, yytype, yyvaluep);
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp, int yyrule)
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
                       yystos[+yyssp[yyi + 1 - yynrhs]],
                       &yyvsp[(yyi + 1) - (yynrhs)]
                                              );
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
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
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


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen(S) (YY_CAST (YYPTRDIFF_T, strlen (S)))
#  else
/* Return the length of YYSTR.  */
static YYPTRDIFF_T
yystrlen (const char *yystr)
{
  YYPTRDIFF_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYPTRDIFF_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYPTRDIFF_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            else
              goto append;

          append:
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (yyres)
    return yystpcpy (yyres, yystr) - yyres;
  else
    return yystrlen (yystr);
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYPTRDIFF_T *yymsg_alloc, char **yymsg,
                yy_state_t *yyssp, int yytoken)
{
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat: reported tokens (one for the "unexpected",
     one per "expected"). */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Actual size of YYARG. */
  int yycount = 0;
  /* Cumulated lengths of YYARG.  */
  YYPTRDIFF_T yysize = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[+*yyssp];
      YYPTRDIFF_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
      yysize = yysize0;
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYPTRDIFF_T yysize1
                    = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
                    yysize = yysize1;
                  else
                    return 2;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
    default: /* Avoid compiler warnings. */
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    /* Don't count the "%s"s in the final size, but reserve room for
       the terminator.  */
    YYPTRDIFF_T yysize1 = yysize + (yystrlen (yyformat) - 2 * yycount) + 1;
    if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
      yysize = yysize1;
    else
      return 2;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          ++yyp;
          ++yyformat;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
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
    yy_state_fast_t yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss;
    yy_state_t *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYPTRDIFF_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYPTRDIFF_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
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
# undef YYSTACK_RELOCATE
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

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
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
  case 2:
#line 59 "src/parser.y"
            {
        ast.setRoot((yyvsp[0].stmttype));
    }
#line 1504 "src/parser.cpp"
    break;

  case 3:
#line 64 "src/parser.y"
           {(yyval.stmttype)=(yyvsp[0].stmttype);}
#line 1510 "src/parser.cpp"
    break;

  case 4:
#line 65 "src/parser.y"
                {
        (yyval.stmttype) = new SeqNode((yyvsp[-1].stmttype), (yyvsp[0].stmttype));
    }
#line 1518 "src/parser.cpp"
    break;

  case 5:
#line 70 "src/parser.y"
                 {(yyval.stmttype)=(yyvsp[0].stmttype);}
#line 1524 "src/parser.cpp"
    break;

  case 6:
#line 71 "src/parser.y"
                {(yyval.stmttype)=(yyvsp[0].stmttype);}
#line 1530 "src/parser.cpp"
    break;

  case 7:
#line 72 "src/parser.y"
             {(yyval.stmttype)=(yyvsp[0].stmttype);}
#line 1536 "src/parser.cpp"
    break;

  case 8:
#line 73 "src/parser.y"
                 {(yyval.stmttype)=(yyvsp[0].stmttype);}
#line 1542 "src/parser.cpp"
    break;

  case 9:
#line 74 "src/parser.y"
               {(yyval.stmttype)=(yyvsp[0].stmttype);}
#line 1548 "src/parser.cpp"
    break;

  case 10:
#line 75 "src/parser.y"
                    {(yyval.stmttype) = (yyvsp[0].stmttype);}
#line 1554 "src/parser.cpp"
    break;

  case 11:
#line 76 "src/parser.y"
              {(yyval.stmttype)=(yyvsp[0].stmttype);}
#line 1560 "src/parser.cpp"
    break;

  case 12:
#line 77 "src/parser.y"
                {(yyval.stmttype) = (yyvsp[0].stmttype);}
#line 1566 "src/parser.cpp"
    break;

  case 13:
#line 78 "src/parser.y"
                {(yyval.stmttype) = new Empty();}
#line 1572 "src/parser.cpp"
    break;

  case 14:
#line 79 "src/parser.y"
                      {(yyval.stmttype) = new BreakStmt();}
#line 1578 "src/parser.cpp"
    break;

  case 15:
#line 80 "src/parser.y"
                         {(yyval.stmttype) = new ContinueStmt();}
#line 1584 "src/parser.cpp"
    break;

  case 16:
#line 81 "src/parser.y"
                 {(yyval.stmttype) = (yyvsp[0].stmttype);}
#line 1590 "src/parser.cpp"
    break;

  case 17:
#line 82 "src/parser.y"
              { (yyval.stmttype) = (yyvsp[0].stmttype); }
#line 1596 "src/parser.cpp"
    break;

  case 18:
#line 86 "src/parser.y"
                 {
        (yyval.stmttype) = new SignleStmt((yyvsp[-1].exprtype));
    }
#line 1604 "src/parser.cpp"
    break;

  case 19:
#line 92 "src/parser.y"
                              {
        (yyval.stmttype) = new AssignStmt((yyvsp[-3].exprtype), (yyvsp[-1].exprtype));
    }
#line 1612 "src/parser.cpp"
    break;

  case 20:
#line 98 "src/parser.y"
        {identifiers = new SymbolTable(identifiers);}
#line 1618 "src/parser.cpp"
    break;

  case 21:
#line 100 "src/parser.y"
        {
            (yyval.stmttype) = new CompoundStmt((yyvsp[-1].stmttype));
            SymbolTable *top = identifiers;
            identifiers = identifiers->getPrev();
            delete top;
        }
#line 1629 "src/parser.cpp"
    break;

  case 22:
#line 108 "src/parser.y"
                                            {
        (yyval.stmttype) = new IfStmt((yyvsp[-2].exprtype), (yyvsp[0].stmttype));
    }
#line 1637 "src/parser.cpp"
    break;

  case 23:
#line 111 "src/parser.y"
                                         {
        (yyval.stmttype) = new IfStmt((yyvsp[-3].exprtype), new Empty());
    }
#line 1645 "src/parser.cpp"
    break;

  case 24:
#line 114 "src/parser.y"
                                           {
        (yyval.stmttype) = new IfElseStmt((yyvsp[-4].exprtype), (yyvsp[-2].stmttype), (yyvsp[0].stmttype));
    }
#line 1653 "src/parser.cpp"
    break;

  case 25:
#line 119 "src/parser.y"
                                    {
        (yyval.stmttype) = new WhileStmt((yyvsp[-2].exprtype), (yyvsp[0].stmttype));
    }
#line 1661 "src/parser.cpp"
    break;

  case 26:
#line 125 "src/parser.y"
                        {
        (yyval.stmttype) = new ReturnStmt((yyvsp[-1].exprtype));
    }
#line 1669 "src/parser.cpp"
    break;

  case 27:
#line 131 "src/parser.y"
           {(yyval.exprtype) = (yyvsp[0].exprtype);}
#line 1675 "src/parser.cpp"
    break;

  case 28:
#line 135 "src/parser.y"
           { (yyval.exprtype) = (yyvsp[0].exprtype); }
#line 1681 "src/parser.cpp"
    break;

  case 29:
#line 139 "src/parser.y"
         {
        SymbolEntry *se;
        se = identifiers->lookup((yyvsp[0].strtype));
        if(se == nullptr)
        {
            fprintf(stderr, "identifier \"%s\" is undefined\n", (char*)(yyvsp[0].strtype));
            delete [](char*)(yyvsp[0].strtype);
            assert(se != nullptr);
        }
        (yyval.exprtype) = new Id(se);
        delete [](yyvsp[0].strtype);
    }
#line 1698 "src/parser.cpp"
    break;

  case 30:
#line 154 "src/parser.y"
         {
        (yyval.exprtype) = (yyvsp[0].exprtype);
    }
#line 1706 "src/parser.cpp"
    break;

  case 31:
#line 157 "src/parser.y"
              {
        SymbolEntry *se = new ConstantSymbolEntry(TypeSystem::intType, (yyvsp[0].itype));
        (yyval.exprtype) = new Constant(se);
    }
#line 1715 "src/parser.cpp"
    break;

  case 32:
#line 164 "src/parser.y"
                 { (yyval.exprtype) = (yyvsp[0].exprtype); }
#line 1721 "src/parser.cpp"
    break;

  case 33:
#line 165 "src/parser.y"
                       {
        SymbolEntry *se;
        se = identifiers->lookup((yyvsp[-2].strtype));
        if(se == nullptr) {
            fprintf(stderr, "Function \"%s\" is undefined\n", (char*)(yyvsp[-2].strtype));
            delete [](char*)(yyvsp[-2].strtype);
            assert(se != nullptr);
        }
        (yyval.exprtype) = new FunctionCall(se, nullptr);
        delete [](yyvsp[-2].strtype);
    }
#line 1737 "src/parser.cpp"
    break;

  case 34:
#line 176 "src/parser.y"
                                   {
        SymbolEntry *se;
        se = identifiers->lookup((yyvsp[-3].strtype));
        if(se == nullptr) {
            fprintf(stderr, "Function \"%s\" is undefined\n", (char*)(yyvsp[-3].strtype));
            delete [](char*)(yyvsp[-3].strtype);
            assert(se != nullptr);
        }
        (yyval.exprtype) = new FunctionCall(se, (yyvsp[-1].FRtype));
        delete [](yyvsp[-3].strtype);
    }
#line 1753 "src/parser.cpp"
    break;

  case 35:
#line 187 "src/parser.y"
                           {
        SymbolEntry *se = new TemporarySymbolEntry(TypeSystem::intType, SymbolTable::getLabel());
        (yyval.exprtype) = new SignleExpr(se, SignleExpr::EXCLAMATION, (yyvsp[0].exprtype));
    }
#line 1762 "src/parser.cpp"
    break;

  case 36:
#line 191 "src/parser.y"
                    {
        SymbolEntry *se = new TemporarySymbolEntry(TypeSystem::intType, SymbolTable::getLabel());
        (yyval.exprtype) = new SignleExpr(se, SignleExpr::PRE_INCREMENT, (yyvsp[0].exprtype)); 
    }
#line 1771 "src/parser.cpp"
    break;

  case 37:
#line 195 "src/parser.y"
                      {
        SymbolEntry *se = new TemporarySymbolEntry(TypeSystem::intType, SymbolTable::getLabel());
        (yyval.exprtype) = new SignleExpr(se, SignleExpr::PRE_DECREMENT, (yyvsp[0].exprtype)); 
    }
#line 1780 "src/parser.cpp"
    break;

  case 38:
#line 199 "src/parser.y"
                    {
    SymbolEntry *se = new TemporarySymbolEntry(TypeSystem::intType, SymbolTable::getLabel());
    (yyval.exprtype) = new SignleExpr(se, SignleExpr::POST_INCREMENT, (yyvsp[-1].exprtype)); // 后置++操作
    }
#line 1789 "src/parser.cpp"
    break;

  case 39:
#line 203 "src/parser.y"
                     {
    SymbolEntry *se = new TemporarySymbolEntry(TypeSystem::intType, SymbolTable::getLabel());
    (yyval.exprtype) = new SignleExpr(se, SignleExpr::POST_DECREMENT, (yyvsp[-1].exprtype)); // 后置--操作
    }
#line 1798 "src/parser.cpp"
    break;

  case 40:
#line 211 "src/parser.y"
             {(yyval.exprtype) = (yyvsp[0].exprtype);}
#line 1804 "src/parser.cpp"
    break;

  case 41:
#line 214 "src/parser.y"
    {
        SymbolEntry *se = new TemporarySymbolEntry(TypeSystem::intType, SymbolTable::getLabel());
        (yyval.exprtype) = new BinaryExpr(se, BinaryExpr::MUL, (yyvsp[-2].exprtype), (yyvsp[0].exprtype));
    }
#line 1813 "src/parser.cpp"
    break;

  case 42:
#line 220 "src/parser.y"
    {
        SymbolEntry *se = new TemporarySymbolEntry(TypeSystem::intType, SymbolTable::getLabel());
        (yyval.exprtype) = new BinaryExpr(se, BinaryExpr::DIV, (yyvsp[-2].exprtype), (yyvsp[0].exprtype));
    }
#line 1822 "src/parser.cpp"
    break;

  case 43:
#line 226 "src/parser.y"
    {
        SymbolEntry *se = new TemporarySymbolEntry(TypeSystem::intType, SymbolTable::getLabel());
        (yyval.exprtype) = new BinaryExpr(se, BinaryExpr::PERC, (yyvsp[-2].exprtype), (yyvsp[0].exprtype));
    }
#line 1831 "src/parser.cpp"
    break;

  case 44:
#line 233 "src/parser.y"
           {(yyval.exprtype) = (yyvsp[0].exprtype);}
#line 1837 "src/parser.cpp"
    break;

  case 45:
#line 236 "src/parser.y"
    {
        SymbolEntry *se = new TemporarySymbolEntry(TypeSystem::intType, SymbolTable::getLabel());
        (yyval.exprtype) = new BinaryExpr(se, BinaryExpr::ADD, (yyvsp[-2].exprtype), (yyvsp[0].exprtype));
    }
#line 1846 "src/parser.cpp"
    break;

  case 46:
#line 242 "src/parser.y"
    {
        SymbolEntry *se = new TemporarySymbolEntry(TypeSystem::intType, SymbolTable::getLabel());
        (yyval.exprtype) = new BinaryExpr(se, BinaryExpr::SUB, (yyvsp[-2].exprtype), (yyvsp[0].exprtype));
    }
#line 1855 "src/parser.cpp"
    break;

  case 47:
#line 249 "src/parser.y"
                            { (yyval.exprtype) = (yyvsp[-1].exprtype); }
#line 1861 "src/parser.cpp"
    break;

  case 48:
#line 250 "src/parser.y"
           {(yyval.exprtype)=(yyvsp[0].exprtype);}
#line 1867 "src/parser.cpp"
    break;

  case 49:
#line 251 "src/parser.y"
                         {
        SymbolEntry *se = new TemporarySymbolEntry(TypeSystem::intType, SymbolTable::getLabel());
        (yyval.exprtype) = new BinaryExpr(se, BinaryExpr::LESS, (yyvsp[-2].exprtype), (yyvsp[0].exprtype));
    }
#line 1876 "src/parser.cpp"
    break;

  case 50:
#line 255 "src/parser.y"
                         {
        SymbolEntry *se = new TemporarySymbolEntry(TypeSystem::intType, SymbolTable::getLabel());
        (yyval.exprtype) = new BinaryExpr(se, BinaryExpr::MORE, (yyvsp[-2].exprtype), (yyvsp[0].exprtype));
    }
#line 1885 "src/parser.cpp"
    break;

  case 51:
#line 259 "src/parser.y"
                              {
        SymbolEntry *se = new TemporarySymbolEntry(TypeSystem::intType, SymbolTable::getLabel());
        (yyval.exprtype) = new BinaryExpr(se, BinaryExpr::LESSEQUAL, (yyvsp[-2].exprtype), (yyvsp[0].exprtype));
    }
#line 1894 "src/parser.cpp"
    break;

  case 52:
#line 263 "src/parser.y"
                              {
        SymbolEntry *se = new TemporarySymbolEntry(TypeSystem::intType, SymbolTable::getLabel());
        (yyval.exprtype) = new BinaryExpr(se, BinaryExpr::MOREEQUAL, (yyvsp[-2].exprtype), (yyvsp[0].exprtype));
    }
#line 1903 "src/parser.cpp"
    break;

  case 53:
#line 267 "src/parser.y"
                          {
        SymbolEntry *se = new TemporarySymbolEntry(TypeSystem::intType, SymbolTable::getLabel());
        (yyval.exprtype) = new BinaryExpr(se, BinaryExpr::EQUAL, (yyvsp[-2].exprtype), (yyvsp[0].exprtype));
    }
#line 1912 "src/parser.cpp"
    break;

  case 54:
#line 271 "src/parser.y"
                            {
        SymbolEntry *se = new TemporarySymbolEntry(TypeSystem::intType, SymbolTable::getLabel());
        (yyval.exprtype) = new BinaryExpr(se, BinaryExpr::NOEQUAL, (yyvsp[-2].exprtype), (yyvsp[0].exprtype));
    }
#line 1921 "src/parser.cpp"
    break;

  case 55:
#line 280 "src/parser.y"
    {
        SymbolEntry *se = new TemporarySymbolEntry(TypeSystem::intType, SymbolTable::getLabel());
        (yyval.exprtype) = new BinaryExpr(se, BinaryExpr::AND, (yyvsp[-2].exprtype), (yyvsp[0].exprtype));
    }
#line 1930 "src/parser.cpp"
    break;

  case 56:
#line 285 "src/parser.y"
           {(yyval.exprtype) = (yyvsp[0].exprtype);}
#line 1936 "src/parser.cpp"
    break;

  case 57:
#line 291 "src/parser.y"
    {
        SymbolEntry *se = new TemporarySymbolEntry(TypeSystem::intType, SymbolTable::getLabel());
        (yyval.exprtype) = new BinaryExpr(se, BinaryExpr::OR, (yyvsp[-2].exprtype), (yyvsp[0].exprtype));
    }
#line 1945 "src/parser.cpp"
    break;

  case 58:
#line 296 "src/parser.y"
            {(yyval.exprtype) = (yyvsp[0].exprtype);}
#line 1951 "src/parser.cpp"
    break;

  case 59:
#line 301 "src/parser.y"
                         { 
        SymbolEntry *se = new IdentifierSymbolEntry((yyvsp[-3].type), (yyvsp[-2].strtype), identifiers->getLevel());
        identifiers->install((yyvsp[-2].strtype), se);
        (yyval.stmttype) = new DeclStmt(new IdList({new Id(se)}, {new AssignStmt(new Id(se), (yyvsp[0].exprtype))}));
        delete [](yyvsp[-2].strtype);
    }
#line 1962 "src/parser.cpp"
    break;

  case 60:
#line 311 "src/parser.y"
          {
        (yyval.type) = TypeSystem::intType;
    }
#line 1970 "src/parser.cpp"
    break;

  case 61:
#line 314 "src/parser.y"
           {
        (yyval.type) = TypeSystem::voidType;
    }
#line 1978 "src/parser.cpp"
    break;

  case 62:
#line 317 "src/parser.y"
          {
        (yyval.type) = TypeSystem::charType;
    }
#line 1986 "src/parser.cpp"
    break;

  case 63:
#line 323 "src/parser.y"
                          {
        (yyval.stmttype) = new DeclStmt((yyvsp[-1].Idlisttype));
    }
#line 1994 "src/parser.cpp"
    break;

  case 64:
#line 329 "src/parser.y"
                                    {
        (yyval.stmttype) = new ConstDeclStmt((yyvsp[-1].CIdstype));
    }
#line 2002 "src/parser.cpp"
    break;

  case 65:
#line 335 "src/parser.y"
                  {
        std::vector<ConstId*> ConstIds;
        std::vector<AssignStmt*> Assigns;
        ConstIdList* temp = new ConstIdList(ConstIds, Assigns);
        SymbolEntry* se = new IdentifierSymbolEntry(TypeSystem::intType, (yyvsp[-2].strtype), identifiers -> getLevel());
        identifiers->install((yyvsp[-2].strtype), se);
        ConstId *t = new ConstId(se);
        temp -> CIds.push_back(t);
        temp -> Assigns.push_back(new AssignStmt(t, (yyvsp[0].exprtype)));
        (yyval.CIdstype) = temp;
        delete [](yyvsp[-2].strtype);
    }
#line 2019 "src/parser.cpp"
    break;

  case 66:
#line 348 "src/parser.y"
                                    {
        ConstIdList *temp = (yyvsp[-4].CIdstype);
        SymbolEntry *se;
        se = new IdentifierSymbolEntry(TypeSystem::intType, (yyvsp[-2].strtype), identifiers->getLevel());
        identifiers->install((yyvsp[-2].strtype), se);
        ConstId *t = new ConstId(se);
        temp -> CIds.push_back(t);
        temp -> Assigns.push_back(new AssignStmt(t, (yyvsp[0].exprtype)));
        (yyval.CIdstype) = temp;
        delete [](yyvsp[-2].strtype);
    }
#line 2035 "src/parser.cpp"
    break;

  case 67:
#line 362 "src/parser.y"
       {
        std::vector<Id*> Ids;
        std::vector<AssignStmt*> Assigns;
        IdList *temp = new IdList(Ids, Assigns);
        SymbolEntry *se;
        se = new IdentifierSymbolEntry(TypeSystem::intType, (yyvsp[0].strtype), identifiers->getLevel());
        identifiers->install((yyvsp[0].strtype), se);
        temp -> Ids.push_back(new Id(se));
        (yyval.Idlisttype) = temp;
        delete [](yyvsp[0].strtype);
    }
#line 2051 "src/parser.cpp"
    break;

  case 68:
#line 374 "src/parser.y"
                   {
        IdList *temp = (yyvsp[-2].Idlisttype);
        SymbolEntry *se;
        se = new IdentifierSymbolEntry(TypeSystem::intType, (yyvsp[0].strtype), identifiers->getLevel());
        identifiers->install((yyvsp[0].strtype), se);
        temp -> Ids.push_back(new Id(se));
        (yyval.Idlisttype) = temp;
        delete [](yyvsp[0].strtype);
    }
#line 2065 "src/parser.cpp"
    break;

  case 69:
#line 384 "src/parser.y"
                  {
        std::vector<Id*> Ids;
        std::vector<AssignStmt*> Assigns;
        IdList *temp = new IdList(Ids, Assigns);
        SymbolEntry *se;
        se = new IdentifierSymbolEntry(TypeSystem::intType, (yyvsp[-2].strtype), identifiers->getLevel());
        identifiers->install((yyvsp[-2].strtype), se);
        Id *t = new Id(se);
        temp -> Ids.push_back(t);
        temp -> Assigns.push_back(new AssignStmt(t, (yyvsp[0].exprtype)));
        (yyval.Idlisttype) = temp;
        delete [](yyvsp[-2].strtype);
    }
#line 2083 "src/parser.cpp"
    break;

  case 70:
#line 398 "src/parser.y"
                               {
        IdList *temp = (yyvsp[-4].Idlisttype);
        SymbolEntry *se;
        se = new IdentifierSymbolEntry(TypeSystem::intType, (yyvsp[-2].strtype), identifiers->getLevel());
        identifiers->install((yyvsp[-2].strtype), se);
        Id *t = new Id(se);
        temp -> Ids.push_back(t);
        temp -> Assigns.push_back(new AssignStmt(t, (yyvsp[0].exprtype)));
        (yyval.Idlisttype) = temp;
        delete [](yyvsp[-2].strtype);
    }
#line 2099 "src/parser.cpp"
    break;

  case 71:
#line 413 "src/parser.y"
    {
        std::vector<ExprNode*> t;
        t.push_back((yyvsp[0].exprtype));
        FuncRParams *temp = new FuncRParams(t);
        (yyval.FRtype) = temp;
    }
#line 2110 "src/parser.cpp"
    break;

  case 72:
#line 421 "src/parser.y"
    {
        FuncRParams *temp = (yyvsp[-2].FRtype);
        temp -> Exprs.push_back((yyvsp[0].exprtype));
        (yyval.FRtype) = temp;
    }
#line 2120 "src/parser.cpp"
    break;

  case 73:
#line 430 "src/parser.y"
    {
        std::vector<FuncFParam*> FPs;
        std::vector<AssignStmt*> Assigns;
        FuncFParams *temp = new FuncFParams(FPs, Assigns);
        SymbolEntry *se;
        se = new IdentifierSymbolEntry((yyvsp[-1].type), (yyvsp[0].strtype), identifiers->getLevel());
        identifiers->install((yyvsp[0].strtype), se);
        temp -> FPs.push_back(new FuncFParam(se));
        (yyval.Fstype) = temp;
        delete [](yyvsp[0].strtype);
    }
#line 2136 "src/parser.cpp"
    break;

  case 74:
#line 443 "src/parser.y"
    {
        FuncFParams *temp = (yyvsp[-3].Fstype);
        SymbolEntry *se;
        se = new IdentifierSymbolEntry((yyvsp[-1].type), (yyvsp[0].strtype), identifiers->getLevel());
        identifiers->install((yyvsp[0].strtype), se);
        temp -> FPs.push_back(new FuncFParam(se));
        (yyval.Fstype) = temp;
        delete [](yyvsp[0].strtype);
    }
#line 2150 "src/parser.cpp"
    break;

  case 75:
#line 454 "src/parser.y"
    {
        std::vector<FuncFParam*> FPs;
        std::vector<AssignStmt*> Assigns;
        FuncFParams *temp = new FuncFParams(FPs, Assigns);
        SymbolEntry *se;
        se = new IdentifierSymbolEntry((yyvsp[-3].type), (yyvsp[-2].strtype), identifiers->getLevel());
        identifiers->install((yyvsp[-2].strtype), se);
        FuncFParam* t = new FuncFParam(se);
        temp -> FPs.push_back(t);
        temp -> Assigns.push_back(new AssignStmt(t, (yyvsp[0].exprtype)));
        (yyval.Fstype) = temp;
        delete [](yyvsp[-2].strtype);
    }
#line 2168 "src/parser.cpp"
    break;

  case 76:
#line 469 "src/parser.y"
    {
        FuncFParams *temp = (yyvsp[-5].Fstype);
        SymbolEntry *se;
        se = new IdentifierSymbolEntry((yyvsp[-3].type), (yyvsp[-2].strtype), identifiers->getLevel());
        identifiers->install((yyvsp[-2].strtype), se);
        FuncFParam* t = new FuncFParam(se);
        temp -> FPs.push_back(t);
        temp -> Assigns.push_back(new AssignStmt(t, (yyvsp[0].exprtype)));
        (yyval.Fstype) = temp;
        delete [](yyvsp[-2].strtype);
    }
#line 2184 "src/parser.cpp"
    break;

  case 77:
#line 483 "src/parser.y"
                   {
        Type *funcType;
        funcType = new FunctionType((yyvsp[-2].type),{});
        SymbolEntry *se = new IdentifierSymbolEntry(funcType, (yyvsp[-1].strtype), identifiers->getLevel());
        identifiers->install((yyvsp[-1].strtype), se);
        identifiers = new SymbolTable(identifiers);
    }
#line 2196 "src/parser.cpp"
    break;

  case 78:
#line 492 "src/parser.y"
    {
        SymbolEntry *se;
        se = identifiers->lookup((yyvsp[-4].strtype));
        assert(se != nullptr);
        (yyval.stmttype) = new FunctionDef(se, nullptr,(yyvsp[0].stmttype));
        SymbolTable *top = identifiers;
        identifiers = identifiers->getPrev();
        delete top;
        delete [](yyvsp[-4].strtype);
    }
#line 2211 "src/parser.cpp"
    break;

  case 79:
#line 503 "src/parser.y"
                   {
        Type *funcType;
        funcType = new FunctionType((yyvsp[-2].type),{});
        SymbolEntry *se = new IdentifierSymbolEntry(funcType, (yyvsp[-1].strtype), identifiers->getLevel());
        identifiers->install((yyvsp[-1].strtype), se);
        identifiers = new SymbolTable(identifiers);
    }
#line 2223 "src/parser.cpp"
    break;

  case 80:
#line 512 "src/parser.y"
    {
        SymbolEntry *se;
        se = identifiers->lookup((yyvsp[-5].strtype));
        assert(se != nullptr);
        (yyval.stmttype) = new FunctionDef(se, (yyvsp[-2].Fstype) ,(yyvsp[0].stmttype));
        SymbolTable *top = identifiers;
        identifiers = identifiers->getPrev();
        delete top;
        delete [](yyvsp[-5].strtype);
    }
#line 2238 "src/parser.cpp"
    break;

  case 81:
#line 524 "src/parser.y"
                 { identifiers = new SymbolTable(identifiers); }
#line 2244 "src/parser.cpp"
    break;

  case 82:
#line 527 "src/parser.y"
      {
        (yyval.stmttype) = new ForStmt((yyvsp[-6].stmttype), (yyvsp[-4].exprtype), (yyvsp[-2].exprtype), (yyvsp[0].stmttype));
        SymbolTable *top = identifiers;
        identifiers = identifiers->getPrev();
        delete top;
      }
#line 2255 "src/parser.cpp"
    break;


#line 2259 "src/parser.cpp"

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
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

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
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = YY_CAST (char *, YYSTACK_ALLOC (YY_CAST (YYSIZE_T, yymsg_alloc)));
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
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

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYTERROR;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
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
                  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

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


#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif


/*-----------------------------------------------------.
| yyreturn -- parsing is finished, return the result.  |
`-----------------------------------------------------*/
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
                  yystos[+*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
#line 537 "src/parser.y"


int yyerror(char const* message)
{
    std::cerr<<message<<std::endl;
    return -1;
}
