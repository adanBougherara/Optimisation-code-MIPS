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
#define YYPURE 1

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1


/* Substitute the variable and function names.  */
#define yyparse         asm_mipsparse
#define yylex           asm_mipslex
#define yyerror         asm_mipserror
#define yydebug         asm_mipsdebug
#define yynerrs         asm_mipsnerrs

/* First part of user prologue.  */
#line 10 "asm_mips.yac"

#include <iostream>
#include <Program.h>
#include <Directive.h>
#include <Label.h>
#include <stdlib.h>
#include <stdio.h>
extern "C" {
#include "utl200.h"
#include "asm200.h"
}
#include <asm_mipsyac.h>
#include <map>
#include <sstream>

#undef  yylex
#define yylex         asm_mipslex
#define yyrestart     asm_mipsrestart
#define yyin          asm_mipsin

extern "C" {extern int            yylex     (YYSTYPE *);}

extern void           yyrestart ();
extern int            yyparse   ();
extern FILE           *yyin       ;

Program prog ;


map<int,string> strmap ;
static int strmap_id ;

void programparse(string file) {
	// ###------------------------------------------------------### 
	//    initialize global and static variables			
	// ###------------------------------------------------------### 

        // std::cout << "Starting parsing" << std::endl;
	
	strmap_id = 0;

	yyin = fopen(file.c_str(), "r") ;
	yyparse() ;
	// std::cout << "Parsing done" << std::endl;
}


static void yyerror (char * str)
	{ std::cout << "yyerror at line " << ASM_LINENO << " : " << str <<std::endl ;	}


#line 127 "y.tab.c"

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
#ifndef YY_ASM_MIPS_Y_TAB_H_INCLUDED
# define YY_ASM_MIPS_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int asm_mipsdebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    _ALIGN_ = 258,
    _ASCII_ = 259,
    _ASCIIZ_ = 260,
    _BYTE_ = 261,
    _COMM_ = 262,
    _END_ = 263,
    _ENT_ = 264,
    _EQU_ = 265,
    _EXTERN_ = 266,
    _GLOBAL_ = 267,
    _LCOMM_ = 268,
    _NOREORDER_ = 269,
    _REORDER_ = 270,
    _SECTION_ = 271,
    _SET_ = 272,
    _SKIP_ = 273,
    _SPACE_ = 274,
    _WORD_ = 275,
    ARegister = 276,
    Ampersand = 277,
    Bar = 278,
    CarriageReturn = 279,
    Circomflex = 280,
    Codop_hint_mem = 281,
    Codop_label = 282,
    Codop_n = 283,
    Codop_od_rs = 284,
    Codop_rd = 285,
    Codop_rd_si16 = 286,
    Codop_rd_rs = 287,
    Codop_rd_rs_rt = 288,
    Codop_rd_rt_sham = 289,
    Codop_rd_rt_rs = 290,
    Codop_rd_rs_si16 = 291,
    Codop_rd_rs_ui16 = 292,
    Codop_rd_mem = 293,
    Codop_rs = 294,
    Codop_rs_label = 295,
    Codop_rs_rt = 296,
    Codop_rs_rt_label = 297,
    Codop_rs_si16 = 298,
    Codop_rt_cop0r = 299,
    Codop_rt_cop2r = 300,
    Codop_rt_mem = 301,
    Codop_ui20 = 302,
    Colon = 303,
    Comma = 304,
    Cop0Register = 305,
    DoubleGreat = 306,
    DoubleLess = 307,
    Identifier = 308,
    IntegerRegister = 309,
    LeftParen = 310,
    Litteral = 311,
    Macro_label = 312,
    Macro_n = 313,
    Macro_rd_i32 = 314,
    Macro_rd_rs = 315,
    Macro_rd_rt = 316,
    Macro_rd_label = 317,
    Macro_rs_label = 318,
    Minus = 319,
    Plus = 320,
    Register = 321,
    RightParen = 322,
    Slash = 323,
    Star = 324,
    String = 325,
    String2 = 326,
    GCC_operator = 327,
    Tilda = 328,
    Arobase = 329
  };
#endif
/* Tokens.  */
#define _ALIGN_ 258
#define _ASCII_ 259
#define _ASCIIZ_ 260
#define _BYTE_ 261
#define _COMM_ 262
#define _END_ 263
#define _ENT_ 264
#define _EQU_ 265
#define _EXTERN_ 266
#define _GLOBAL_ 267
#define _LCOMM_ 268
#define _NOREORDER_ 269
#define _REORDER_ 270
#define _SECTION_ 271
#define _SET_ 272
#define _SKIP_ 273
#define _SPACE_ 274
#define _WORD_ 275
#define ARegister 276
#define Ampersand 277
#define Bar 278
#define CarriageReturn 279
#define Circomflex 280
#define Codop_hint_mem 281
#define Codop_label 282
#define Codop_n 283
#define Codop_od_rs 284
#define Codop_rd 285
#define Codop_rd_si16 286
#define Codop_rd_rs 287
#define Codop_rd_rs_rt 288
#define Codop_rd_rt_sham 289
#define Codop_rd_rt_rs 290
#define Codop_rd_rs_si16 291
#define Codop_rd_rs_ui16 292
#define Codop_rd_mem 293
#define Codop_rs 294
#define Codop_rs_label 295
#define Codop_rs_rt 296
#define Codop_rs_rt_label 297
#define Codop_rs_si16 298
#define Codop_rt_cop0r 299
#define Codop_rt_cop2r 300
#define Codop_rt_mem 301
#define Codop_ui20 302
#define Colon 303
#define Comma 304
#define Cop0Register 305
#define DoubleGreat 306
#define DoubleLess 307
#define Identifier 308
#define IntegerRegister 309
#define LeftParen 310
#define Litteral 311
#define Macro_label 312
#define Macro_n 313
#define Macro_rd_i32 314
#define Macro_rd_rs 315
#define Macro_rd_rt 316
#define Macro_rd_label 317
#define Macro_rs_label 318
#define Minus 319
#define Plus 320
#define Register 321
#define RightParen 322
#define Slash 323
#define Star 324
#define String 325
#define String2 326
#define GCC_operator 327
#define Tilda 328
#define Arobase 329

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 63 "asm_mips.yac"

  struct utchn  *pchn    ;
  unsigned int   uval    ;
  char          *text    ;
  

#line 334 "y.tab.c"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif



int asm_mipsparse (void);

#endif /* !YY_ASM_MIPS_Y_TAB_H_INCLUDED  */



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
#define YYFINAL  29
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   371

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  75
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  84
/* YYNRULES -- Number of rules.  */
#define YYNRULES  179
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  323

#define YYUNDEFTOK  2
#define YYMAXUTOK   329


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
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   178,   178,   180,   185,   186,   192,   201,   202,   207,
     210,   212,   217,   221,   225,   236,   240,   251,   255,   260,
     265,   266,   270,   276,   283,   284,   289,   300,   302,   314,
     318,   323,   328,   333,   341,   352,   359,   366,   376,   385,
     404,   417,   431,   447,   457,   472,   486,   508,   530,   551,
     573,   585,   600,   616,   645,   662,   679,   696,   715,   734,
     753,   768,   790,   815,   848,   864,   884,   904,   921,   938,
     956,   975,   992,  1010,  1023,  1032,  1037,  1039,  1041,  1043,
    1048,  1050,  1055,  1057,  1062,  1069,  1073,  1075,  1077,  1082,
    1083,  1084,  1085,  1086,  1087,  1088,  1092,  1104,  1114,  1134,
    1157,  1171,  1187,  1204,  1205,  1206,  1207,  1208,  1209,  1210,
    1211,  1215,  1224,  1233,  1239,  1250,  1263,  1272,  1281,  1287,
    1288,  1289,  1290,  1291,  1292,  1293,  1294,  1295,  1296,  1297,
    1298,  1299,  1300,  1301,  1302,  1303,  1304,  1305,  1306,  1307,
    1308,  1312,  1314,  1319,  1321,  1330,  1335,  1342,  1345,  1348,
    1356,  1366,  1370,  1377,  1384,  1391,  1398,  1405,  1412,  1421,
    1423,  1428,  1430,  1433,  1439,  1440,  1441,  1442,  1443,  1444,
    1445,  1446,  1448,  1452,  1453,  1454,  1458,  1463,  1474,  1478
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "_ALIGN_", "_ASCII_", "_ASCIIZ_",
  "_BYTE_", "_COMM_", "_END_", "_ENT_", "_EQU_", "_EXTERN_", "_GLOBAL_",
  "_LCOMM_", "_NOREORDER_", "_REORDER_", "_SECTION_", "_SET_", "_SKIP_",
  "_SPACE_", "_WORD_", "ARegister", "Ampersand", "Bar", "CarriageReturn",
  "Circomflex", "Codop_hint_mem", "Codop_label", "Codop_n", "Codop_od_rs",
  "Codop_rd", "Codop_rd_si16", "Codop_rd_rs", "Codop_rd_rs_rt",
  "Codop_rd_rt_sham", "Codop_rd_rt_rs", "Codop_rd_rs_si16",
  "Codop_rd_rs_ui16", "Codop_rd_mem", "Codop_rs", "Codop_rs_label",
  "Codop_rs_rt", "Codop_rs_rt_label", "Codop_rs_si16", "Codop_rt_cop0r",
  "Codop_rt_cop2r", "Codop_rt_mem", "Codop_ui20", "Colon", "Comma",
  "Cop0Register", "DoubleGreat", "DoubleLess", "Identifier",
  "IntegerRegister", "LeftParen", "Litteral", "Macro_label", "Macro_n",
  "Macro_rd_i32", "Macro_rd_rs", "Macro_rd_rt", "Macro_rd_label",
  "Macro_rs_label", "Minus", "Plus", "Register", "RightParen", "Slash",
  "Star", "String", "String2", "GCC_operator", "Tilda", "Arobase",
  "$accept", "adding_operator", ".a_label.", "align_directive",
  "..an_instruction..", "an_instruction", "assembly_file",
  "assembly_instructions", "byte_immediate_list", "...byte_immediate..",
  "CarriageReturn_ERR", "cop0_reg", "cop2_reg", "effective_instruction",
  "end_directive", "ent_directive", ".Identifier.", "equ_directive",
  "expr..addop__expr..", "expression", "expr__logop__expr..logop__expr..",
  "expr__mulop__expr..mulop__expr..", "expr__shfop__expr",
  "extern_directive", "format_hint_mem", "format_label", "format_n",
  "format_od_rs", "format_rd", "format_rd_mem", "format_rd_si16",
  "format_rd_rs", "format_rd_rs_rt", "format_rd_rs_si16",
  "format_rd_rs_ui16", "format_rd_rt_rs", "format_rd_rt_sham", "format_rs",
  "format_rs_label", "format_rs_rt", "format_rs_rt_label",
  "format_rs_si16", "format_rt_cop0r", "format_rt_cop2r", "format_rt_mem",
  "format_ui20", "global_directive", "signed_16_bit_immediate",
  "immediate", "integer_register", "label", "labelable_directive",
  "logic_operator", "macro_instruction", "macro_label", "macro_n",
  "macro_rd_i32", "macro_rd_label", "macro_rd_rs", "macro_rd_rt",
  "macro_rs_label", "memory_alloc_directive", "memory_ascii_alloc",
  "memory_asciiz_alloc", "memory_byte_alloc", "memory_lcomm_alloc",
  "memory_comm_alloc", "memory_space_alloc", "memory_skip_alloc",
  "memory_word_alloc", "mips_instruction", "mul_div_operator", "primary",
  "section_specification_directive", "set_directive", "other_directive",
  "_String", "shift_operator", "term", "unlabeled_directive",
  ".unlabeled_instruction.", "unsigned_16_bit_immediate",
  "word_immediate_list", "...word_immediate..", YY_NULLPTR
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
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329
};
# endif

