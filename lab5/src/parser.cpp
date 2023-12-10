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

/* "%code top" blocks.  */
#line 2 "src/parser.y"

    #include <iostream>
    #include <assert.h>
    #include "parser.h"
    #include <stack>
    extern Ast ast;
    int yylex();
    int yyerror( char const * );
    std::stack<StmtNode*> While_stack;

#line 79 "src/parser.cpp"




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

#include "parser.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_ID = 3,                         /* ID  */
  YYSYMBOL_INTEGER = 4,                    /* INTEGER  */
  YYSYMBOL_IF = 5,                         /* IF  */
  YYSYMBOL_ELSE = 6,                       /* ELSE  */
  YYSYMBOL_WHILE = 7,                      /* WHILE  */
  YYSYMBOL_INT = 8,                        /* INT  */
  YYSYMBOL_VOID = 9,                       /* VOID  */
  YYSYMBOL_LPAREN = 10,                    /* LPAREN  */
  YYSYMBOL_RPAREN = 11,                    /* RPAREN  */
  YYSYMBOL_LBRACE = 12,                    /* LBRACE  */
  YYSYMBOL_RBRACE = 13,                    /* RBRACE  */
  YYSYMBOL_SEMICOLON = 14,                 /* SEMICOLON  */
  YYSYMBOL_LBRACKET = 15,                  /* LBRACKET  */
  YYSYMBOL_RBRACKET = 16,                  /* RBRACKET  */
  YYSYMBOL_COMMA = 17,                     /* COMMA  */
  YYSYMBOL_ADD = 18,                       /* ADD  */
  YYSYMBOL_SUB = 19,                       /* SUB  */
  YYSYMBOL_MUL = 20,                       /* MUL  */
  YYSYMBOL_DIV = 21,                       /* DIV  */
  YYSYMBOL_MOD = 22,                       /* MOD  */
  YYSYMBOL_OR = 23,                        /* OR  */
  YYSYMBOL_AND = 24,                       /* AND  */
  YYSYMBOL_LESS = 25,                      /* LESS  */
  YYSYMBOL_LEQ = 26,                       /* LEQ  */
  YYSYMBOL_MORE = 27,                      /* MORE  */
  YYSYMBOL_MEQ = 28,                       /* MEQ  */
  YYSYMBOL_ASSIGN = 29,                    /* ASSIGN  */
  YYSYMBOL_EQ = 30,                        /* EQ  */
  YYSYMBOL_NE = 31,                        /* NE  */
  YYSYMBOL_NOT = 32,                       /* NOT  */
  YYSYMBOL_CONST = 33,                     /* CONST  */
  YYSYMBOL_RETURN = 34,                    /* RETURN  */
  YYSYMBOL_BREAK = 35,                     /* BREAK  */
  YYSYMBOL_CONTINUE = 36,                  /* CONTINUE  */
  YYSYMBOL_THEN = 37,                      /* THEN  */
  YYSYMBOL_YYACCEPT = 38,                  /* $accept  */
  YYSYMBOL_Program = 39,                   /* Program  */
  YYSYMBOL_Type = 40,                      /* Type  */
  YYSYMBOL_Stmts = 41,                     /* Stmts  */
  YYSYMBOL_Stmt = 42,                      /* Stmt  */
  YYSYMBOL_LVal = 43,                      /* LVal  */
  YYSYMBOL_ExprStmt = 44,                  /* ExprStmt  */
  YYSYMBOL_AssignStmt = 45,                /* AssignStmt  */
  YYSYMBOL_BlockStmt = 46,                 /* BlockStmt  */
  YYSYMBOL_47_1 = 47,                      /* $@1  */
  YYSYMBOL_IfStmt = 48,                    /* IfStmt  */
  YYSYMBOL_WhileStmt = 49,                 /* WhileStmt  */
  YYSYMBOL_50_2 = 50,                      /* @2  */
  YYSYMBOL_BreakStmt = 51,                 /* BreakStmt  */
  YYSYMBOL_ContinueStmt = 52,              /* ContinueStmt  */
  YYSYMBOL_ReturnStmt = 53,                /* ReturnStmt  */
  YYSYMBOL_EmptyStmt = 54,                 /* EmptyStmt  */
  YYSYMBOL_Exp = 55,                       /* Exp  */
  YYSYMBOL_Cond = 56,                      /* Cond  */
  YYSYMBOL_AddExp = 57,                    /* AddExp  */
  YYSYMBOL_MulExp = 58,                    /* MulExp  */
  YYSYMBOL_UnaryExp = 59,                  /* UnaryExp  */
  YYSYMBOL_FuncCallExp = 60,               /* FuncCallExp  */
  YYSYMBOL_FuncCallParams = 61,            /* FuncCallParams  */
  YYSYMBOL_PrimaryExp = 62,                /* PrimaryExp  */
  YYSYMBOL_LOrExp = 63,                    /* LOrExp  */
  YYSYMBOL_LAndExp = 64,                   /* LAndExp  */
  YYSYMBOL_EqExp = 65,                     /* EqExp  */
  YYSYMBOL_RelExp = 66,                    /* RelExp  */
  YYSYMBOL_DeclStmt = 67,                  /* DeclStmt  */
  YYSYMBOL_VarDefs = 68,                   /* VarDefs  */
  YYSYMBOL_ConstDefs = 69,                 /* ConstDefs  */
  YYSYMBOL_VarDef = 70,                    /* VarDef  */
  YYSYMBOL_ConstDef = 71,                  /* ConstDef  */
  YYSYMBOL_FuncDef = 72,                   /* FuncDef  */
  YYSYMBOL_73_3 = 73,                      /* $@3  */
  YYSYMBOL_74_4 = 74,                      /* $@4  */
  YYSYMBOL_MaybeFuncDefParams = 75,        /* MaybeFuncDefParams  */
  YYSYMBOL_FuncDefParams = 76,             /* FuncDefParams  */
  YYSYMBOL_FuncDefParam = 77               /* FuncDefParam  */
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
#define YYFINAL  54
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   153

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  38
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  40
/* YYNRULES -- Number of rules.  */
#define YYNRULES  83
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  142

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   292


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
      35,    36,    37
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    56,    56,   103,   106,   113,   114,   119,   120,   121,
     122,   123,   124,   125,   126,   127,   128,   129,   132,   151,
     157,   164,   162,   179,   182,   187,   187,   201,   212,   225,
     229,   234,   237,   243,   247,   251,   252,   257,   265,   266,
     270,   274,   282,   284,   290,   296,   302,   306,   318,   333,
     335,   342,   345,   348,   355,   356,   363,   364,   371,   372,
     376,   383,   384,   388,   392,   396,   408,   419,   430,   434,
     437,   441,   445,   459,   477,   495,   498,   495,   525,   526,
     529,   533,   537,   550
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
  "\"end of file\"", "error", "\"invalid token\"", "ID", "INTEGER", "IF",
  "ELSE", "WHILE", "INT", "VOID", "LPAREN", "RPAREN", "LBRACE", "RBRACE",
  "SEMICOLON", "LBRACKET", "RBRACKET", "COMMA", "ADD", "SUB", "MUL", "DIV",
  "MOD", "OR", "AND", "LESS", "LEQ", "MORE", "MEQ", "ASSIGN", "EQ", "NE",
  "NOT", "CONST", "RETURN", "BREAK", "CONTINUE", "THEN", "$accept",
  "Program", "Type", "Stmts", "Stmt", "LVal", "ExprStmt", "AssignStmt",
  "BlockStmt", "$@1", "IfStmt", "WhileStmt", "@2", "BreakStmt",
  "ContinueStmt", "ReturnStmt", "EmptyStmt", "Exp", "Cond", "AddExp",
  "MulExp", "UnaryExp", "FuncCallExp", "FuncCallParams", "PrimaryExp",
  "LOrExp", "LAndExp", "EqExp", "RelExp", "DeclStmt", "VarDefs",
  "ConstDefs", "VarDef", "ConstDef", "FuncDef", "$@3", "$@4",
  "MaybeFuncDefParams", "FuncDefParams", "FuncDefParam", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-33)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-76)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     102,    -8,   -33,    18,    41,   -33,   -33,   121,    48,   -33,
     121,   121,   121,    28,    20,    40,    60,    88,    89,   102,
     -33,    64,   -33,   -33,   -33,   -33,   -33,   -33,   -33,   -33,
     -33,    81,    38,    51,   -33,   -33,   -33,   -33,   -33,    72,
     121,   121,   -33,    85,   -33,   102,   -33,   -33,   -33,    95,
     -33,    86,   -33,   -33,   -33,     4,    15,   -33,   -33,   121,
     -33,   121,   121,   121,   121,   121,   -33,   -33,    14,    91,
      38,    76,    79,    50,    21,   106,   -33,     8,    84,    36,
     -33,   -33,   121,   108,   -33,   116,   112,    51,    51,   -33,
     -33,   -33,   -33,   121,   102,   121,   121,   121,   121,   121,
     121,   121,   121,   -33,   -33,   121,   -33,    95,   -33,    28,
      98,   -33,   -33,   -33,   122,    79,    50,    21,    21,    38,
      38,    38,    38,   102,   -33,   -33,   126,   130,   125,   -33,
     102,   -33,   104,   -33,    28,   -33,   121,   131,   -33,   -33,
     -33,   -33
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,    18,    53,     0,     0,     3,     4,     0,    21,    31,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     2,
       5,    52,    17,     7,     8,     9,    10,    11,    12,    13,
      16,     0,    33,    35,    38,    46,    42,    14,    15,     0,
       0,     0,    52,     0,    32,     0,    43,    44,    45,     0,
      30,     0,    27,    28,     1,    72,     0,    69,     6,     0,
      19,     0,     0,     0,     0,     0,    47,    49,     0,     0,
      61,    34,    54,    56,    58,     0,    51,     0,     0,     0,
      71,    29,     0,     0,    66,     0,     0,    36,    37,    39,
      40,    41,    48,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    25,    22,     0,    67,     0,    73,    79,
      72,    68,    20,    50,    23,    55,    57,    59,    60,    62,
      63,    64,    65,     0,    74,    70,     0,     0,    78,    81,
       0,    26,    82,    76,     0,    24,     0,     0,    80,    83,
      21,    77
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -33,   -33,   -12,    99,   -15,     0,   -33,   -33,     9,   -33,
     -33,   -33,   -33,   -33,   -33,   -33,   -33,    -4,   107,   -32,
      23,    -5,   -33,   -33,   -33,   -33,    52,    49,   -11,   -33,
     -33,   -33,    65,    42,   -33,   -33,   -33,   -33,   -33,    17
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,    17,    18,    19,    20,    42,    22,    23,    24,    45,
      25,    26,   123,    27,    28,    29,    30,    31,    69,    32,
      33,    34,    35,    68,    36,    71,    72,    73,    74,    37,
      56,    79,    57,    80,    38,    83,   137,   127,   128,   129
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      21,    49,    39,    43,    58,    46,    47,    48,    70,    70,
      51,     1,     2,     3,   -75,     4,     5,     6,     7,    21,
       8,   104,     9,     1,     2,    92,    10,    11,    40,    84,
       7,    93,    85,    82,    50,    67,     5,     6,    10,    11,
      12,    13,    14,    15,    16,    21,    99,   100,   101,   102,
     106,    41,    12,   107,    52,    86,    61,    62,    89,    90,
      91,    44,    58,    70,    70,    70,    70,   119,   120,   121,
     122,    63,    64,    65,    53,     1,     2,    21,   108,   114,
      97,    98,     7,    66,    87,    88,   117,   118,    54,   113,
      10,    11,    55,    59,    21,    60,    76,   126,    78,    95,
      81,   124,    94,    96,    12,     1,     2,     3,   131,     4,
       5,     6,     7,   105,     8,   135,     9,   103,   109,   110,
      10,    11,   126,    21,     1,     2,   112,    82,   130,   132,
      21,     7,   139,   136,    12,    13,    14,    15,    16,    10,
      11,   133,   134,   140,    77,   116,   141,   115,    75,   125,
     111,   138,     0,    12
};