#define YYPACT_NINF (-223)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-147)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    -223,   132,    10,  -223,    -4,   -44,   -28,   -22,   -16,   -42,
     -42,   -13,    -7,   -20,  -223,  -223,   308,  -223,  -223,  -223,
    -223,  -223,  -223,  -223,     8,  -223,  -223,  -223,    -4,  -223,
    -223,  -223,  -223,  -223,  -223,  -223,     9,  -223,  -223,  -223,
    -223,  -223,  -223,  -223,    61,  -223,    16,    67,   -59,   199,
     158,    -8,  -223,  -223,  -223,  -223,     6,    -5,    -2,    61,
      20,    24,     7,    43,    61,    61,    57,  -223,   -18,   -18,
     -18,   -18,   -18,   -18,   -18,   -18,   -18,   -18,   -18,   -18,
     -18,   -18,   -18,   -18,   -18,   -18,    61,    61,  -223,   -18,
     -18,   -18,   -18,   -18,  -223,  -223,  -223,  -223,  -223,  -223,
    -223,  -223,  -223,  -223,  -223,  -223,  -223,  -223,  -223,  -223,
    -223,  -223,  -223,  -223,  -223,  -223,  -223,  -223,  -223,  -223,
    -223,  -223,  -223,  -223,  -223,  -223,  -223,  -223,  -223,  -223,
    -223,  -223,  -223,  -223,  -223,  -223,    -4,  -223,  -223,    61,
      33,    61,  -223,    61,  -223,  -223,  -223,    61,  -223,  -223,
    -223,  -223,  -223,  -223,  -223,    61,    61,    61,    61,    61,
    -223,  -223,  -223,  -223,  -223,  -223,  -223,  -223,  -223,  -223,
    -223,  -223,  -223,    52,    58,  -223,  -223,  -223,  -223,    59,
    -223,  -223,    66,  -223,    69,    70,    75,    77,    79,    97,
      98,   104,  -223,   105,   106,   108,   133,   135,   137,   138,
    -223,  -223,   148,   151,   152,   153,   155,  -223,  -223,  -223,
     139,   141,  -223,  -223,  -223,  -223,  -223,  -223,   156,   154,
     157,   160,    61,   -18,   -38,   -18,   -18,   -18,   -18,   -18,
     -18,   -34,    61,   -18,   -18,    61,   161,   191,   143,    61,
     -18,   -18,    61,    61,  -223,  -223,    61,   165,  -223,    61,
     162,  -223,  -223,  -223,  -223,  -223,   169,   174,   176,   179,
     180,    57,   177,   178,   189,  -223,   186,   196,  -223,  -223,
    -223,  -223,  -223,    57,   193,   197,   189,  -223,  -223,  -223,
    -223,  -223,  -223,   200,  -223,   -18,    57,    61,   -18,   207,
      61,   188,   -18,   -18,   -18,   217,   190,   -18,   -18,  -223,
     192,  -223,  -223,  -223,  -223,  -223,  -223,  -223,  -223,  -223,
     198,   202,  -223,  -223,  -223,  -223,   209,   210,  -223,  -223,
    -223,  -223,  -223
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       7,     0,     0,    12,     0,     0,    24,     0,     0,     0,
       0,     0,     0,   151,    83,    84,   173,   164,     8,   171,
     170,   166,   168,   167,     0,   165,   169,   172,     0,     1,
      17,    11,     6,    25,    22,    23,     0,    82,    38,    74,
     145,   148,   147,   144,     0,   143,     0,     0,    76,    27,
      78,    77,    79,   149,   161,    32,   150,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    42,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    97,     0,
       0,     0,     0,     0,   175,   119,   120,   121,   122,   123,
     124,   131,   125,   126,   127,   128,   129,   130,   132,   133,
     134,   135,   136,   138,   139,   137,   140,   174,    21,    94,
      95,    89,    90,    91,    92,    93,    85,   105,   106,   104,
     110,   109,   108,   107,   103,    20,     0,     5,    10,     0,
       0,     0,   162,     0,   163,     3,     2,     0,    87,    86,
      88,   160,   159,   142,   141,     0,     0,     0,     0,     0,
      81,   153,   156,    80,   157,   158,   152,   154,   155,   111,
     112,   113,    15,     0,     0,   117,   116,   178,   118,     0,
      40,    41,    43,    45,     0,     0,     0,     0,     0,     0,
       0,     0,    60,     0,     0,     0,     0,     0,     0,     0,
      73,    96,     0,     0,     0,     0,     0,     9,    26,    29,
       0,     0,    28,    33,    35,    37,    34,    36,    14,     0,
       0,   177,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    31,    30,     0,     0,   114,     0,
       0,    75,    44,    51,    50,    52,     0,     0,     0,     0,
       0,     0,     0,     0,    49,    61,    62,     0,    66,    18,
      67,    19,    68,     0,     0,     0,    72,    98,   100,   101,
      99,   102,    16,     0,   179,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   115,
       0,    56,    53,    59,    58,    55,    54,   176,    57,    48,
       0,     0,    63,    65,    64,    71,     0,     0,    39,    47,
      46,    70,    69
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -223,  -223,  -223,  -223,  -223,  -223,  -223,  -223,  -223,  -223,
     -27,  -223,  -223,  -223,  -223,  -223,  -223,  -223,  -223,  -114,
    -223,  -223,  -223,  -223,  -223,  -223,  -223,  -223,  -223,  -223,
    -223,  -223,  -223,  -223,  -223,  -223,  -223,  -223,  -223,  -223,
    -223,  -223,  -223,  -223,  -223,  -223,  -223,  -222,   -12,    13,
      14,  -223,   208,  -223,  -223,  -223,  -223,  -223,  -223,  -223,
    -223,  -223,  -223,  -223,  -223,  -223,  -223,  -223,  -223,  -223,
    -223,  -223,     4,  -223,  -223,  -223,  -223,  -223,  -223,  -223,
    -223,  -223,  -223,  -223
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,   147,    16,    17,     1,    18,     2,     3,   171,   218,
      31,   270,   272,    94,    19,    20,    34,    21,    48,    49,
      50,    51,    52,    22,    95,    96,    97,    98,    99,   100,
     101,   102,   103,   104,   105,   106,   107,   108,   109,   110,
     111,   112,   113,   114,   115,   116,    23,   250,   251,   168,
      24,   117,   155,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   156,    54,    25,    26,    27,    56,   157,    55,    28,
     136,   308,   178,   221
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      53,   138,   254,   160,  -146,   145,   146,    41,    42,   263,
      29,    37,    32,   268,    14,    43,   275,    44,    45,    43,
      30,   261,    45,    38,    39,    33,    46,   160,   -82,    15,
      46,    35,   140,   212,   253,    47,   163,    36,   262,    47,
      40,   213,   214,   215,   216,   217,    43,   172,    44,    45,
     142,   144,   177,   179,   180,   161,   137,    46,   139,   162,
     163,   159,   164,   175,   301,   169,    47,   306,   170,    43,
     165,   141,    45,   173,   200,   201,   166,   174,   160,   181,
     167,   182,   183,   184,   185,   186,   187,   188,   189,   190,
     191,   192,   193,   194,   195,   196,   197,   198,   199,   176,
     209,   219,   202,   203,   204,   205,   206,   220,   222,   207,
      43,   163,    44,    45,    43,   223,    44,    45,   224,   225,
      43,    46,   143,    45,   226,    46,   227,   208,   228,   210,
      47,   211,   -13,     4,    47,     5,    -4,    -4,    -4,    -4,
       6,     7,     8,     9,    10,    -4,   229,   230,    11,    12,
      -4,    -4,    -4,   231,   232,   233,    -4,   234,    -4,    -4,
      -4,    -4,    -4,    -4,    -4,    -4,    -4,    -4,    -4,    -4,
      -4,    -4,    -4,    -4,    -4,    -4,    -4,    -4,    -4,    -4,
     148,   149,   235,   150,   236,    13,   237,   238,    14,    -4,
      -4,    -4,    -4,    -4,    -4,    -4,    43,   239,   273,    45,
     240,   241,   242,    15,   243,   246,   244,    46,   245,   249,
     247,   269,   271,   248,   283,   274,    47,   285,   286,   264,
     265,   148,   149,   287,   150,   288,   276,   277,   289,   290,
     280,   281,   292,   293,   282,   294,   252,   284,   255,   256,
     257,   258,   259,   260,   -75,   295,   266,   267,   297,   140,
     151,   152,   298,   278,   279,   309,   299,   315,   158,   318,
      43,   140,    44,    45,     0,   319,     0,   153,   154,   320,
      43,    46,    44,    45,   291,   303,   321,   322,   307,   305,
      47,    46,     0,   314,     0,     0,   296,     0,   313,     0,
      47,     0,     0,     0,     0,     0,     0,     0,   300,   302,
       0,   304,     0,     0,     0,   310,   311,   312,     0,     0,
     316,   317,    57,    58,    59,    60,     0,     0,     0,     0,
       0,    61,     0,     0,     0,     0,    62,    63,    64,     0,
       0,     0,     0,     0,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    87,    88,    89,    90,    91,
      92,    93
};

static const yytype_int16 yycheck[] =
{
      12,    28,   224,    21,    24,    64,    65,    14,    15,   231,
       0,    53,    56,   235,    56,    53,   238,    55,    56,    53,
      24,    55,    56,     9,    10,    53,    64,    21,    48,    71,
      64,    53,    44,   147,    72,    73,    54,    53,    72,    73,
      53,   155,   156,   157,   158,   159,    53,    59,    55,    56,
      46,    47,    64,    65,    66,    49,    48,    64,    49,    53,
      54,    69,    56,    56,   286,    70,    73,   289,    70,    53,
      64,    55,    56,    53,    86,    87,    70,    53,    21,    66,
      74,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    56,
      67,    49,    89,    90,    91,    92,    93,    49,    49,   136,
      53,    54,    55,    56,    53,    49,    55,    56,    49,    49,
      53,    64,    55,    56,    49,    64,    49,   139,    49,   141,
      73,   143,     0,     1,    73,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    49,    49,    16,    17,
      18,    19,    20,    49,    49,    49,    24,    49,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      22,    23,    49,    25,    49,    53,    49,    49,    56,    57,
      58,    59,    60,    61,    62,    63,    53,    49,    55,    56,
      49,    49,    49,    71,    49,    49,    67,    64,    67,    49,
      56,    50,    21,    56,    49,    72,    73,    55,    49,   231,
     232,    22,    23,    49,    25,    49,   238,   239,    49,    49,
     242,   243,    55,    55,   246,    49,   223,   249,   225,   226,
     227,   228,   229,   230,    55,    49,   233,   234,    55,   261,
      51,    52,    55,   240,   241,    67,    56,    67,    50,    67,
      53,   273,    55,    56,    -1,    67,    -1,    68,    69,    67,
      53,    64,    55,    56,   261,   287,    67,    67,   290,    72,
      73,    64,    -1,   295,    -1,    -1,   273,    -1,    71,    -1,
      73,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   285,   286,
      -1,   288,    -1,    -1,    -1,   292,   293,   294,    -1,    -1,
     297,   298,     4,     5,     6,     7,    -1,    -1,    -1,    -1,
      -1,    13,    -1,    -1,    -1,    -1,    18,    19,    20,    -1,
      -1,    -1,    -1,    -1,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    57,    58,    59,    60,    61,
      62,    63
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    79,    81,    82,     1,     3,     8,     9,    10,    11,
      12,    16,    17,    53,    56,    71,    77,    78,    80,    89,
      90,    92,    98,   121,   125,   148,   149,   150,   154,     0,
      24,    85,    56,    53,    91,    53,    53,    53,   125,   125,
      53,    14,    15,    53,    55,    56,    64,    73,    93,    94,
      95,    96,    97,   123,   147,   153,   151,     4,     5,     6,
       7,    13,    18,    19,    20,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    57,    58,    59,
      60,    61,    62,    63,    88,    99,   100,   101,   102,   103,
     104,   105,   106,   107,   108,   109,   110,   111,   112,   113,
     114,   115,   116,   117,   118,   119,   120,   126,   128,   129,
     130,   131,   132,   133,   134,   135,   136,   137,   138,   139,
     140,   141,   142,   143,   144,   145,   155,    48,    85,    49,
     123,    55,   147,    55,   147,    64,    65,    76,    22,    23,
      25,    51,    52,    68,    69,   127,   146,   152,   127,    69,
      21,    49,    53,    54,    56,    64,    70,    74,   124,    70,
      70,    83,   123,    53,    53,    56,    56,   123,   157,   123,
     123,   124,   124,   124,   124,   124,   124,   124,   124,   124,
     124,   124,   124,   124,   124,   124,   124,   124,   124,   124,
     123,   123,   124,   124,   124,   124,   124,    85,   123,    67,
     123,   123,    94,    94,    94,    94,    94,    94,    84,    49,
      49,   158,    49,    49,    49,    49,    49,    49,    49,    49,
      49,    49,    49,    49,    49,    49,    49,    49,    49,    49,
      49,    49,    49,    49,    67,    67,    49,    56,    56,    49,
     122,   123,   124,    72,   122,   124,   124,   124,   124,   124,
     124,    55,    72,   122,   123,   123,   124,   124,   122,    50,
      86,    21,    87,    55,    72,   122,   123,   123,   124,   124,
     123,   123,   123,    49,   123,    55,    49,    49,    49,    49,
      49,   124,    55,    55,    49,    49,   124,    55,    55,    56,
     124,   122,   124,   123,   124,    72,   122,   123,   156,    67,
     124,   124,   124,    71,   123,    67,   124,   124,    67,    67,
      67,    67,    67
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    75,    76,    76,    77,    77,    78,    79,    79,    80,
      80,    80,    81,    82,    83,    84,    84,    85,    86,    87,
      88,    88,    89,    90,    91,    91,    92,    93,    93,    94,
      94,    94,    94,    95,    95,    96,    96,    97,    98,    99,
     100,   100,   101,   102,   102,   103,   104,   104,   104,   104,
     105,   105,   106,   107,   108,   108,   108,   109,   110,   111,
     112,   113,   114,   114,   115,   115,   116,   117,   118,   119,
     119,   119,   119,   120,   121,   122,   123,   123,   123,   123,
     124,   124,   125,   125,   125,   126,   127,   127,   127,   128,
     128,   128,   128,   128,   128,   128,   129,   130,   131,   132,
     133,   134,   135,   136,   136,   136,   136,   136,   136,   136,
     136,   137,   138,   139,   140,   141,   142,   143,   144,   145,
     145,   145,   145,   145,   145,   145,   145,   145,   145,   145,
     145,   145,   145,   145,   145,   145,   145,   145,   145,   145,
     145,   146,   146,   147,   147,   148,   148,   149,   149,   149,
     150,   151,   151,   151,   151,   151,   151,   151,   151,   152,
     152,   153,   153,   153,   154,   154,   154,   154,   154,   154,
     154,   154,   154,   155,   155,   155,   156,   157,   158,   158
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     0,     2,     2,     0,     2,     3,
       2,     2,     1,     1,     2,     0,     3,     1,     1,     1,
       1,     1,     2,     2,     0,     1,     4,     1,     3,     3,
       4,     4,     1,     3,     3,     3,     3,     3,     2,     7,
       2,     2,     1,     2,     4,     2,     7,     7,     6,     4,
       4,     4,     4,     6,     6,     6,     6,     6,     6,     6,
       2,     4,     4,     6,     6,     6,     4,     4,     4,     7,
       7,     6,     4,     2,     2,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     2,     1,     4,     4,
       4,     4,     4,     1,     1,     1,     1,     1,     1,     1,
       1,     2,     2,     2,     4,     6,     2,     2,     2,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     2,     1,     2,     2,     2,
       2,     0,     2,     2,     2,     2,     2,     2,     2,     1,
       1,     1,     2,     2,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     0,     1,     1,     1,     2,     0,     3
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




/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
/* The lookahead symbol.  */
int yychar;


/* The semantic value of the lookahead symbol.  */
/* Default value used for initialization, for pacifying older GCCs
   or non-GCC compilers.  */
YY_INITIAL_VALUE (static YYSTYPE yyval_default;)
YYSTYPE yylval YY_INITIAL_VALUE (= yyval_default);

    /* Number of syntax errors so far.  */
    int yynerrs;

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
      yychar = yylex (&yylval);
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
#line 179 "asm_mips.yac"
                { (yyval.uval) = ASM_OPR__PLUS ; }
#line 1788 "y.tab.c"
    break;

  case 3:
#line 181 "asm_mips.yac"
                { (yyval.uval) = ASM_OPR__MINUS; }
#line 1794 "y.tab.c"
    break;

  case 5:
#line 188 "asm_mips.yac"
                { prog.add_line(new Label((yyvsp[-1].text))) ; }
#line 1800 "y.tab.c"
    break;

  case 6:
#line 194 "asm_mips.yac"
                {	std::ostringstream lit ;
		    lit << (yyvsp[0].uval);
			prog.add_line(new Directive(".align",lit.str())) ;
		}
#line 1809 "y.tab.c"
    break;

  case 14:
#line 227 "asm_mips.yac"
                {	std::ostringstream bylist ;
		    bylist << (int) (yyvsp[-1].uval) << strmap[(yyvsp[0].uval)] ;
			strmap[strmap_id] = bylist.str() ;
			(yyval.uval) = (yyvsp[0].uval) ;
		}
#line 1819 "y.tab.c"
    break;

  case 15:
#line 236 "asm_mips.yac"
                {	strmap_id++ ;
			strmap[strmap_id] = "" ;
			(yyval.uval) = strmap_id ;
		}
#line 1828 "y.tab.c"
    break;

  case 16:
#line 243 "asm_mips.yac"
                {	std::ostringstream bylist ;
		    bylist << strmap[(yyvsp[-2].uval)] << "," << (yyvsp[0].uval);
			strmap[strmap_id] = bylist.str() ;
			(yyval.uval) = (yyvsp[-2].uval) ;
		}
#line 1838 "y.tab.c"
    break;

  case 18:
#line 256 "asm_mips.yac"
                { (yyval.uval) = (yyvsp[0].uval); }
#line 1844 "y.tab.c"
    break;

  case 19:
#line 261 "asm_mips.yac"
                { (yyval.uval) = (yyvsp[0].uval) & 0x00003fff; }
#line 1850 "y.tab.c"
    break;

  case 22:
#line 272 "asm_mips.yac"
                {	prog.add_line(new Directive(".end",(yyvsp[0].text),false)) ; }
#line 1856 "y.tab.c"
    break;

  case 23:
#line 278 "asm_mips.yac"
                { prog.add_line(new Directive(".ent",(yyvsp[0].text),true)) ; }
#line 1862 "y.tab.c"
    break;

  case 24:
#line 283 "asm_mips.yac"
                { (yyval.text) = NULL; }
#line 1868 "y.tab.c"
    break;

  case 25:
#line 285 "asm_mips.yac"
                { (yyval.text) = (yyvsp[0].text)  ; }
#line 1874 "y.tab.c"
    break;

  case 26:
#line 293 "asm_mips.yac"
                {	std::ostringstream lit ;
		    lit << (yyvsp[-2].text) << ",	" << (yyvsp[0].uval) ;
			prog.add_line(new Directive(".equ",lit.str())) ;
		}
#line 1883 "y.tab.c"
    break;

  case 27:
#line 301 "asm_mips.yac"
                { (yyval.uval) = (yyvsp[0].uval); }
#line 1889 "y.tab.c"
    break;

  case 28:
#line 305 "asm_mips.yac"
                {
		if   ((yyvsp[-1].uval) == ASM_OPR__PLUS)
			{(yyval.uval) = (yyvsp[-2].uval) + (yyvsp[0].uval);}
		else
			{(yyval.uval) = (yyvsp[-2].uval) - (yyvsp[0].uval);}
		}
#line 1900 "y.tab.c"
    break;

  case 29:
#line 317 "asm_mips.yac"
                { (yyval.uval) =   (yyvsp[-1].uval); }
#line 1906 "y.tab.c"
    break;

  case 30:
#line 322 "asm_mips.yac"
                { (yyval.uval) = ~ (yyvsp[-1].uval); }
#line 1912 "y.tab.c"
    break;

  case 31:
#line 327 "asm_mips.yac"
                { (yyval.uval) = - (yyvsp[-1].uval); }
#line 1918 "y.tab.c"
    break;

  case 32:
#line 329 "asm_mips.yac"
                { (yyval.uval) =   (yyvsp[0].uval); }
#line 1924 "y.tab.c"
    break;

  case 33:
#line 336 "asm_mips.yac"
                {
		if   ((yyvsp[-1].uval) == ASM_OPR__OR  ) (yyval.uval) = (yyvsp[-2].uval) | (yyvsp[0].uval);
		if   ((yyvsp[-1].uval) == ASM_OPR__AND ) (yyval.uval) = (yyvsp[-2].uval) & (yyvsp[0].uval);
		if   ((yyvsp[-1].uval) == ASM_OPR__XOR ) (yyval.uval) = (yyvsp[-2].uval) ^ (yyvsp[0].uval);
		}
#line 1934 "y.tab.c"
    break;

  case 34:
#line 344 "asm_mips.yac"
                {
		if   ((yyvsp[-1].uval) == ASM_OPR__OR  ) (yyval.uval) = (yyvsp[-2].uval) | (yyvsp[0].uval);
		if   ((yyvsp[-1].uval) == ASM_OPR__AND ) (yyval.uval) = (yyvsp[-2].uval) & (yyvsp[0].uval);
		if   ((yyvsp[-1].uval) == ASM_OPR__XOR ) (yyval.uval) = (yyvsp[-2].uval) ^ (yyvsp[0].uval);
		}
#line 1944 "y.tab.c"
    break;

  case 35:
#line 355 "asm_mips.yac"
                {
		if   ((yyvsp[-1].uval) == ASM_OPR__MUL ) (yyval.uval) = (yyvsp[-2].uval) * (yyvsp[0].uval);
		else                       (yyval.uval) = (yyvsp[-2].uval) / (yyvsp[0].uval);
		}
#line 1953 "y.tab.c"
    break;

  case 36:
#line 362 "asm_mips.yac"
                { (yyval.uval) = (yyvsp[-2].uval) * (yyvsp[0].uval); }
#line 1959 "y.tab.c"
    break;

  case 37:
#line 369 "asm_mips.yac"
                {
		if   ((yyvsp[-1].uval) == ASM_OPR__SHL ) (yyval.uval) = (yyvsp[-2].uval) << (yyvsp[0].uval);
		else                       (yyval.uval) = (yyvsp[-2].uval) >> (yyvsp[0].uval);
		}
#line 1968 "y.tab.c"
    break;

  case 38:
#line 378 "asm_mips.yac"
                {	std::ostringstream lab ;
		    lab << (yyvsp[0].text);
			prog.add_line(new Directive(".extern",lab.str())) ;
		}
#line 1977 "y.tab.c"
    break;

  case 39:
#line 392 "asm_mips.yac"
                {	t_Operator op ;
			string m = strmap[(yyvsp[-5].uval)] ;
			
			switch((yyvsp[-6].uval)) {
				case ASM_MPS__PREF : op = t_Operator::pref ; break ;
				default: std::cerr<< "asm_mips.yac : " << (yyvsp[-6].uval) << "is not an valid Codop_hint_mem for format_hint_mem" << std::endl ; break ;
			}
			prog.add_line(new Instruction(op,new OPImmediate((yyvsp[-5].uval)),new OPImmediate((int) ((signed short) (yyvsp[-3].uval))),new OPRegister((yyvsp[-1].uval),Src))) ;	
		}
#line 1991 "y.tab.c"
    break;

  case 40:
#line 406 "asm_mips.yac"
                {	t_Operator op ;
			string m = strmap[(yyvsp[0].uval)] ;
			
			switch((yyvsp[-1].uval)) {
				case ASM_MPS__J : op = t_Operator::j ; break ;
				case ASM_MPS__JAL : op = t_Operator::jal ; break ;
				default: std::cerr<< "asm_mips.yac : " << (yyvsp[-1].uval) << "is not an valid Codop_label for format_label" << std::endl ; break ;
			}
			prog.add_line(new Instruction(op,new OPLabel(m))) ;	
		}
#line 2006 "y.tab.c"
    break;

  case 41:
#line 419 "asm_mips.yac"
                {
			t_Operator op ;
			switch((yyvsp[-1].uval)) {
				case ASM_MPS__J : op = t_Operator::jr ; break ;
				case ASM_MPS__JAL : op = t_Operator::jalr ; break ;
				default: std::cerr<< "asm_mips.yac : " << (yyvsp[-1].uval) << "is not an valid Codop_label for format_label" << std::endl ; break ;
			}
			prog.add_line(new Instruction(op,new OPRegister((yyvsp[0].uval),Src))) ;
		}
#line 2020 "y.tab.c"
    break;

  case 42:
#line 432 "asm_mips.yac"
                {
			t_Operator op ;
			switch((yyvsp[0].uval)) {
				case ASM_MPS__SYSCALL : op = t_Operator::syscallu ; break ;
				case ASM_MPS__WAIT : op = t_Operator::waitn ; break ;
				case ASM_MPS__RFE : op = t_Operator::rfe ; break ;
				case ASM_MPS__ERET : op = t_Operator::eret ; break ;
				case ASM_MPS__SYNC : op = t_Operator::sync_ ; break ;
				default: std::cerr<< "asm_mips.yac : " << (yyvsp[0].uval) << "is not an valid Codop_n for format_n" << std::endl ; break ;
			}
			prog.add_line(new Instruction(op)) ;
		}
#line 2037 "y.tab.c"
    break;

  case 43:
#line 449 "asm_mips.yac"
                {
			t_Operator op ;
			switch((yyvsp[-1].uval)) {
				case ASM_MPS__JALR : op = t_Operator::jalr ; break ;
				default: std::cerr<< "asm_mips.yac : " << (yyvsp[-1].uval) << "is not an valid Codop_od_rs for format_od_rs" << std::endl ; break ;
			}
			prog.add_line(new Instruction(op,new OPRegister((yyvsp[0].uval),Src))) ;
		}
#line 2050 "y.tab.c"
    break;

  case 44:
#line 461 "asm_mips.yac"
                {
			t_Operator op ;
			switch((yyvsp[-3].uval)) {
				case ASM_MPS__JALR : op = t_Operator::jalr ; break ;
				default: std::cerr<< "asm_mips.yac : " << (yyvsp[-3].uval) << "is not an valid Codop_od_rs for format_od_rs" << std::endl ; break ;
			}
			prog.add_line(new Instruction(op,new OPRegister((yyvsp[-2].uval),Dst),new OPRegister((yyvsp[0].uval),Src))) ;
		}
#line 2063 "y.tab.c"
    break;

  case 45:
#line 474 "asm_mips.yac"
                {
			t_Operator op ;
			switch((yyvsp[-1].uval)) {
				case ASM_MPS__MFHI : op = t_Operator::mfhi ; break ;
				case ASM_MPS__MFLO : op = t_Operator::mflo ; break ;
				default: std::cerr<< "asm_mips.yac : " << (yyvsp[-1].uval) << "is not an valid Codop_rd for format_rd" << std::endl ; break ;
			}
			prog.add_line(new Instruction(op,new OPRegister((yyvsp[0].uval),Dst))) ;
		}
#line 2077 "y.tab.c"
    break;

  case 46:
#line 493 "asm_mips.yac"
                {
			t_Operator op ;
			switch((yyvsp[-6].uval)) {
				case ASM_MPS__LB : op = t_Operator::lb ; break ;
				case ASM_MPS__LBU : op = t_Operator::lbu ; break ;
				case ASM_MPS__LH : op = t_Operator::lh ; break ;
				case ASM_MPS__LHU : op = t_Operator::lhu ; break ;
				case ASM_MPS__LW : op = t_Operator::lw ; break ;
				case ASM_MPS__LWL : op = t_Operator::lwl ; break ;
				case ASM_MPS__LWR : op = t_Operator::lwr ; break ;
				case ASM_MPS__LL : op = t_Operator::ll ; break ;
				default: std::cerr<< "asm_mips.yac : " << (yyvsp[-6].uval) << "is not an valid Codop_rd_mem for format_rd_mem" << std::endl ; break ;
			}
			prog.add_line(new Instruction(op,new OPRegister((yyvsp[-5].uval),Dst),new OPImmediate((int) ((signed short) (yyvsp[-3].uval))),new OPRegister((yyvsp[-1].uval),Src))) ;
		}
#line 2097 "y.tab.c"
    break;

  case 47:
#line 515 "asm_mips.yac"
                {
			t_Operator op ;
			switch((yyvsp[-6].uval)) {
				case ASM_MPS__LB : op = t_Operator::lb ; break ;
				case ASM_MPS__LBU : op = t_Operator::lbu ; break ;
				case ASM_MPS__LH : op = t_Operator::lh ; break ;
				case ASM_MPS__LHU : op = t_Operator::lhu ; break ;
				case ASM_MPS__LW : op = t_Operator::lw ; break ;
				case ASM_MPS__LWL : op = t_Operator::lwl ; break ;
				case ASM_MPS__LWR : op = t_Operator::lwr ; break ;
				case ASM_MPS__LL : op = t_Operator::ll ; break ;
				default: std::cerr<< "asm_mips.yac : " << (yyvsp[-6].uval) << "is not an valid Codop_rd_mem for format_rd_mem" << std::endl ; break ;
			}
			prog.add_line(new Instruction(op,new OPRegister((yyvsp[-5].uval),Dst),new OPExpression((yyvsp[-3].text)),new OPRegister((yyvsp[-1].uval),Src))) ;
		}
#line 2117 "y.tab.c"
    break;

  case 48:
#line 536 "asm_mips.yac"
                {
			t_Operator op ;
			switch((yyvsp[-5].uval)) {
				case ASM_MPS__LB : op = t_Operator::lb ; break ;
				case ASM_MPS__LBU : op = t_Operator::lbu ; break ;
				case ASM_MPS__LH : op = t_Operator::lh ; break ;
				case ASM_MPS__LHU : op = t_Operator::lhu ; break ;
				case ASM_MPS__LW : op = t_Operator::lw ; break ;
				case ASM_MPS__LWL : op = t_Operator::lwl ; break ;
				case ASM_MPS__LWR : op = t_Operator::lwr ; break ;
				case ASM_MPS__LL : op = t_Operator::ll ; break ;
				default: std::cerr<< "asm_mips.yac : " << (yyvsp[-5].uval) << "is not an valid Codop_rd_mem for format_rd_mem" << std::endl ; break ;
			}
			prog.add_line(new Instruction(op,new OPRegister((yyvsp[-4].uval),Dst),new OPRegister((yyvsp[-1].uval),Src))) ;
		}
#line 2137 "y.tab.c"
    break;

  case 49:
#line 555 "asm_mips.yac"
                {
			t_Operator op ;
			switch((yyvsp[-3].uval)) {
				case ASM_MPS__LB : op = t_Operator::lb ; break ;
				case ASM_MPS__LBU : op = t_Operator::lbu ; break ;
				case ASM_MPS__LH : op = t_Operator::lh ; break ;
				case ASM_MPS__LHU : op = t_Operator::lhu ; break ;
				case ASM_MPS__LW : op = t_Operator::lw ; break ;
				case ASM_MPS__LWL : op = t_Operator::lwl ; break ;
				case ASM_MPS__LWR : op = t_Operator::lwr ; break ;
				case ASM_MPS__LL : op = t_Operator::ll ; break ;
				default: std::cerr<< "asm_mips.yac : " << (yyvsp[-3].uval) << "is not an valid Codop_rd_mem for format_rd_mem" << std::endl ; break ;
			}
			prog.add_line(new Instruction(op,new OPRegister((yyvsp[-2].uval),Dst),new OPImmediate((yyvsp[0].uval)))) ;
		}
#line 2157 "y.tab.c"
    break;

  case 50:
#line 577 "asm_mips.yac"
                {
			t_Operator op ;
			switch((yyvsp[-3].uval)) {
				case ASM_MPS__LUI : op = t_Operator::lui ; break ;
				default: std::cerr<< "asm_mips.yac : " << (yyvsp[-3].uval) << "is not an valid Codop_rd_si16 for format_rd_si16" << std::endl ; break ;
			}
			prog.add_line(new Instruction(op,new OPRegister((yyvsp[-2].uval),Dst),new OPImmediate((int) ((signed short) (yyvsp[0].uval))))) ;
		}
#line 2170 "y.tab.c"
    break;

  case 51:
#line 589 "asm_mips.yac"
                {
			t_Operator op ;
			switch((yyvsp[-3].uval)) {
				case ASM_MPS__LUI : op = t_Operator::lui ; break ;
				default: std::cerr<< "asm_mips.yac : " << (yyvsp[-3].uval) << "is not an valid Codop_rd_si16 for format_rd_si16" << std::endl ; break ;
			}
			prog.add_line(new Instruction(op,new OPRegister((yyvsp[-2].uval),Dst),new OPExpression((yyvsp[0].text)))) ;
		}
#line 2183 "y.tab.c"
    break;

  case 52:
#line 604 "asm_mips.yac"
                {
			t_Operator op ;
			switch((yyvsp[-3].uval)) {
				case ASM_MPS__CLO : op = t_Operator::clo ; break ;
				case ASM_MPS__CLZ : op = t_Operator::clz ; break ;
				default: std::cerr<< "asm_mips.yac : " << (yyvsp[-3].uval) << "is not an valid Codop_rd_rs for format_rd_rs" << std::endl ; break ;
			}
			prog.add_line(new Instruction(op,new OPRegister((yyvsp[-2].uval),Dst),new OPRegister((yyvsp[0].uval),Src))) ;
		}
#line 2197 "y.tab.c"
    break;

  case 53:
#line 622 "asm_mips.yac"
                {
			t_Operator op ;
			switch((yyvsp[-5].uval)) {
				case ASM_MPS__ADD :	op = t_Operator::add; break ;
				case ASM_MPS__ADDU :op = t_Operator::addu ; break ;
				case ASM_MPS__AND :	op = t_Operator::and_ ; break ;
				case ASM_MPS__MUL :	op = t_Operator::mul ; break ;
				case ASM_MPS__NOR :	op = t_Operator::nor ; break ;
				case ASM_MPS__OR :	op = t_Operator::or_ ; break ;
				case ASM_MPS__SLT :	op = t_Operator::slt ; break ;
				case ASM_MPS__SLTU :op = t_Operator::sltu ; break ;
				case ASM_MPS__SUB :	op = t_Operator::sub ; break ;
				case ASM_MPS__SUBU :op = t_Operator::subu ; break ;
				case ASM_MPS__XOR :	op = t_Operator::xor_ ; break ;
				case ASM_MPS__MOVN :op = t_Operator::movn ; break ;
				case ASM_MPS__MOVZ :op = t_Operator::movz ; break ;
				default: std::cerr<< "asm_mips.yac : " << (yyvsp[-5].uval) << "is not an valid Codop_rd_rs_rt for format_rd_rs_rt" << std::endl ; break ;
			}
			prog.add_line(new Instruction(op,new OPRegister((yyvsp[-4].uval),Dst),new OPRegister((yyvsp[-2].uval),Src),new OPRegister((yyvsp[0].uval),Src))) ;
		}
#line 2222 "y.tab.c"
    break;

  case 54:
#line 651 "asm_mips.yac"
                {
			t_Operator op ;
			switch((yyvsp[-5].uval)) {
				case ASM_MPS__ADDI : op = t_Operator::addi ; break ;
				case ASM_MPS__ADDIU : op = t_Operator::addiu ; break ;
				case ASM_MPS__SLTI : op = t_Operator::slti ; break ;
				case ASM_MPS__SLTIU : op = t_Operator::sltiu ; break ;
				default: std::cerr<< "asm_mips.yac : " << (yyvsp[-5].uval) << "is not an valid Codop_rd_rs_si16 for format_rd_rs_si16" << std::endl ; break ;
			}
			prog.add_line(new Instruction(op,new OPRegister((yyvsp[-4].uval),Dst),new OPRegister((yyvsp[-2].uval),Src),new OPImmediate((int) ((signed short) (yyvsp[0].uval))))) ;
		}
#line 2238 "y.tab.c"
    break;

  case 55:
#line 668 "asm_mips.yac"
                {
			t_Operator op ;
			switch((yyvsp[-5].uval)) {
				case ASM_MPS__ADDI : op = t_Operator::addi ; break ;
				case ASM_MPS__ADDIU : op = t_Operator::addiu ; break ;
				case ASM_MPS__SLTI : op = t_Operator::slti ; break ;
				case ASM_MPS__SLTIU : op = t_Operator::sltiu ; break ;
				default: std::cerr<< "asm_mips.yac : " << (yyvsp[-5].uval) << "is not an valid Codop_rd_rs_si16 for format_rd_rs_si16" << std::endl ; break ;
			}
			prog.add_line(new Instruction(op,new OPRegister((yyvsp[-4].uval),Dst),new OPRegister((yyvsp[-2].uval),Src),new OPExpression((yyvsp[0].text)))) ;
		}
#line 2254 "y.tab.c"
    break;

  case 56:
#line 685 "asm_mips.yac"
                {
			t_Operator op ;
			switch((yyvsp[-5].uval)) {
				case ASM_MPS__SLT : op = t_Operator::slti ; break ;
				default: std::cerr<< "asm_mips.yac : " << (yyvsp[-5].uval) << "is not an valid Codop_rd_rs_si16 for format_rd_rs_si16" << std::endl ; break ;
			}
			prog.add_line(new Instruction(op,new OPRegister((yyvsp[-4].uval),Dst),new OPRegister((yyvsp[-2].uval),Src),new OPImmediate((int) ((signed short) (yyvsp[0].uval))))) ;
		}
#line 2267 "y.tab.c"
    break;

  case 57:
#line 702 "asm_mips.yac"
                {
			t_Operator op ;
			switch((yyvsp[-5].uval)) {
				case ASM_MPS__ANDI : op = t_Operator::andi ; break ;
				case ASM_MPS__ORI : op = t_Operator::ori ; break ;
				case ASM_MPS__XORI : op = t_Operator::xori ; break ;
				default: std::cerr<< "asm_mips.yac : " << (yyvsp[-5].uval) << "is not an valid Codop_rd_rs_ui16 for format_rd_rs_ui16" << std::endl ; break ;
			}
			prog.add_line(new Instruction(op,new OPRegister((yyvsp[-4].uval),Dst),new OPRegister((yyvsp[-2].uval),Src),new OPImmediate((yyvsp[0].uval)))) ;
		}
#line 2282 "y.tab.c"
    break;

  case 58:
#line 721 "asm_mips.yac"
                {
			t_Operator op ;
			switch((yyvsp[-5].uval)) {
				case ASM_MPS__SLLV : op = t_Operator::sllv ; break ;
				case ASM_MPS__SRLV : op = t_Operator::srlv ; break ;
				case ASM_MPS__SRAV : op = t_Operator::srav ; break ;
				default: std::cerr<< "asm_mips.yac : " << (yyvsp[-5].uval) << "is not an valid Codop_rd_rt_rs for format_rd_rt_rs" << std::endl ; break ;
			}
			prog.add_line(new Instruction(op,new OPRegister((yyvsp[-4].uval),Dst),new OPRegister((yyvsp[-2].uval),Src),new OPRegister((yyvsp[0].uval),Src))) ;
		}
#line 2297 "y.tab.c"
    break;

  case 59:
#line 740 "asm_mips.yac"
                {
			t_Operator op ;
			switch((yyvsp[-5].uval)) {
				case ASM_MPS__SLL : op = t_Operator::sll ; break ;
				case ASM_MPS__SRL : op = t_Operator::srl ; break ;
				case ASM_MPS__SRA : op = t_Operator::sra ; break ;
				default: std::cerr<< "asm_mips.yac : " << (yyvsp[-5].uval) << "is not an valid Codop_rd_rt_sham for format_rd_rt_sham" << std::endl ; break ;
			}
			prog.add_line(new Instruction(op,new OPRegister((yyvsp[-4].uval),Dst),new OPRegister((yyvsp[-2].uval),Src),new OPImmediate((yyvsp[0].uval)))) ;
		}
#line 2312 "y.tab.c"
    break;

  case 60:
#line 755 "asm_mips.yac"
                {
			t_Operator op ;
			switch((yyvsp[-1].uval)) {
				case ASM_MPS__JR : op = t_Operator::jr ; break ;
				case ASM_MPS__MTHI : op = t_Operator::mthi ; break ;
				case ASM_MPS__MTLO : op = t_Operator::mtlo ; break ;
				default: std::cerr<< "asm_mips.yac : " << (yyvsp[-1].uval) << "is not an valid Codop_rs for format_rs" << std::endl ; break ;
			}
			prog.add_line(new Instruction(op,new OPRegister((yyvsp[0].uval),Src))) ;
		}
#line 2327 "y.tab.c"
    break;

  case 61:
#line 772 "asm_mips.yac"
                {
			t_Operator op ;
			string m = strmap[(yyvsp[0].uval)] ;
			switch((yyvsp[-3].uval)) {
				case ASM_MPS__BGEZ : op = t_Operator::bgez ; break ;
				case ASM_MPS__BGEZAL : op = t_Operator::bgezal ; break ;
				case ASM_MPS__BGTZ : op = t_Operator::bgtz ; break ;
				case ASM_MPS__BLEZ : op = t_Operator::blez ; break ;
				case ASM_MPS__BLTZ : op = t_Operator::bltz ; break ;
				case ASM_MPS__BLTZAL : op = t_Operator::bltzal ; break ;
				default: std::cerr<< "asm_mips.yac : " << (yyvsp[-3].uval) << "is not an valid Codop_rs_label for format_rs_label" << std::endl ; break ;
			}
			prog.add_line(new Instruction(op,new OPRegister((yyvsp[-2].uval),Src),new OPLabel(m))) ;
		}
#line 2346 "y.tab.c"
    break;

  case 62:
#line 794 "asm_mips.yac"
                {
			t_Operator op ;
			switch((yyvsp[-3].uval)) {
				case ASM_MPS__MULT: op = t_Operator::mult; break ;
				case ASM_MPS__MULTU: op = t_Operator::multu; break ;
				case ASM_MPS__DIV: op = t_Operator::div_ ; break ;
				case ASM_MPS__DIVU: op = t_Operator::divu ; break ;
				case ASM_MPS__MADD: op = t_Operator::madd; break ;
				case ASM_MPS__MADDU: op = t_Operator::maddu; break ;
				case ASM_MPS__MSUB: op = t_Operator::msub; break ;
				case ASM_MPS__MSUBU: op = t_Operator::msubu; break ;
				case ASM_MPS__TEQ: op = t_Operator::teq; break ;
				case ASM_MPS__TGE: op = t_Operator::tge; break ;
				case ASM_MPS__TGEU: op = t_Operator::tgeu; break ;
				case ASM_MPS__TLT: op = t_Operator::tlt; break ;
				case ASM_MPS__TLTU: op = t_Operator::tltu; break ;
				case ASM_MPS__TNE: op = t_Operator::tne ; break ;
				default: std::cerr<< "asm_mips.yac : " << (yyvsp[-3].uval) << "is not an valid Codop_rs_label for format_rs_label" << std::endl ; break ;
			}
			prog.add_line(new Instruction(op,new OPRegister((yyvsp[-2].uval),Src),new OPRegister((yyvsp[0].uval),Src))) ;
		}
#line 2372 "y.tab.c"
    break;

  case 63:
#line 821 "asm_mips.yac"
                {
			t_Operator op ;
			if ((yyvsp[-4].uval) != 0 ) {
				std::cerr << "Invalid $zero register for Codop_rs_label" << std::endl ;
			}
			switch((yyvsp[-5].uval)) {
				case ASM_MPS__MULT: op = t_Operator::mult; break ;
				case ASM_MPS__MULTU: op = t_Operator::multu; break ;
				case ASM_MPS__DIV: op = t_Operator::div_ ; break ;
				case ASM_MPS__DIVU: op = t_Operator::divu ; break ;
				case ASM_MPS__MADD: op = t_Operator::madd; break ;
				case ASM_MPS__MADDU: op = t_Operator::maddu; break ;
				case ASM_MPS__MSUB: op = t_Operator::msub; break ;
				case ASM_MPS__MSUBU: op = t_Operator::msubu; break ;
				case ASM_MPS__TEQ: op = t_Operator::teq; break ;
				case ASM_MPS__TGE: op = t_Operator::tge; break ;
				case ASM_MPS__TGEU: op = t_Operator::tgeu; break ;
				case ASM_MPS__TLT: op = t_Operator::tlt; break ;
				case ASM_MPS__TLTU: op = t_Operator::tltu; break ;
				case ASM_MPS__TNE: op = t_Operator::tne ; break ;
				default: std::cerr<< "asm_mips.yac : " << (yyvsp[-5].uval) << "is not an valid Codop_rs_label for format_rs_label" << std::endl ; break ;
			}
			prog.add_line(new Instruction(op,new OPRegister((yyvsp[-4].uval),Dst),new OPRegister((yyvsp[-2].uval),Src),new OPRegister((yyvsp[0].uval),Src))) ;
		}
#line 2401 "y.tab.c"
    break;

  case 64:
#line 854 "asm_mips.yac"
                {
			t_Operator op ;
			string m = strmap[(yyvsp[0].uval)] ;
			switch((yyvsp[-5].uval)) {
				case ASM_MPS__BEQ : op = t_Operator::beq ; break ;
				case ASM_MPS__BNE : op = t_Operator::bne ; break ;
				default: std::cerr<< "asm_mips.yac : " << (yyvsp[-5].uval) << "is not an valid Codop_rs_rt_label for format_rs_rt_label" << std::endl ; break ;
			}
			prog.add_line(new Instruction(op,new OPRegister((yyvsp[-4].uval),Src),new OPRegister((yyvsp[-2].uval),Src),new OPLabel(m))) ;
		}
#line 2416 "y.tab.c"
    break;

  case 65:
#line 870 "asm_mips.yac"
                {
			t_Operator op ;
			std::ostringstream lit ;
		    lit  << (yyvsp[0].text) ;
			switch((yyvsp[-5].uval)) {
				case ASM_MPS__BEQ : op = t_Operator::beq ; break ;
				case ASM_MPS__BNE : op = t_Operator::bne ; break ;
				default: std::cerr<< "asm_mips.yac : " << (yyvsp[-5].uval) << "is not an valid Codop_rs_rt_label for format_rs_rt_label" << std::endl ; break ;
			}
			prog.add_line(new Instruction(op,new OPRegister((yyvsp[-4].uval),Src),new OPRegister((yyvsp[-2].uval),Src),new OPLabel(lit.str()))) ;
		}
#line 2432 "y.tab.c"
    break;

  case 66:
#line 888 "asm_mips.yac"
                {
			t_Operator op ;
			switch((yyvsp[-3].uval)) {
				case ASM_MPS__TEQI: op = t_Operator::teqi; break ;
				case ASM_MPS__TGEI: op = t_Operator::tgei; break ;
				case ASM_MPS__TGEIU: op = t_Operator::tgeiu; break ;
				case ASM_MPS__TLTI: op = t_Operator::tlti; break ;
				case ASM_MPS__TLTIU: op = t_Operator::tltiu; break ;
				case ASM_MPS__TNEI: op = t_Operator::tnei; break ;
				default: std::cerr<< "asm_mips.yac : " << (yyvsp[-3].uval) << "is not an valid Codop_rs_si16 for format_rs_si16" << std::endl ; break ;
			}
			prog.add_line(new Instruction(op,new OPRegister((yyvsp[-2].uval),Src),new OPImmediate((int) ((signed short) (yyvsp[0].uval))))) ;
		}
#line 2450 "y.tab.c"
    break;

  case 67:
#line 908 "asm_mips.yac"
                {
			t_Operator op ;
			t_Src_Dst spin, spinc0 ;
			switch((yyvsp[-3].uval)) {
				case ASM_MPS__MFC0: op = t_Operator::mfc0; spin = Dst ; spinc0 = CopSrc ; break ;
				case ASM_MPS__MTC0: op = t_Operator::mtc0; spin = Src ; spinc0 = CopDst ; break ;
				default: std::cerr<< "asm_mips.yac : " << (yyvsp[-3].uval) << "is not an valid Codop_rt_cop0r for format_rt_cop0r" << std::endl ; break ;
			}
			prog.add_line(new Instruction(op,new OPRegister((yyvsp[-2].uval),spin),new OPRegister((yyvsp[0].uval),spinc0))) ;
		}
#line 2465 "y.tab.c"
    break;

  case 68:
#line 925 "asm_mips.yac"
                {
			t_Operator op ;
			t_Src_Dst spin, spinc0 ;
			switch((yyvsp[-3].uval)) {
				case ASM_MPS__MFC2: op = t_Operator::mfc2; spin = Dst ; spinc0 = CopSrc ; break ;
				case ASM_MPS__MTC2: op = t_Operator::mtc2; spin = Src ; spinc0 = CopDst ; break ;
				default: std::cerr<< "asm_mips.yac : " << (yyvsp[-3].uval) << "is not an valid Codop_rt_cop2r for format_rt_cop2r" << std::endl ; break ;
			}
			prog.add_line(new Instruction(op,new OPRegister((yyvsp[-2].uval),spin),new OPRegister((yyvsp[0].uval),spinc0))) ;
		}
#line 2480 "y.tab.c"
    break;

  case 69:
#line 945 "asm_mips.yac"
                {
			t_Operator op ;
			switch((yyvsp[-6].uval)) {
				case ASM_MPS__SB: op = t_Operator::sb ; break ;
				case ASM_MPS__SH: op = t_Operator::sh ; break ;
				case ASM_MPS__SW: op = t_Operator::sw ; break ;
				case ASM_MPS__SC: op = t_Operator::sc ; break ;
				default: std::cerr<< "asm_mips.yac : " << (yyvsp[-6].uval) << "is not an valid Codop_rt_mem for format_rt_mem" << std::endl ; break ;
			}
			prog.add_line(new Instruction(op,new OPRegister((yyvsp[-5].uval),Src),new OPImmediate((int) ((signed short) (yyvsp[-3].uval))),new OPRegister((yyvsp[-1].uval),Src))) ;
		}
#line 2496 "y.tab.c"
    break;

  case 70:
#line 963 "asm_mips.yac"
                {
			t_Operator op ;
			switch((yyvsp[-6].uval)) {
				case ASM_MPS__SB: op = t_Operator::sb ; break ;
				case ASM_MPS__SH: op = t_Operator::sh ; break ;
				case ASM_MPS__SW: op = t_Operator::sw ; break ;
				case ASM_MPS__SC: op = t_Operator::sc ; break ;
				default: std::cerr<< "asm_mips.yac : " << (yyvsp[-6].uval) << "is not an valid Codop_rt_mem for format_rt_mem" << std::endl ; break ;
			}
			prog.add_line(new Instruction(op,new OPRegister((yyvsp[-5].uval),Dst),new OPExpression((yyvsp[-3].text)),new OPRegister((yyvsp[-1].uval),Src))) ;
		}
#line 2512 "y.tab.c"
    break;

  case 71:
#line 981 "asm_mips.yac"
                {
			t_Operator op ;
			switch((yyvsp[-5].uval)) {
				case ASM_MPS__SB: op = t_Operator::sb ; break ;
				case ASM_MPS__SH: op = t_Operator::sh ; break ;
				case ASM_MPS__SW: op = t_Operator::sw ; break ;
				case ASM_MPS__SC: op = t_Operator::sc ; break ;
				default: std::cerr<< "asm_mips.yac : " << (yyvsp[-5].uval) << "is not an valid Codop_rt_mem for format_rt_mem" << std::endl ; break ;
			}
			prog.add_line(new Instruction(op,new OPRegister((yyvsp[-4].uval),Src),new OPRegister((yyvsp[-1].uval),Src))) ;
		}
#line 2528 "y.tab.c"
    break;

  case 72:
#line 996 "asm_mips.yac"
                {
			t_Operator op ;
			switch((yyvsp[-3].uval)) {
				case ASM_MPS__SB: op = t_Operator::sb ; break ;
				case ASM_MPS__SH: op = t_Operator::sh ; break ;
				case ASM_MPS__SW: op = t_Operator::sw ; break ;
				case ASM_MPS__SC: op = t_Operator::sc ; break ;
				default: std::cerr<< "asm_mips.yac : " << (yyvsp[-3].uval) << "is not an valid Codop_rt_mem for format_rt_mem" << std::endl ; break ;
			}
			prog.add_line(new Instruction(op,new OPRegister((yyvsp[-2].uval),Src),new OPImmediate((yyvsp[0].uval)))) ;
		}
#line 2544 "y.tab.c"
    break;

  case 73:
#line 1012 "asm_mips.yac"
                {
			t_Operator op ;
			switch((yyvsp[-1].uval)) {
				case ASM_MPS__BREAK: op = t_Operator::break_ ; break ;
				default: std::cerr<< "asm_mips.yac : " << (yyvsp[-1].uval) << "is not an valid Codop_ui20 for format_ui20" << std::endl ; break ;
			}
			prog.add_line(new Instruction(op,new OPImmediate((yyvsp[0].uval)))) ;
		}
#line 2557 "y.tab.c"
    break;

  case 74:
#line 1025 "asm_mips.yac"
                {	std::ostringstream lab ;
		    lab << (yyvsp[0].text);
			prog.add_line(new Directive(".globl",lab.str())) ;
		}
#line 2566 "y.tab.c"
    break;

  case 75:
#line 1033 "asm_mips.yac"
                { (yyval.uval) = (yyvsp[0].uval) & 0xffffffff; }
#line 2572 "y.tab.c"
    break;

  case 76:
#line 1038 "asm_mips.yac"
                {  (yyval.uval) = (yyvsp[0].uval); }
#line 2578 "y.tab.c"
    break;

  case 77:
#line 1040 "asm_mips.yac"
                {  (yyval.uval) = (yyvsp[0].uval); }
#line 2584 "y.tab.c"
    break;

  case 78:
#line 1042 "asm_mips.yac"
                {  (yyval.uval) = (yyvsp[0].uval); }
#line 2590 "y.tab.c"
    break;

  case 79:
#line 1044 "asm_mips.yac"
                {  (yyval.uval) = (yyvsp[0].uval); }
#line 2596 "y.tab.c"
    break;

  case 80:
#line 1049 "asm_mips.yac"
                {  (yyval.uval) = (yyvsp[0].uval); }
#line 2602 "y.tab.c"
    break;

  case 81:
#line 1051 "asm_mips.yac"
                { (yyval.uval) = (yyvsp[0].uval) & 0x0000001f; }
#line 2608 "y.tab.c"
    break;

  case 82:
#line 1056 "asm_mips.yac"
                { (yyval.text) = (yyvsp[0].text); }
#line 2614 "y.tab.c"
    break;

  case 83:
#line 1058 "asm_mips.yac"
                {	std::ostringstream str ;
		    str << (yyvsp[0].uval);
			(yyval.text) = const_cast<char*>(str.str().c_str()) ;
		}
#line 2623 "y.tab.c"
    break;

  case 84:
#line 1063 "asm_mips.yac"
                { 
		std::cout << "Label String2 " << (yyvsp[0].text) << std::endl ;
		(yyval.text) = (yyvsp[0].text); }
#line 2631 "y.tab.c"
    break;

  case 86:
#line 1074 "asm_mips.yac"
                { (yyval.uval) = ASM_OPR__OR   ; }
#line 2637 "y.tab.c"
    break;

  case 87:
#line 1076 "asm_mips.yac"
                { (yyval.uval) = ASM_OPR__AND  ; }
#line 2643 "y.tab.c"
    break;

  case 88:
#line 1078 "asm_mips.yac"
                { (yyval.uval) = ASM_OPR__XOR  ; }
#line 2649 "y.tab.c"
    break;

  case 96:
#line 1094 "asm_mips.yac"
                { // GCC uses B as inconditionnal jump
			string m = strmap[(yyvsp[0].uval)] ;
	  		if ((yyvsp[-1].uval) != ASM_MPS__B) {
				std::cerr<< "asm_mips.yac : " << (yyvsp[-1].uval) << "is not an valid Macro_label" << std::endl ;
			}
			prog.add_line(new Instruction(t_Operator::j,new OPLabel(m))) ;
		}
#line 2661 "y.tab.c"
    break;

  case 97:
#line 1105 "asm_mips.yac"
                {
	  		if ((yyvsp[0].uval) != ASM_MPS__NOP) {
				std::cerr<< "asm_mips.yac : " << (yyvsp[0].uval) << "is not an valid Macro_n" << std::endl ;
			}
			prog.add_line(new Instruction(t_Operator::add,new OPRegister(0,Dst),new OPRegister(0,Src),new OPRegister(0,Src))) ;
		}
#line 2672 "y.tab.c"
    break;

  case 98:
#line 1118 "asm_mips.yac"
                {
	  		if ((yyvsp[-3].uval) != ASM_MPS__LI) {
				std::cerr<< "asm_mips.yac : " << (yyvsp[-3].uval) << "is not an valid Macro_rd_i32" << std::endl ;
			}
			int hi, lo ;
			hi = ((yyvsp[0].uval) >> 16) &  0x0000FFFF ;
			lo = ((yyvsp[0].uval)      ) &  0x0000FFFF ;
						
			prog.add_line(new Directive(".set","noat")) ; 
			prog.add_line(new Instruction(t_Operator::lui,new OPRegister(1,Dst),new OPImmediate(hi))) ;
			prog.add_line(new Instruction(t_Operator::ori,new OPRegister((yyvsp[-2].uval),Dst),new OPRegister(1,Src),new OPImmediate(lo))) ;
			prog.add_line(new Directive(".set","at")) ; 
		}
#line 2690 "y.tab.c"
    break;

  case 99:
#line 1138 "asm_mips.yac"
                {
			string m = strmap[(yyvsp[0].uval)] ;
		    std::ostringstream oss_hi ;
		    std::ostringstream oss_lo ;
	  		if ((yyvsp[-3].uval) != ASM_MPS__LI) {
				std::cerr<< "asm_mips.yac : " << (yyvsp[-3].uval) << "is not an valid Macro_rd_i32" << std::endl ;
			}

		    oss_hi << "%hi(" << m << ")" ;
		    oss_lo << "%lo(" << m << ")" ;
						
			prog.add_line(new Directive(".set","noat")) ; 
			prog.add_line(new Instruction(t_Operator::lui,new OPRegister(1,Dst),new OPExpression(oss_hi.str()))) ;
			prog.add_line(new Instruction(t_Operator::ori,new OPRegister((yyvsp[-2].uval),Dst),new OPRegister(1,Src),new OPExpression(oss_lo.str()))) ;
			prog.add_line(new Directive(".set","at")) ; 
		}
#line 2711 "y.tab.c"
    break;

  case 100:
#line 1161 "asm_mips.yac"
                {
	  		if ((yyvsp[-3].uval) != ASM_MPS__MOVE) {
				std::cerr<< "asm_mips.yac : " << (yyvsp[-3].uval) << "is not an valid Macro_rd_rs" << std::endl ;
			}
						
			prog.add_line(new Instruction(t_Operator::or_,new OPRegister((yyvsp[-2].uval),Dst),new OPRegister((yyvsp[0].uval),Src),new OPRegister(0,Src))) ;
		}
#line 2723 "y.tab.c"
    break;

  case 101:
#line 1175 "asm_mips.yac"
                {
	  		if ((yyvsp[-3].uval) == ASM_MPS__NEG) {
				prog.add_line(new Instruction(t_Operator::sub,new OPRegister((yyvsp[-2].uval),Dst),new OPRegister(0,Src),new OPRegister((yyvsp[0].uval),Src))) ;
			} else if ((yyvsp[-3].uval) == ASM_MPS__NEGU) {
				prog.add_line(new Instruction(t_Operator::subu,new OPRegister((yyvsp[-2].uval),Dst),new OPRegister(0,Src),new OPRegister((yyvsp[0].uval),Src))) ;
			} else {
				std::cerr<< "asm_mips.yac : " << (yyvsp[-3].uval) << "is not an valid Macro_rd_rt" << std::endl ; break ;
			}
		}
#line 2737 "y.tab.c"
    break;

  case 102:
#line 1191 "asm_mips.yac"
                {
			string m = strmap[(yyvsp[0].uval)] ;
	  		if ((yyvsp[-3].uval) == ASM_MPS__BEQZ) {
				prog.add_line(new Instruction(t_Operator::beq,new OPRegister(0,Src),new OPRegister((yyvsp[-2].uval),Src),new OPLabel(m))) ;
			} else if ((yyvsp[-3].uval) == ASM_MPS__BNEZ) {
				prog.add_line(new Instruction(t_Operator::bne,new OPRegister(0,Src),new OPRegister((yyvsp[-2].uval),Src),new OPLabel(m))) ;
			} else {
				std::cerr<< "asm_mips.yac : " << (yyvsp[-3].uval) << "is not an valid Macro_rs_label" << std::endl ; break ;
			}
		}
#line 2752 "y.tab.c"
    break;

  case 111:
#line 1217 "asm_mips.yac"
                {	std::ostringstream str ;
		    str << (yyvsp[0].text) ;
			prog.add_line(new Directive(".ascii",str.str())) ;
		}
#line 2761 "y.tab.c"
    break;

  case 112:
#line 1226 "asm_mips.yac"
                {	std::ostringstream str ;
		    str << (yyvsp[0].text) ;
			prog.add_line(new Directive(".asciiz",str.str())) ;
		}
#line 2770 "y.tab.c"
    break;

  case 113:
#line 1235 "asm_mips.yac"
                        {prog.add_line(new Directive(".byte",strmap[(yyvsp[0].uval)])) ;}
#line 2776 "y.tab.c"
    break;

  case 114:
#line 1243 "asm_mips.yac"
                {	std::ostringstream str ;
		    str << (yyvsp[-2].text) << "," << (yyvsp[0].uval) ;
			prog.add_line(new Directive(".lcomm",str.str())) ;
		}
#line 2785 "y.tab.c"
    break;

  case 115:
#line 1256 "asm_mips.yac"
                {	std::ostringstream str ;
		    str << (yyvsp[-4].text) << "," << (yyvsp[-2].uval) << "," << (yyvsp[0].uval);
			prog.add_line(new Directive(".comm",str.str())) ;
		}
#line 2794 "y.tab.c"
    break;

  case 116:
#line 1265 "asm_mips.yac"
                {	std::ostringstream str ;
		    str << (yyvsp[0].uval) ;
			prog.add_line(new Directive(".space",str.str())) ;
		}
#line 2803 "y.tab.c"
    break;

  case 117:
#line 1274 "asm_mips.yac"
                {	std::ostringstream str ;
		    str << (yyvsp[0].uval) ;
			prog.add_line(new Directive(".skip",str.str())) ;
		}
#line 2812 "y.tab.c"
    break;

  case 118:
#line 1283 "asm_mips.yac"
                        {prog.add_line(new Directive(".word",strmap[(yyvsp[0].uval)])) ;}
#line 2818 "y.tab.c"
    break;

  case 141:
#line 1313 "asm_mips.yac"
                { (yyval.uval) = ASM_OPR__MUL  ; }
#line 2824 "y.tab.c"
    break;

  case 142:
#line 1315 "asm_mips.yac"
                { (yyval.uval) = ASM_OPR__DIV  ; }
#line 2830 "y.tab.c"
    break;

  case 143:
#line 1320 "asm_mips.yac"
                { (yyval.uval) = (yyvsp[0].uval); }
#line 2836 "y.tab.c"
    break;

  case 144:
#line 1322 "asm_mips.yac"
                {	
			strmap_id++ ;
			strmap[strmap_id] = (yyvsp[0].text) ;
			(yyval.uval) = strmap_id ;
		}
#line 2846 "y.tab.c"
    break;

  case 145:
#line 1332 "asm_mips.yac"
                { 	
			prog.add_line(new Directive(".section",(yyvsp[0].text))) ;
		}
#line 2854 "y.tab.c"
    break;

  case 146:
#line 1336 "asm_mips.yac"
                {
			prog.add_line(new Directive((yyvsp[0].text))) ;
		}
#line 2862 "y.tab.c"
    break;

  case 147:
#line 1344 "asm_mips.yac"
                {	prog.add_line(new Directive(".set","reorder")) ; }
#line 2868 "y.tab.c"
    break;

  case 148:
#line 1347 "asm_mips.yac"
                {	prog.add_line(new Directive(".set","noreorder")) ; }
#line 2874 "y.tab.c"
    break;

  case 149:
#line 1350 "asm_mips.yac"
                {	string m = strmap[(yyvsp[0].uval)] ;
			prog.add_line(new Directive(".set",m)) ; }
#line 2881 "y.tab.c"
    break;

  case 150:
#line 1358 "asm_mips.yac"
                {	std::ostringstream dir ;
		    dir << (yyvsp[-1].text) ;
			prog.add_line(new Directive(dir.str(),strmap[strmap_id])) ;
		}
#line 2890 "y.tab.c"
    break;

  case 151:
#line 1366 "asm_mips.yac"
                {	strmap_id++ ;
			strmap[strmap_id] = "" ;
			(yyval.uval) = strmap_id ;
		}
#line 2899 "y.tab.c"
    break;

  case 152:
#line 1372 "asm_mips.yac"
                {	std::ostringstream str ;
		    str << strmap[(yyvsp[-1].uval)] << " " << (yyvsp[0].text);
			strmap[strmap_id] = str.str() ;
			(yyval.uval) = (yyvsp[-1].uval) ;
		}
#line 2909 "y.tab.c"
    break;

  case 153:
#line 1379 "asm_mips.yac"
                {	std::ostringstream str ;
		    str << strmap[(yyvsp[-1].uval)] << "," ;
			strmap[strmap_id] = str.str() ;
			(yyval.uval) = (yyvsp[-1].uval) ;
		}
#line 2919 "y.tab.c"
    break;

  case 154:
#line 1386 "asm_mips.yac"
                {	std::ostringstream str ;
		    str << strmap[(yyvsp[-1].uval)] << "@";
			strmap[strmap_id] = str.str() ;
			(yyval.uval) = (yyvsp[-1].uval) ;
		}
#line 2929 "y.tab.c"
    break;

  case 155:
#line 1393 "asm_mips.yac"
                {	std::ostringstream str ;
		    str << strmap[(yyvsp[-1].uval)] << "$" << (yyvsp[0].uval) ;
			strmap[strmap_id] = str.str() ;
			(yyval.uval) = (yyvsp[-1].uval) ;
		}
#line 2939 "y.tab.c"
    break;

  case 156:
#line 1400 "asm_mips.yac"
                {	std::ostringstream str ;
		    str << strmap[(yyvsp[-1].uval)] << (yyvsp[0].text);
			strmap[strmap_id] = str.str() ;
			(yyval.uval) = (yyvsp[-1].uval) ;
		}
#line 2949 "y.tab.c"
    break;

  case 157:
#line 1407 "asm_mips.yac"
                {	std::ostringstream str ;
		    str << strmap[(yyvsp[-1].uval)] << (yyvsp[0].uval);
			strmap[strmap_id] = str.str() ;
			(yyval.uval) = (yyvsp[-1].uval) ;
		}
#line 2959 "y.tab.c"
    break;

  case 158:
#line 1414 "asm_mips.yac"
                {	std::ostringstream str ;
		    str << strmap[(yyvsp[-1].uval)] << "-";
			strmap[strmap_id] = str.str() ;
			(yyval.uval) = (yyvsp[-1].uval) ;
		}
#line 2969 "y.tab.c"
    break;

  case 159:
#line 1422 "asm_mips.yac"
                { (yyval.uval) = ASM_OPR__SHL  ; }
#line 2975 "y.tab.c"
    break;

  case 160:
#line 1424 "asm_mips.yac"
                { (yyval.uval) = ASM_OPR__SHR  ; }
#line 2981 "y.tab.c"
    break;

  case 161:
#line 1429 "asm_mips.yac"
                { (yyval.uval) =   (yyvsp[0].uval); }
#line 2987 "y.tab.c"
    break;

  case 162:
#line 1432 "asm_mips.yac"
                { (yyval.uval) = - (yyvsp[0].uval); }
#line 2993 "y.tab.c"
    break;

  case 163:
#line 1435 "asm_mips.yac"
                { (yyval.uval) = ~ (yyvsp[0].uval); }
#line 2999 "y.tab.c"
    break;

  case 176:
#line 1459 "asm_mips.yac"
                {	(yyval.uval) = (yyvsp[0].uval) & 0x0000ffff; }
#line 3005 "y.tab.c"
    break;

  case 177:
#line 1465 "asm_mips.yac"
                {	std::ostringstream bylist ;
		    	bylist << (int) (yyvsp[-1].uval) << strmap[(yyvsp[0].uval)] ;
			strmap[strmap_id] = bylist.str() ;
			(yyval.uval) = (yyvsp[0].uval) ;
		}
#line 3015 "y.tab.c"
    break;

  case 178:
#line 1474 "asm_mips.yac"
                {	strmap_id++ ;
			strmap[strmap_id] = "" ;
			(yyval.uval) = strmap_id ;
		}
#line 3024 "y.tab.c"
    break;

  case 179:
#line 1481 "asm_mips.yac"
                {	std::ostringstream bylist ;
		    	bylist << strmap[(yyvsp[-2].uval)] << "," << (yyvsp[0].uval);
			strmap[strmap_id] = bylist.str() ;
			(yyval.uval) = (yyvsp[-2].uval) ;
		}
#line 3034 "y.tab.c"
    break;


#line 3038 "y.tab.c"

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
#line 1488 "asm_mips.yac"