static const yytype_int16 yycheck[] =
{
       0,    13,    10,     7,    19,    10,    11,    12,    40,    41,
      14,     3,     4,     5,    10,     7,     8,     9,    10,    19,
      12,    13,    14,     3,     4,    11,    18,    19,    10,    14,
      10,    17,    17,    29,    14,    39,     8,     9,    18,    19,
      32,    33,    34,    35,    36,    45,    25,    26,    27,    28,
      14,    10,    32,    17,    14,    59,    18,    19,    63,    64,
      65,    13,    77,    95,    96,    97,    98,    99,   100,   101,
     102,    20,    21,    22,    14,     3,     4,    77,    82,    94,
      30,    31,    10,    11,    61,    62,    97,    98,     0,    93,
      18,    19,     3,    29,    94,    14,    11,   109,     3,    23,
      14,   105,    11,    24,    32,     3,     4,     5,   123,     7,
       8,     9,    10,    29,    12,   130,    14,    11,    10,     3,
      18,    19,   134,   123,     3,     4,    14,    29,     6,     3,
     130,    10,   136,    29,    32,    33,    34,    35,    36,    18,
      19,    11,    17,    12,    45,    96,   137,    95,    41,   107,
      85,   134,    -1,    32
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     3,     4,     5,     7,     8,     9,    10,    12,    14,
      18,    19,    32,    33,    34,    35,    36,    39,    40,    41,
      42,    43,    44,    45,    46,    48,    49,    51,    52,    53,
      54,    55,    57,    58,    59,    60,    62,    67,    72,    10,
      10,    10,    43,    55,    13,    47,    59,    59,    59,    40,
      14,    55,    14,    14,     0,     3,    68,    70,    42,    29,
      14,    18,    19,    20,    21,    22,    11,    55,    61,    56,
      57,    63,    64,    65,    66,    56,    11,    41,     3,    69,
      71,    14,    29,    73,    14,    17,    55,    58,    58,    59,
      59,    59,    11,    17,    11,    23,    24,    30,    31,    25,
      26,    27,    28,    11,    13,    29,    14,    17,    55,    10,
       3,    70,    14,    55,    42,    64,    65,    66,    66,    57,
      57,    57,    57,    50,    55,    71,    40,    75,    76,    77,
       6,    42,     3,    11,    17,    42,    29,    74,    77,    55,
      12,    46
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    38,    39,    40,    40,    41,    41,    42,    42,    42,
      42,    42,    42,    42,    42,    42,    42,    42,    43,    44,
      45,    47,    46,    48,    48,    50,    49,    51,    52,    53,
      53,    54,    54,    55,    56,    57,    57,    57,    58,    58,
      58,    58,    59,    59,    59,    59,    59,    60,    60,    61,
      61,    62,    62,    62,    63,    63,    64,    64,    65,    65,
      65,    66,    66,    66,    66,    66,    67,    67,    68,    68,
      69,    69,    70,    70,    71,    73,    74,    72,    75,    75,
      76,    76,    77,    77
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     1,     1,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     2,
       4,     0,     4,     5,     7,     0,     6,     2,     2,     3,
       2,     1,     2,     1,     1,     1,     3,     3,     1,     3,
       3,     3,     1,     2,     2,     2,     1,     3,     4,     1,
       3,     3,     1,     1,     1,     3,     1,     3,     1,     3,
       3,     1,     3,     3,     3,     3,     3,     4,     3,     1,
       3,     1,     1,     3,     3,     0,     0,     8,     1,     0,
       3,     1,     2,     4
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
  case 2: /* Program: Stmts  */
#line 56 "src/parser.y"
            {
        ast.setRoot((yyvsp[0].stmttype));
    }
#line 1250 "src/parser.cpp"
    break;

  case 3: /* Type: INT  */
#line 103 "src/parser.y"
          {
        (yyval.type) = TypeSystem::intType;
    }
#line 1258 "src/parser.cpp"
    break;

  case 4: /* Type: VOID  */
#line 106 "src/parser.y"
           {
        (yyval.type) = TypeSystem::voidType;
    }
#line 1266 "src/parser.cpp"
    break;

  case 5: /* Stmts: Stmt  */
#line 113 "src/parser.y"
           {(yyval.stmttype)=(yyvsp[0].stmttype);}
#line 1272 "src/parser.cpp"
    break;

  case 6: /* Stmts: Stmts Stmt  */
#line 114 "src/parser.y"
                {
        (yyval.stmttype) = new SeqNode((yyvsp[-1].stmttype), (yyvsp[0].stmttype));
    }
#line 1280 "src/parser.cpp"
    break;

  case 7: /* Stmt: AssignStmt  */
#line 119 "src/parser.y"
                 {(yyval.stmttype)=(yyvsp[0].stmttype);}
#line 1286 "src/parser.cpp"
    break;

  case 8: /* Stmt: BlockStmt  */
#line 120 "src/parser.y"
                {(yyval.stmttype)=(yyvsp[0].stmttype);}
#line 1292 "src/parser.cpp"
    break;

  case 9: /* Stmt: IfStmt  */
#line 121 "src/parser.y"
             {(yyval.stmttype)=(yyvsp[0].stmttype);}
#line 1298 "src/parser.cpp"
    break;

  case 10: /* Stmt: WhileStmt  */
#line 122 "src/parser.y"
                {(yyval.stmttype)=(yyvsp[0].stmttype);}
#line 1304 "src/parser.cpp"
    break;

  case 11: /* Stmt: BreakStmt  */
#line 123 "src/parser.y"
                {(yyval.stmttype)=(yyvsp[0].stmttype);}
#line 1310 "src/parser.cpp"
    break;

  case 12: /* Stmt: ContinueStmt  */
#line 124 "src/parser.y"
                   {(yyval.stmttype)=(yyvsp[0].stmttype);}
#line 1316 "src/parser.cpp"
    break;

  case 13: /* Stmt: ReturnStmt  */
#line 125 "src/parser.y"
                 {(yyval.stmttype)=(yyvsp[0].stmttype);}
#line 1322 "src/parser.cpp"
    break;

  case 14: /* Stmt: DeclStmt  */
#line 126 "src/parser.y"
               {(yyval.stmttype)=(yyvsp[0].stmttype);}
#line 1328 "src/parser.cpp"
    break;

  case 15: /* Stmt: FuncDef  */
#line 127 "src/parser.y"
              {(yyval.stmttype)=(yyvsp[0].stmttype);}
#line 1334 "src/parser.cpp"
    break;

  case 16: /* Stmt: EmptyStmt  */
#line 128 "src/parser.y"
                {(yyval.stmttype)=(yyvsp[0].stmttype);}
#line 1340 "src/parser.cpp"
    break;

  case 17: /* Stmt: ExprStmt  */
#line 129 "src/parser.y"
               {(yyval.stmttype)=(yyvsp[0].stmttype);}
#line 1346 "src/parser.cpp"
    break;

  case 18: /* LVal: ID  */
#line 132 "src/parser.y"
         {
        SymbolEntry *se;
        //identifiers为一个SymbolTable*类型的外部变量
        //寻找当前域中是否有这个标识符，并返回表项指针，若没有，则语法有问题，报错
        se = identifiers->lookup((yyvsp[0].strtype));
        if(se == nullptr)
        {
            // 如果找不到报错
            fprintf(stderr, "identifier \"%s\" is undefined\n", (char*)(yyvsp[0].strtype));
            delete [](char*)(yyvsp[0].strtype);
            assert(se != nullptr);
        }
        //new了一个ID类的结点，这个类继承自ExprNode
        (yyval.exprtype) = new Id(se);
        delete [](yyvsp[0].strtype);
    }
#line 1367 "src/parser.cpp"
    break;

  case 19: /* ExprStmt: Exp SEMICOLON  */
#line 151 "src/parser.y"
                    {
        (yyval.stmttype) = new ExprStmt((yyvsp[-1].exprtype));
    }
#line 1375 "src/parser.cpp"
    break;

  case 20: /* AssignStmt: LVal ASSIGN Exp SEMICOLON  */
#line 157 "src/parser.y"
                              {
        (yyval.stmttype) = new AssignStmt((yyvsp[-3].exprtype), (yyvsp[-1].exprtype));
    }
#line 1383 "src/parser.cpp"
    break;

  case 21: /* $@1: %empty  */
#line 164 "src/parser.y"
        {identifiers = new SymbolTable(identifiers);}
#line 1389 "src/parser.cpp"
    break;

  case 22: /* BlockStmt: LBRACE $@1 Stmts RBRACE  */
#line 166 "src/parser.y"
        {
            //每一个{}的作用域里面都是一个复合语句-此处为抽象的非终结符Stmts
            (yyval.stmttype) = new CompoundStmt((yyvsp[-1].stmttype));
            //遇到}，当前的块语句结束，删除top符号表
            SymbolTable *top = identifiers;
            identifiers = identifiers->getPrev();
            delete top;
        }
#line 1402 "src/parser.cpp"
    break;

  case 23: /* IfStmt: IF LPAREN Cond RPAREN Stmt  */
#line 179 "src/parser.y"
                                            {
        (yyval.stmttype) = new IfStmt((yyvsp[-2].exprtype), (yyvsp[0].stmttype));
    }
#line 1410 "src/parser.cpp"
    break;

  case 24: /* IfStmt: IF LPAREN Cond RPAREN Stmt ELSE Stmt  */
#line 182 "src/parser.y"
                                           {
        (yyval.stmttype) = new IfElseStmt((yyvsp[-4].exprtype), (yyvsp[-2].stmttype), (yyvsp[0].stmttype));
    }
#line 1418 "src/parser.cpp"
    break;

  case 25: /* @2: %empty  */
#line 187 "src/parser.y"
                                 {
        WhileStmt *whileNode = new WhileStmt((yyvsp[-1].exprtype));
        (yyval.stmttype) = whileNode;
        While_stack.push(whileNode);
        }
#line 1428 "src/parser.cpp"
    break;

  case 26: /* WhileStmt: WHILE LPAREN Cond RPAREN @2 Stmt  */
#line 192 "src/parser.y"
             {
        StmtNode *whileNode = (yyvsp[-1].stmttype); 
        ((WhileStmt*)whileNode)->setStmt((yyvsp[0].stmttype));
        (yyval.stmttype)=whileNode;
        While_stack.pop();
    }
#line 1439 "src/parser.cpp"
    break;

  case 27: /* BreakStmt: BREAK SEMICOLON  */
#line 201 "src/parser.y"
                      {
    	if(!While_stack.empty()){
    	   (yyval.stmttype) = new BreakStmt(While_stack.top());
    	}
        else{
           (yyval.stmttype) = new BreakStmt(nullptr);
        }
    }
#line 1452 "src/parser.cpp"
    break;

  case 28: /* ContinueStmt: CONTINUE SEMICOLON  */
#line 212 "src/parser.y"
                         {
    	if(!While_stack.empty()){
    	   (yyval.stmttype) = new ContinueStmt(While_stack.top());
    	}
        else{	
        	fprintf(stderr, "continue not in loop\n");
        	assert(While_stack.empty()==false);
           (yyval.stmttype) = new ContinueStmt(nullptr);
        }
    }
#line 1467 "src/parser.cpp"
    break;

  case 29: /* ReturnStmt: RETURN Exp SEMICOLON  */
#line 225 "src/parser.y"
                        {
        (yyval.stmttype) = new ReturnStmt((yyvsp[-1].exprtype));
    }
#line 1475 "src/parser.cpp"
    break;

  case 30: /* ReturnStmt: RETURN SEMICOLON  */
#line 229 "src/parser.y"
                    {
        (yyval.stmttype) = new ReturnStmt();
    }
#line 1483 "src/parser.cpp"
    break;

  case 31: /* EmptyStmt: SEMICOLON  */
#line 234 "src/parser.y"
                {
        (yyval.stmttype) = new EmptyStmt();
    }
#line 1491 "src/parser.cpp"
    break;

  case 32: /* EmptyStmt: LBRACE RBRACE  */
#line 237 "src/parser.y"
                    {
        (yyval.stmttype)=new EmptyStmt();
    }
#line 1499 "src/parser.cpp"
    break;

  case 33: /* Exp: AddExp  */
#line 243 "src/parser.y"
           {(yyval.exprtype) = (yyvsp[0].exprtype);}
#line 1505 "src/parser.cpp"
    break;

  case 34: /* Cond: LOrExp  */
#line 247 "src/parser.y"
           {(yyval.exprtype) = (yyvsp[0].exprtype);}
#line 1511 "src/parser.cpp"
    break;

  case 35: /* AddExp: MulExp  */
#line 251 "src/parser.y"
             {(yyval.exprtype) = (yyvsp[0].exprtype);}
#line 1517 "src/parser.cpp"
    break;

  case 36: /* AddExp: AddExp ADD MulExp  */
#line 253 "src/parser.y"
    {
        SymbolEntry *se = new TemporarySymbolEntry(TypeSystem::intType, SymbolTable::getLabel());
        (yyval.exprtype) = new BinaryExpr(se, BinaryExpr::ADD, (yyvsp[-2].exprtype), (yyvsp[0].exprtype));
    }
#line 1526 "src/parser.cpp"
    break;

  case 37: /* AddExp: AddExp SUB MulExp  */
#line 258 "src/parser.y"
    {
        SymbolEntry *se = new TemporarySymbolEntry(TypeSystem::intType, SymbolTable::getLabel());
        (yyval.exprtype) = new BinaryExpr(se, BinaryExpr::SUB, (yyvsp[-2].exprtype), (yyvsp[0].exprtype));
    }
#line 1535 "src/parser.cpp"
    break;

  case 38: /* MulExp: UnaryExp  */
#line 265 "src/parser.y"
               {(yyval.exprtype) = (yyvsp[0].exprtype);}
#line 1541 "src/parser.cpp"
    break;

  case 39: /* MulExp: MulExp MUL UnaryExp  */
#line 266 "src/parser.y"
                          {
        SymbolEntry* se = new TemporarySymbolEntry(TypeSystem::intType, SymbolTable::getLabel());
        (yyval.exprtype) = new BinaryExpr(se, BinaryExpr::MUL, (yyvsp[-2].exprtype), (yyvsp[0].exprtype));
    }
#line 1550 "src/parser.cpp"
    break;

  case 40: /* MulExp: MulExp DIV UnaryExp  */
#line 270 "src/parser.y"
                          {
        SymbolEntry* se = new TemporarySymbolEntry(TypeSystem::intType, SymbolTable::getLabel());
        (yyval.exprtype) = new BinaryExpr(se, BinaryExpr::DIV, (yyvsp[-2].exprtype), (yyvsp[0].exprtype));
    }
#line 1559 "src/parser.cpp"
    break;

  case 41: /* MulExp: MulExp MOD UnaryExp  */
#line 274 "src/parser.y"
                          {
        SymbolEntry* se = new TemporarySymbolEntry(TypeSystem::intType, SymbolTable::getLabel());
        (yyval.exprtype) = new BinaryExpr(se, BinaryExpr::MOD, (yyvsp[-2].exprtype), (yyvsp[0].exprtype));
    }
#line 1568 "src/parser.cpp"
    break;

  case 42: /* UnaryExp: PrimaryExp  */
#line 282 "src/parser.y"
               {(yyval.exprtype) = (yyvsp[0].exprtype);}
#line 1574 "src/parser.cpp"
    break;

  case 43: /* UnaryExp: ADD UnaryExp  */
#line 285 "src/parser.y"
    {
        SymbolEntry *se = new TemporarySymbolEntry(TypeSystem::intType, SymbolTable::getLabel());
        (yyval.exprtype) = new UnaryExpr(se, UnaryExpr::ADD, (yyvsp[0].exprtype));
    }
#line 1583 "src/parser.cpp"
    break;

  case 44: /* UnaryExp: SUB UnaryExp  */
#line 291 "src/parser.y"
    {
        SymbolEntry *se = new TemporarySymbolEntry(TypeSystem::intType, SymbolTable::getLabel());
        (yyval.exprtype) = new UnaryExpr(se, UnaryExpr::SUB, (yyvsp[0].exprtype));
    }
#line 1592 "src/parser.cpp"
    break;

  case 45: /* UnaryExp: NOT UnaryExp  */
#line 297 "src/parser.y"
    {
        SymbolEntry *se = new TemporarySymbolEntry(TypeSystem::intType, SymbolTable::getLabel());
        (yyval.exprtype) = new UnaryExpr(se, UnaryExpr::NOT, (yyvsp[0].exprtype));
    }
#line 1601 "src/parser.cpp"
    break;

  case 46: /* UnaryExp: FuncCallExp  */
#line 302 "src/parser.y"
                {(yyval.exprtype) = (yyvsp[0].exprtype);}
#line 1607 "src/parser.cpp"
    break;

  case 47: /* FuncCallExp: ID LPAREN RPAREN  */
#line 306 "src/parser.y"
                       {   // 没有参数
        SymbolEntry* se;
        se = identifiers->lookup((yyvsp[-2].strtype));
        //函数调用前必须要有声明/定义
        if(se == nullptr)
        {
            fprintf(stderr, "function \"%s\" is undefined\n", (char*)(yyvsp[-2].strtype));
            delete [](char*)(yyvsp[-2].strtype);
            assert(se != nullptr);
        }
        (yyval.exprtype) = new FuncCallExpr(se);
    }
#line 1624 "src/parser.cpp"
    break;

  case 48: /* FuncCallExp: ID LPAREN FuncCallParams RPAREN  */
#line 318 "src/parser.y"
                                      {   
        SymbolEntry* se;   
        se = identifiers->lookup((yyvsp[-3].strtype));
        if(se == nullptr)
        {
            fprintf(stderr, "function \"%s\" is undefined\n", (char*)(yyvsp[-3].strtype));
            delete [](char*)(yyvsp[-3].strtype);
            assert(se != nullptr);
        }
        (yyval.exprtype) = new FuncCallExpr(se, (yyvsp[-1].exprtype));
    }
#line 1640 "src/parser.cpp"
    break;

  case 49: /* FuncCallParams: Exp  */
#line 333 "src/parser.y"
          {(yyval.exprtype) = (yyvsp[0].exprtype);}
#line 1646 "src/parser.cpp"
    break;

  case 50: /* FuncCallParams: FuncCallParams COMMA Exp  */
#line 335 "src/parser.y"
                               {
        (yyval.exprtype) = (yyvsp[-2].exprtype);
        (yyval.exprtype)->setNext((yyvsp[0].exprtype));
    }
#line 1655 "src/parser.cpp"
    break;

  case 51: /* PrimaryExp: LPAREN Exp RPAREN  */
#line 342 "src/parser.y"
                        {
        (yyval.exprtype) = (yyvsp[-1].exprtype);
    }
#line 1663 "src/parser.cpp"
    break;

  case 52: /* PrimaryExp: LVal  */
#line 345 "src/parser.y"
           {
        (yyval.exprtype) = (yyvsp[0].exprtype);
    }
#line 1671 "src/parser.cpp"
    break;

  case 53: /* PrimaryExp: INTEGER  */
#line 348 "src/parser.y"
              {
        SymbolEntry* se = new ConstantSymbolEntry(TypeSystem::intType, (yyvsp[0].itype));
        (yyval.exprtype) = new Constant(se);
    }
#line 1680 "src/parser.cpp"
    break;

  case 54: /* LOrExp: LAndExp  */
#line 355 "src/parser.y"
              {(yyval.exprtype) = (yyvsp[0].exprtype);}
#line 1686 "src/parser.cpp"
    break;

  case 55: /* LOrExp: LOrExp OR LAndExp  */
#line 356 "src/parser.y"
                        {
        SymbolEntry* se = new TemporarySymbolEntry(TypeSystem::intType, SymbolTable::getLabel());
        (yyval.exprtype) = new BinaryExpr(se, BinaryExpr::OR, (yyvsp[-2].exprtype), (yyvsp[0].exprtype));
    }
#line 1695 "src/parser.cpp"
    break;

  case 56: /* LAndExp: EqExp  */
#line 363 "src/parser.y"
            {(yyval.exprtype) = (yyvsp[0].exprtype);}
#line 1701 "src/parser.cpp"
    break;

  case 57: /* LAndExp: LAndExp AND EqExp  */
#line 364 "src/parser.y"
                        {
        SymbolEntry* se = new TemporarySymbolEntry(TypeSystem::intType, SymbolTable::getLabel());
        (yyval.exprtype) = new BinaryExpr(se, BinaryExpr::AND, (yyvsp[-2].exprtype), (yyvsp[0].exprtype));
    }
#line 1710 "src/parser.cpp"
    break;

  case 58: /* EqExp: RelExp  */
#line 371 "src/parser.y"
             {(yyval.exprtype) = (yyvsp[0].exprtype);}
#line 1716 "src/parser.cpp"
    break;

  case 59: /* EqExp: EqExp EQ RelExp  */
#line 372 "src/parser.y"
                      {
        SymbolEntry* se = new TemporarySymbolEntry(TypeSystem::intType, SymbolTable::getLabel());
        (yyval.exprtype) = new BinaryExpr(se, BinaryExpr::EQ, (yyvsp[-2].exprtype), (yyvsp[0].exprtype));
    }
#line 1725 "src/parser.cpp"
    break;

  case 60: /* EqExp: EqExp NE RelExp  */
#line 376 "src/parser.y"
                      {
        SymbolEntry* se = new TemporarySymbolEntry(TypeSystem::intType, SymbolTable::getLabel());
        (yyval.exprtype) = new BinaryExpr(se, BinaryExpr::NE, (yyvsp[-2].exprtype), (yyvsp[0].exprtype));
    }
#line 1734 "src/parser.cpp"
    break;

  case 61: /* RelExp: AddExp  */
#line 383 "src/parser.y"
             {(yyval.exprtype) = (yyvsp[0].exprtype);}
#line 1740 "src/parser.cpp"
    break;

  case 62: /* RelExp: RelExp LESS AddExp  */
#line 384 "src/parser.y"
                         {
        SymbolEntry* se = new TemporarySymbolEntry(TypeSystem::intType, SymbolTable::getLabel());
        (yyval.exprtype) = new BinaryExpr(se, BinaryExpr::LESS, (yyvsp[-2].exprtype), (yyvsp[0].exprtype));
    }
#line 1749 "src/parser.cpp"
    break;

  case 63: /* RelExp: RelExp LEQ AddExp  */
#line 388 "src/parser.y"
                        {
        SymbolEntry* se = new TemporarySymbolEntry(TypeSystem::intType, SymbolTable::getLabel());
        (yyval.exprtype) = new BinaryExpr(se, BinaryExpr::LEQ, (yyvsp[-2].exprtype), (yyvsp[0].exprtype));
    }
#line 1758 "src/parser.cpp"
    break;

  case 64: /* RelExp: RelExp MORE AddExp  */
#line 392 "src/parser.y"
                         {
        SymbolEntry* se = new TemporarySymbolEntry(TypeSystem::intType, SymbolTable::getLabel());
        (yyval.exprtype) = new BinaryExpr(se, BinaryExpr::MORE, (yyvsp[-2].exprtype), (yyvsp[0].exprtype));
    }
#line 1767 "src/parser.cpp"
    break;

  case 65: /* RelExp: RelExp MEQ AddExp  */
#line 396 "src/parser.y"
                        {
        SymbolEntry* se = new TemporarySymbolEntry(TypeSystem::intType, SymbolTable::getLabel());
        (yyval.exprtype) = new BinaryExpr(se, BinaryExpr::MEQ, (yyvsp[-2].exprtype), (yyvsp[0].exprtype));
    }
#line 1776 "src/parser.cpp"
    break;

  case 66: /* DeclStmt: Type VarDefs SEMICOLON  */
#line 408 "src/parser.y"
                           {
        //变量的类型不能为void
        if((yyvsp[-2].type)==TypeSystem::voidType)
        {
            fprintf(stderr, "variable type can't be void type\n");   
            assert((yyvsp[-2].type)!=TypeSystem::voidType);
        }
        (yyval.stmttype) = (yyvsp[-1].stmttype);
    }
#line 1790 "src/parser.cpp"
    break;

  case 67: /* DeclStmt: CONST Type ConstDefs SEMICOLON  */
#line 419 "src/parser.y"
                                   {
        //常量的类型不能为void
        if((yyvsp[-2].type)==TypeSystem::voidType)
        {
            fprintf(stderr, "constant variable type can't be void type\n");   
            assert((yyvsp[-2].type)!=TypeSystem::voidType);
        }
        (yyval.stmttype) = (yyvsp[-1].stmttype);
    }
#line 1804 "src/parser.cpp"
    break;

  case 68: /* VarDefs: VarDefs COMMA VarDef  */
#line 430 "src/parser.y"
                           {
        (yyval.stmttype) = (yyvsp[-2].stmttype);
        (yyvsp[-2].stmttype)->setNext((yyvsp[0].stmttype)); //参数表的参数通过指针串起来
    }
#line 1813 "src/parser.cpp"
    break;

  case 69: /* VarDefs: VarDef  */
#line 434 "src/parser.y"
             {(yyval.stmttype) = (yyvsp[0].stmttype);}
#line 1819 "src/parser.cpp"
    break;

  case 70: /* ConstDefs: ConstDefs COMMA ConstDef  */
#line 437 "src/parser.y"
                               {
        (yyval.stmttype) = (yyvsp[-2].stmttype);
        (yyvsp[-2].stmttype)->setNext((yyvsp[0].stmttype));
    }
#line 1828 "src/parser.cpp"
    break;

  case 71: /* ConstDefs: ConstDef  */
#line 441 "src/parser.y"
               {(yyval.stmttype) = (yyvsp[0].stmttype);}
#line 1834 "src/parser.cpp"
    break;

  case 72: /* VarDef: ID  */
#line 445 "src/parser.y"
         {   //新创建标识符，和前面的LVAL不同
        //检查变量是否重复声明
        if(identifiers->lookup((yyvsp[0].strtype)))
        {
            //在当前作用域能够找到这个标识符名字，表示重复定义
            fprintf(stderr, "identifier \"%s\" is defined twice\n", (char*)(yyvsp[0].strtype));
            assert(identifiers->lookup((yyvsp[0].strtype))==nullptr);
        }
        SymbolEntry* se;
        se = new IdentifierSymbolEntry(TypeSystem::intType, (yyvsp[0].strtype), identifiers->getLevel());
        identifiers->install((yyvsp[0].strtype), se);
        (yyval.stmttype) = new DeclStmt(new Id(se));
        delete [](yyvsp[0].strtype);
    }
#line 1853 "src/parser.cpp"
    break;

  case 73: /* VarDef: ID ASSIGN Exp  */
#line 459 "src/parser.y"
                    {
        //检查变量是否重复声明
        if(identifiers->lookup((yyvsp[-2].strtype)))
        {
            //在当前作用域能够找到这个标识符名字，表示重复定义
            fprintf(stderr, "identifier \"%s\" is defined twice\n", (char*)(yyvsp[-2].strtype));
            assert(identifiers->lookup((yyvsp[-2].strtype))==nullptr);
        }
        SymbolEntry* se;
        se = new IdentifierSymbolEntry(TypeSystem::intType, (yyvsp[-2].strtype), identifiers->getLevel());
        identifiers->install((yyvsp[-2].strtype), se);
        (yyval.stmttype) = new DeclStmt(new Id(se), (yyvsp[0].exprtype));
        delete [](yyvsp[-2].strtype);
    }
#line 1872 "src/parser.cpp"
    break;

  case 74: /* ConstDef: ID ASSIGN Exp  */
#line 477 "src/parser.y"
                    {
        //检查常量是否重复声明
        if(identifiers->lookup((yyvsp[-2].strtype)))
        {
            //在当前作用域能够找到这个标识符名字，表示重复定义
            fprintf(stderr, "constant identifier \"%s\" is defined twice\n", (char*)(yyvsp[-2].strtype));
            assert(identifiers->lookup((yyvsp[-2].strtype))==nullptr);
        }
        SymbolEntry* se;
        se = new IdentifierSymbolEntry(TypeSystem::constIntType, (yyvsp[-2].strtype), identifiers->getLevel());
        identifiers->install((yyvsp[-2].strtype), se);
        (yyval.stmttype) = new DeclStmt(new Id(se), (yyvsp[0].exprtype));
        delete [](yyvsp[-2].strtype);
    }
#line 1891 "src/parser.cpp"
    break;

  case 75: /* $@3: %empty  */
#line 495 "src/parser.y"
            {
        identifiers = new SymbolTable(identifiers);
    }
#line 1899 "src/parser.cpp"
    break;

  case 76: /* $@4: %empty  */
#line 498 "src/parser.y"
                                     {
        Type* funcType;
        std::vector<Type*> vec;
        std::vector<SymbolEntry*> vec1;
        DeclStmt* temp = (DeclStmt*)(yyvsp[-1].stmttype);
        while(temp){
            vec.push_back(temp->getId()->getSymPtr()->getType());
            vec1.push_back(temp->getId()->getSymPtr());
            temp = (DeclStmt*)(temp->getNext());
        }
        funcType = new FunctionType((yyvsp[-5].type), vec, vec1);
        SymbolEntry* se = new IdentifierSymbolEntry(funcType, (yyvsp[-4].strtype), identifiers->getPrev()->getLevel());
        identifiers->getPrev()->install((yyvsp[-4].strtype), se);
    }
#line 1918 "src/parser.cpp"
    break;

  case 77: /* FuncDef: Type ID $@3 LPAREN MaybeFuncDefParams RPAREN $@4 BlockStmt  */
#line 512 "src/parser.y"
              {
        SymbolEntry* se;
        se = identifiers->lookup((yyvsp[-6].strtype));
        assert(se != nullptr);
        (yyval.stmttype) = new FunctionDef(se, (yyvsp[0].stmttype), (DeclStmt*)(yyvsp[-3].stmttype));
        SymbolTable* top = identifiers;
        identifiers = identifiers->getPrev();
        delete top;
        delete [](yyvsp[-6].strtype);
    }
#line 1933 "src/parser.cpp"
    break;

  case 78: /* MaybeFuncDefParams: FuncDefParams  */
#line 525 "src/parser.y"
                    {(yyval.stmttype) = (yyvsp[0].stmttype);}
#line 1939 "src/parser.cpp"
    break;

  case 79: /* MaybeFuncDefParams: %empty  */
#line 526 "src/parser.y"
             {(yyval.stmttype) = nullptr;}
#line 1945 "src/parser.cpp"
    break;

  case 80: /* FuncDefParams: FuncDefParams COMMA FuncDefParam  */
#line 529 "src/parser.y"
                                       {
        (yyval.stmttype) = (yyvsp[-2].stmttype);
        (yyval.stmttype)->setNext((yyvsp[0].stmttype));
    }
#line 1954 "src/parser.cpp"
    break;

  case 81: /* FuncDefParams: FuncDefParam  */
#line 533 "src/parser.y"
                   {(yyval.stmttype) = (yyvsp[0].stmttype);}
#line 1960 "src/parser.cpp"
    break;

  case 82: /* FuncDefParam: Type ID  */
#line 537 "src/parser.y"
              {
        if(identifiers->lookup((yyvsp[0].strtype)))
        {
            //在当前作用域能够找到这个标识符名字，表示重复定义
            fprintf(stderr, "function parameter \"%s\" is defined twice\n", (char*)(yyvsp[0].strtype));
            assert(identifiers->lookup((yyvsp[0].strtype))==nullptr);
        }
        SymbolEntry* se;
        se = new IdentifierSymbolEntry((yyvsp[-1].type), (yyvsp[0].strtype), identifiers->getLevel());
        identifiers->install((yyvsp[0].strtype), se);
        (yyval.stmttype) = new DeclStmt(new Id(se));
        delete [](yyvsp[0].strtype);    
    }
#line 1978 "src/parser.cpp"
    break;

  case 83: /* FuncDefParam: Type ID ASSIGN Exp  */
#line 550 "src/parser.y"
                         {
        if(identifiers->lookup((yyvsp[-2].strtype)))
        {
            //在当前作用域能够找到这个标识符名字，表示重复定义
            fprintf(stderr, "function parameter \"%s\" is defined twice\n", (char*)(yyvsp[-2].strtype));
            assert(identifiers->lookup((yyvsp[-2].strtype))==nullptr);
        }
        SymbolEntry *se;
        se = new IdentifierSymbolEntry((yyvsp[-3].type), (yyvsp[-2].strtype), identifiers->getLevel());
        identifiers->install((yyvsp[-2].strtype), se);
        (yyval.stmttype) = new DeclStmt(new Id(se),(yyvsp[0].exprtype));
        delete [](yyvsp[-2].strtype);
    }
#line 1996 "src/parser.cpp"
    break;


#line 2000 "src/parser.cpp"

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

#line 564 "src/parser.y"


int yyerror(char const* message)
{
    std::cerr<<message<<std::endl;
    return -1;
}
