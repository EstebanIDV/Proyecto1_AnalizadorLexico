/* A Bison parser, made by GNU Bison 3.8.  */

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
#define YYBISON 30800

/* Bison version string.  */
#define YYBISON_VERSION "3.8"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 19 "parser.y"

#include "global.h"
#include "scanner.h"
#include "preprocessor.h"
#include "pilaSemantica.h"
#include <stdio.h>
void yyerror(const char *s);
extern char *lineptr;
extern int synErrorFound;

#line 82 "parser.tab.c"

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

#include "parser.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_IDENTIFIER = 3,                 /* IDENTIFIER  */
  YYSYMBOL_I_CONSTANT = 4,                 /* I_CONSTANT  */
  YYSYMBOL_F_CONSTANT = 5,                 /* F_CONSTANT  */
  YYSYMBOL_STRING_LITERAL = 6,             /* STRING_LITERAL  */
  YYSYMBOL_FUNC_NAME = 7,                  /* FUNC_NAME  */
  YYSYMBOL_SIZEOF = 8,                     /* SIZEOF  */
  YYSYMBOL_PTR_OP = 9,                     /* PTR_OP  */
  YYSYMBOL_INC_OP = 10,                    /* INC_OP  */
  YYSYMBOL_DEC_OP = 11,                    /* DEC_OP  */
  YYSYMBOL_LEFT_OP = 12,                   /* LEFT_OP  */
  YYSYMBOL_RIGHT_OP = 13,                  /* RIGHT_OP  */
  YYSYMBOL_LE_OP = 14,                     /* LE_OP  */
  YYSYMBOL_GE_OP = 15,                     /* GE_OP  */
  YYSYMBOL_EQ_OP = 16,                     /* EQ_OP  */
  YYSYMBOL_NE_OP = 17,                     /* NE_OP  */
  YYSYMBOL_AND_OP = 18,                    /* AND_OP  */
  YYSYMBOL_OR_OP = 19,                     /* OR_OP  */
  YYSYMBOL_MUL_ASSIGN = 20,                /* MUL_ASSIGN  */
  YYSYMBOL_DIV_ASSIGN = 21,                /* DIV_ASSIGN  */
  YYSYMBOL_MOD_ASSIGN = 22,                /* MOD_ASSIGN  */
  YYSYMBOL_ADD_ASSIGN = 23,                /* ADD_ASSIGN  */
  YYSYMBOL_SUB_ASSIGN = 24,                /* SUB_ASSIGN  */
  YYSYMBOL_LEFT_ASSIGN = 25,               /* LEFT_ASSIGN  */
  YYSYMBOL_RIGHT_ASSIGN = 26,              /* RIGHT_ASSIGN  */
  YYSYMBOL_AND_ASSIGN = 27,                /* AND_ASSIGN  */
  YYSYMBOL_XOR_ASSIGN = 28,                /* XOR_ASSIGN  */
  YYSYMBOL_OR_ASSIGN = 29,                 /* OR_ASSIGN  */
  YYSYMBOL_TYPEDEF_NAME = 30,              /* TYPEDEF_NAME  */
  YYSYMBOL_ENUMERATION_CONSTANT = 31,      /* ENUMERATION_CONSTANT  */
  YYSYMBOL_TYPEDEF = 32,                   /* TYPEDEF  */
  YYSYMBOL_EXTERN = 33,                    /* EXTERN  */
  YYSYMBOL_STATIC = 34,                    /* STATIC  */
  YYSYMBOL_AUTO = 35,                      /* AUTO  */
  YYSYMBOL_REGISTER = 36,                  /* REGISTER  */
  YYSYMBOL_INLINE = 37,                    /* INLINE  */
  YYSYMBOL_CONST = 38,                     /* CONST  */
  YYSYMBOL_RESTRICT = 39,                  /* RESTRICT  */
  YYSYMBOL_VOLATILE = 40,                  /* VOLATILE  */
  YYSYMBOL_BOOL = 41,                      /* BOOL  */
  YYSYMBOL_CHAR = 42,                      /* CHAR  */
  YYSYMBOL_SHORT = 43,                     /* SHORT  */
  YYSYMBOL_INT = 44,                       /* INT  */
  YYSYMBOL_LONG = 45,                      /* LONG  */
  YYSYMBOL_SIGNED = 46,                    /* SIGNED  */
  YYSYMBOL_UNSIGNED = 47,                  /* UNSIGNED  */
  YYSYMBOL_FLOAT = 48,                     /* FLOAT  */
  YYSYMBOL_DOUBLE = 49,                    /* DOUBLE  */
  YYSYMBOL_VOID = 50,                      /* VOID  */
  YYSYMBOL_COMPLEX = 51,                   /* COMPLEX  */
  YYSYMBOL_IMAGINARY = 52,                 /* IMAGINARY  */
  YYSYMBOL_STRUCT = 53,                    /* STRUCT  */
  YYSYMBOL_UNION = 54,                     /* UNION  */
  YYSYMBOL_ENUM = 55,                      /* ENUM  */
  YYSYMBOL_ELLIPSIS = 56,                  /* ELLIPSIS  */
  YYSYMBOL_ENDOFFILE = 57,                 /* ENDOFFILE  */
  YYSYMBOL_CASE = 58,                      /* CASE  */
  YYSYMBOL_DEFAULT = 59,                   /* DEFAULT  */
  YYSYMBOL_IF = 60,                        /* IF  */
  YYSYMBOL_ELSE = 61,                      /* ELSE  */
  YYSYMBOL_SWITCH = 62,                    /* SWITCH  */
  YYSYMBOL_WHILE = 63,                     /* WHILE  */
  YYSYMBOL_DO = 64,                        /* DO  */
  YYSYMBOL_FOR = 65,                       /* FOR  */
  YYSYMBOL_GOTO = 66,                      /* GOTO  */
  YYSYMBOL_CONTINUE = 67,                  /* CONTINUE  */
  YYSYMBOL_BREAK = 68,                     /* BREAK  */
  YYSYMBOL_RETURN = 69,                    /* RETURN  */
  YYSYMBOL_ALIGNAS = 70,                   /* ALIGNAS  */
  YYSYMBOL_ALIGNOF = 71,                   /* ALIGNOF  */
  YYSYMBOL_ATOMIC = 72,                    /* ATOMIC  */
  YYSYMBOL_GENERIC = 73,                   /* GENERIC  */
  YYSYMBOL_NORETURN = 74,                  /* NORETURN  */
  YYSYMBOL_STATIC_ASSERT = 75,             /* STATIC_ASSERT  */
  YYSYMBOL_THREAD_LOCAL = 76,              /* THREAD_LOCAL  */
  YYSYMBOL_77_ = 77,                       /* '('  */
  YYSYMBOL_78_ = 78,                       /* ')'  */
  YYSYMBOL_79_ = 79,                       /* ','  */
  YYSYMBOL_80_ = 80,                       /* ':'  */
  YYSYMBOL_81_ = 81,                       /* '['  */
  YYSYMBOL_82_ = 82,                       /* ']'  */
  YYSYMBOL_83_ = 83,                       /* '.'  */
  YYSYMBOL_84_ = 84,                       /* '&'  */
  YYSYMBOL_85_ = 85,                       /* '*'  */
  YYSYMBOL_86_ = 86,                       /* '+'  */
  YYSYMBOL_87_ = 87,                       /* '-'  */
  YYSYMBOL_88_ = 88,                       /* '~'  */
  YYSYMBOL_89_ = 89,                       /* '!'  */
  YYSYMBOL_90_ = 90,                       /* '/'  */
  YYSYMBOL_91_ = 91,                       /* '%'  */
  YYSYMBOL_92_ = 92,                       /* '<'  */
  YYSYMBOL_93_ = 93,                       /* '>'  */
  YYSYMBOL_94_ = 94,                       /* '^'  */
  YYSYMBOL_95_ = 95,                       /* '|'  */
  YYSYMBOL_96_ = 96,                       /* '?'  */
  YYSYMBOL_97_ = 97,                       /* '='  */
  YYSYMBOL_98_ = 98,                       /* ';'  */
  YYSYMBOL_99_ = 99,                       /* '{'  */
  YYSYMBOL_100_ = 100,                     /* '}'  */
  YYSYMBOL_YYACCEPT = 101,                 /* $accept  */
  YYSYMBOL_primary_expression = 102,       /* primary_expression  */
  YYSYMBOL_constant = 103,                 /* constant  */
  YYSYMBOL_enumeration_constant = 104,     /* enumeration_constant  */
  YYSYMBOL_string = 105,                   /* string  */
  YYSYMBOL_generic_selection = 106,        /* generic_selection  */
  YYSYMBOL_generic_assoc_list = 107,       /* generic_assoc_list  */
  YYSYMBOL_generic_association = 108,      /* generic_association  */
  YYSYMBOL_postfix_expression = 109,       /* postfix_expression  */
  YYSYMBOL_argument_expression_list = 110, /* argument_expression_list  */
  YYSYMBOL_unary_expression = 111,         /* unary_expression  */
  YYSYMBOL_unary_operator = 112,           /* unary_operator  */
  YYSYMBOL_cast_expression = 113,          /* cast_expression  */
  YYSYMBOL_multiplicative_expression = 114, /* multiplicative_expression  */
  YYSYMBOL_additive_expression = 115,      /* additive_expression  */
  YYSYMBOL_shift_expression = 116,         /* shift_expression  */
  YYSYMBOL_relational_expression = 117,    /* relational_expression  */
  YYSYMBOL_equality_expression = 118,      /* equality_expression  */
  YYSYMBOL_and_expression = 119,           /* and_expression  */
  YYSYMBOL_exclusive_or_expression = 120,  /* exclusive_or_expression  */
  YYSYMBOL_inclusive_or_expression = 121,  /* inclusive_or_expression  */
  YYSYMBOL_logical_and_expression = 122,   /* logical_and_expression  */
  YYSYMBOL_logical_or_expression = 123,    /* logical_or_expression  */
  YYSYMBOL_conditional_expression = 124,   /* conditional_expression  */
  YYSYMBOL_assignment_expression = 125,    /* assignment_expression  */
  YYSYMBOL_assignment_operator = 126,      /* assignment_operator  */
  YYSYMBOL_expression = 127,               /* expression  */
  YYSYMBOL_constant_expression = 128,      /* constant_expression  */
  YYSYMBOL_declaration = 129,              /* declaration  */
  YYSYMBOL_declaration_specifiers = 130,   /* declaration_specifiers  */
  YYSYMBOL_init_declarator_list = 131,     /* init_declarator_list  */
  YYSYMBOL_init_declarator = 132,          /* init_declarator  */
  YYSYMBOL_storage_class_specifier = 133,  /* storage_class_specifier  */
  YYSYMBOL_type_specifier = 134,           /* type_specifier  */
  YYSYMBOL_struct_or_union_specifier = 135, /* struct_or_union_specifier  */
  YYSYMBOL_struct_or_union = 136,          /* struct_or_union  */
  YYSYMBOL_struct_declaration_list = 137,  /* struct_declaration_list  */
  YYSYMBOL_struct_declaration = 138,       /* struct_declaration  */
  YYSYMBOL_specifier_qualifier_list = 139, /* specifier_qualifier_list  */
  YYSYMBOL_struct_declarator_list = 140,   /* struct_declarator_list  */
  YYSYMBOL_struct_declarator = 141,        /* struct_declarator  */
  YYSYMBOL_enum_specifier = 142,           /* enum_specifier  */
  YYSYMBOL_enumerator_list = 143,          /* enumerator_list  */
  YYSYMBOL_enumerator = 144,               /* enumerator  */
  YYSYMBOL_atomic_type_specifier = 145,    /* atomic_type_specifier  */
  YYSYMBOL_type_qualifier = 146,           /* type_qualifier  */
  YYSYMBOL_function_specifier = 147,       /* function_specifier  */
  YYSYMBOL_alignment_specifier = 148,      /* alignment_specifier  */
  YYSYMBOL_declarator = 149,               /* declarator  */
  YYSYMBOL_direct_declarator = 150,        /* direct_declarator  */
  YYSYMBOL_pointer = 151,                  /* pointer  */
  YYSYMBOL_type_qualifier_list = 152,      /* type_qualifier_list  */
  YYSYMBOL_parameter_type_list = 153,      /* parameter_type_list  */
  YYSYMBOL_parameter_list = 154,           /* parameter_list  */
  YYSYMBOL_parameter_declaration = 155,    /* parameter_declaration  */
  YYSYMBOL_identifier_list = 156,          /* identifier_list  */
  YYSYMBOL_type_name = 157,                /* type_name  */
  YYSYMBOL_abstract_declarator = 158,      /* abstract_declarator  */
  YYSYMBOL_direct_abstract_declarator = 159, /* direct_abstract_declarator  */
  YYSYMBOL_initializer = 160,              /* initializer  */
  YYSYMBOL_initializer_list = 161,         /* initializer_list  */
  YYSYMBOL_designation = 162,              /* designation  */
  YYSYMBOL_designator_list = 163,          /* designator_list  */
  YYSYMBOL_designator = 164,               /* designator  */
  YYSYMBOL_static_assert_declaration = 165, /* static_assert_declaration  */
  YYSYMBOL_statement = 166,                /* statement  */
  YYSYMBOL_labeled_statement = 167,        /* labeled_statement  */
  YYSYMBOL_compound_statement = 168,       /* compound_statement  */
  YYSYMBOL_open_scope = 169,               /* open_scope  */
  YYSYMBOL_close_scope = 170,              /* close_scope  */
  YYSYMBOL_block_item_list = 171,          /* block_item_list  */
  YYSYMBOL_block_item = 172,               /* block_item  */
  YYSYMBOL_expression_statement = 173,     /* expression_statement  */
  YYSYMBOL_selection_statement = 174,      /* selection_statement  */
  YYSYMBOL_iteration_statement = 175,      /* iteration_statement  */
  YYSYMBOL_jump_statement = 176,           /* jump_statement  */
  YYSYMBOL_translation_unit = 177,         /* translation_unit  */
  YYSYMBOL_external_declaration = 178,     /* external_declaration  */
  YYSYMBOL_function_definition = 179,      /* function_definition  */
  YYSYMBOL_declaration_list = 180          /* declaration_list  */
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

#if 1

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
#endif /* 1 */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL \
             && defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
  YYLTYPE yyls_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE) \
             + YYSIZEOF (YYLTYPE)) \
      + 2 * YYSTACK_GAP_MAXIMUM)

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
#define YYFINAL  70
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   2551

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  101
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  80
/* YYNRULES -- Number of rules.  */
#define YYNRULES  285
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  497

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   331


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
       2,     2,     2,    89,     2,     2,     2,    91,    84,     2,
      77,    78,    85,    86,    79,    87,    83,    90,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    80,    98,
      92,    97,    93,    96,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    81,     2,    82,    94,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    99,    95,   100,    88,     2,     2,     2,
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
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    32,    32,    33,    34,    35,    39,    40,    41,    45,
      49,    50,    54,    58,    59,    63,    64,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    82,    83,
      87,    88,    89,    90,    91,    92,    93,    97,    98,    99,
     100,   101,   102,   106,   107,   111,   112,   113,   114,   118,
     119,   120,   124,   125,   126,   130,   131,   132,   133,   134,
     138,   139,   140,   144,   145,   149,   150,   154,   155,   159,
     160,   164,   165,   169,   170,   174,   175,   179,   180,   181,
     182,   183,   184,   185,   186,   187,   188,   189,   193,   194,
     198,   202,   203,   204,   208,   209,   210,   211,   212,   213,
     214,   215,   216,   217,   221,   222,   226,   227,   231,   232,
     233,   234,   235,   236,   240,   241,   242,   243,   244,   245,
     246,   247,   248,   249,   250,   251,   252,   253,   254,   255,
     259,   260,   261,   265,   266,   270,   271,   275,   276,   277,
     281,   282,   283,   284,   288,   289,   293,   294,   295,   299,
     300,   301,   302,   303,   307,   308,   312,   313,   317,   321,
     322,   323,   324,   328,   329,   333,   334,   338,   339,   343,
     344,   345,   346,   347,   348,   349,   350,   351,   352,   353,
     354,   355,   356,   360,   361,   362,   363,   367,   368,   373,
     374,   378,   379,   383,   384,   385,   389,   390,   394,   395,
     399,   400,   401,   405,   406,   407,   408,   409,   410,   411,
     412,   413,   414,   415,   416,   417,   418,   419,   420,   421,
     422,   423,   424,   425,   429,   430,   431,   435,   436,   437,
     438,   442,   446,   447,   451,   452,   456,   460,   461,   462,
     463,   464,   465,   469,   470,   471,   475,   476,   477,   481,
     485,   489,   490,   491,   495,   496,   500,   501,   505,   506,
     507,   508,   509,   513,   514,   515,   516,   517,   518,   519,
     520,   521,   525,   526,   527,   528,   529,   534,   535,   536,
     540,   541,   546,   547,   551,   552
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if 1
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  static const char *const yy_sname[] =
  {
  "end of file", "error", "invalid token", "IDENTIFIER", "I_CONSTANT",
  "F_CONSTANT", "STRING_LITERAL", "FUNC_NAME", "SIZEOF", "PTR_OP",
  "INC_OP", "DEC_OP", "LEFT_OP", "RIGHT_OP", "LE_OP", "GE_OP", "EQ_OP",
  "NE_OP", "AND_OP", "OR_OP", "MUL_ASSIGN", "DIV_ASSIGN", "MOD_ASSIGN",
  "ADD_ASSIGN", "SUB_ASSIGN", "LEFT_ASSIGN", "RIGHT_ASSIGN", "AND_ASSIGN",
  "XOR_ASSIGN", "OR_ASSIGN", "TYPEDEF_NAME", "ENUMERATION_CONSTANT",
  "TYPEDEF", "EXTERN", "STATIC", "AUTO", "REGISTER", "INLINE", "CONST",
  "RESTRICT", "VOLATILE", "BOOL", "CHAR", "SHORT", "INT", "LONG", "SIGNED",
  "UNSIGNED", "FLOAT", "DOUBLE", "VOID", "COMPLEX", "IMAGINARY", "STRUCT",
  "UNION", "ENUM", "ELLIPSIS", "ENDOFFILE", "CASE", "DEFAULT", "IF",
  "ELSE", "SWITCH", "WHILE", "DO", "FOR", "GOTO", "CONTINUE", "BREAK",
  "RETURN", "ALIGNAS", "ALIGNOF", "ATOMIC", "GENERIC", "NORETURN",
  "STATIC_ASSERT", "THREAD_LOCAL", "'('", "')'", "','", "':'", "'['",
  "']'", "'.'", "'&'", "'*'", "'+'", "'-'", "'~'", "'!'", "'/'", "'%'",
  "'<'", "'>'", "'^'", "'|'", "'?'", "'='", "';'", "'{'", "'}'", "$accept",
  "primary_expression", "constant", "enumeration_constant", "string",
  "generic_selection", "generic_assoc_list", "generic_association",
  "postfix_expression", "argument_expression_list", "unary_expression",
  "unary_operator", "cast_expression", "multiplicative_expression",
  "additive_expression", "shift_expression", "relational_expression",
  "equality_expression", "and_expression", "exclusive_or_expression",
  "inclusive_or_expression", "logical_and_expression",
  "logical_or_expression", "conditional_expression",
  "assignment_expression", "assignment_operator", "expression",
  "constant_expression", "declaration", "declaration_specifiers",
  "init_declarator_list", "init_declarator", "storage_class_specifier",
  "type_specifier", "struct_or_union_specifier", "struct_or_union",
  "struct_declaration_list", "struct_declaration",
  "specifier_qualifier_list", "struct_declarator_list",
  "struct_declarator", "enum_specifier", "enumerator_list", "enumerator",
  "atomic_type_specifier", "type_qualifier", "function_specifier",
  "alignment_specifier", "declarator", "direct_declarator", "pointer",
  "type_qualifier_list", "parameter_type_list", "parameter_list",
  "parameter_declaration", "identifier_list", "type_name",
  "abstract_declarator", "direct_abstract_declarator", "initializer",
  "initializer_list", "designation", "designator_list", "designator",
  "static_assert_declaration", "statement", "labeled_statement",
  "compound_statement", "open_scope", "close_scope", "block_item_list",
  "block_item", "expression_statement", "selection_statement",
  "iteration_statement", "jump_statement", "translation_unit",
  "external_declaration", "function_definition", "declaration_list", YY_NULLPTR
  };
  return yy_sname[yysymbol];
}
#endif

#define YYPACT_NINF (-338)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    2140,   -62,  -338,  -338,  -338,  -338,  -338,  -338,  -338,  -338,
    -338,  -338,  -338,  -338,  -338,  -338,  -338,  -338,  -338,  -338,
    -338,  -338,  -338,  -338,  -338,  -338,    28,   -15,    -7,  -338,
      20,  -338,  -338,    86,  2475,  2475,  -338,    30,  -338,  -338,
    2475,  2475,  2475,  -338,  2085,  -338,  -338,  -338,    31,  -338,
     140,  1302,  1482,  1882,  -338,    34,   222,  -338,   -32,  -338,
    2240,   -29,    32,  -338,  -338,    31,  1244,  -338,  -338,  -338,
    -338,  -338,   140,  -338,    51,   -54,  -338,  -338,  -338,  -338,
    -338,  -338,  1920,  1969,  1969,  -338,    79,    84,  1302,  -338,
    -338,  -338,  -338,  -338,  -338,  -338,  -338,  -338,  -338,   229,
    -338,  1882,  -338,    -3,   110,    71,    53,   207,    88,    80,
      81,   167,    11,  -338,   101,  1482,   133,  1482,   109,   124,
     128,   159,  -338,  -338,  -338,   222,    34,  -338,   984,  -338,
      86,  -338,   525,  2308,  2193,  1361,   -29,  1244,  1364,  -338,
      77,  -338,   -47,  1882,    15,  -338,  -338,  1302,  -338,  1302,
    -338,  -338,  1482,  1882,   230,  -338,  -338,   151,   169,   209,
    -338,  -338,  1746,  1882,   225,  -338,  1882,  1882,  1882,  1882,
    1882,  1882,  1882,  1882,  1882,  1882,  1882,  1882,  1882,  1882,
    1882,  1882,  1882,  1882,  1882,  -338,  -338,  2376,  1420,    78,
    -338,    92,  -338,  -338,  -338,   262,  -338,  -338,  -338,  -338,
     173,  -338,  -338,   925,   649,   196,  1882,   198,   220,   224,
     234,   881,   242,   282,   201,   223,  1015,  -338,     6,  -338,
    -338,  -338,  -338,  -338,   649,  -338,  -338,  -338,  -338,  -338,
    -338,  -338,  -338,  -338,   134,   245,   246,  -338,   154,  1708,
    -338,   247,   258,  1479,  1364,  -338,  -338,  1882,  -338,    68,
    -338,   248,    15,  -338,  -338,  -338,  -338,   264,   265,   267,
     270,  -338,  -338,  -338,  -338,  -338,  -338,  -338,  -338,  -338,
    -338,  -338,  1882,  -338,  1882,   984,  -338,  -338,   157,  -338,
     138,  -338,  -338,  -338,  -338,    -3,    -3,   110,   110,    71,
      71,    71,    71,    53,    53,   207,    88,    80,    81,   167,
     166,  -338,   272,   273,  1708,  -338,   271,   274,  1538,    92,
     596,  1597,   279,  1882,   358,  -338,   -45,   984,    97,  -338,
    -338,  -338,   881,   283,   881,  1123,  1142,  1161,   299,   749,
     266,  -338,  -338,  -338,    72,  -338,  -338,  -338,  2029,  -338,
     150,  -338,  -338,  2430,  -338,   363,   285,  1708,  -338,  -338,
    1882,  -338,   287,   294,  -338,  -338,   136,  -338,  1882,  -338,
      31,    31,  -338,  1972,  -338,  -338,  -338,   925,  -338,  1882,
    -338,  1882,  -338,  -338,   295,  1708,  -338,  -338,  1882,  -338,
     296,  -338,   301,  1708,  -338,   300,   302,  1656,   288,   303,
    -338,   838,  -338,  -338,  -338,  -338,  -338,   881,  -338,   309,
     185,   315,   195,   316,   208,   304,   319,  1034,  1034,  -338,
    -338,  -338,  -338,  -338,  -338,   317,   318,  -338,  -338,  -338,
    -338,   321,   211,  -338,   322,   -41,  -338,  -338,  -338,   323,
     324,  -338,  -338,   327,  1708,  -338,  -338,  1882,  -338,   328,
    -338,  -338,  -338,   984,  -338,  -338,  -338,   881,  -338,   881,
    -338,   881,  1250,  -338,  1795,  1833,  -338,  -338,  1882,  -338,
    1972,  1882,   838,  -338,  -338,  -338,  -338,   329,   330,  -338,
    -338,   337,  -338,  -338,   325,   214,   881,   217,   881,   226,
    -338,  -338,  -338,  -338,  -338,  -338,   881,  -338,   306,  -338,
     881,  -338,   881,  -338,  -338,  -338,  -338
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int16 yydefact[] =
{
       0,     0,   129,   108,   109,   110,   112,   113,   163,   159,
     160,   161,   123,   115,   116,   117,   118,   121,   122,   119,
     120,   114,   124,   125,   133,   134,     0,     0,   162,   164,
       0,   111,   281,     0,    95,    97,   127,     0,   128,   126,
      99,   101,   103,    93,     0,   277,   280,   278,   153,   249,
       0,     0,     0,     0,   169,     0,   186,    91,     0,   104,
     107,   168,     0,    94,    96,   132,     0,    98,   100,   102,
       1,   279,     0,     9,   157,     0,   154,    18,     6,     7,
      10,    11,     0,     0,     0,     8,     0,     0,     0,    37,
      38,    39,    40,    41,    42,    17,     2,     3,     5,    30,
      43,     0,    45,    49,    52,    55,    60,    63,    65,    67,
      69,    71,    73,    90,     0,   141,   199,   143,     0,     0,
       0,     0,   162,   187,   185,   184,     0,    92,     0,   284,
       0,   283,     0,     0,     0,     0,   167,     0,     0,   135,
       0,   139,     0,     0,     0,   250,   149,     0,    34,     0,
      31,    32,     0,     0,    43,    75,    88,     0,     0,     0,
      24,    25,     0,     0,     0,    33,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   166,   140,     0,     0,   201,
     198,   202,   142,   165,   158,     0,   170,   188,   183,   105,
     107,   226,   106,     0,     0,    18,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   256,     0,   254,
     255,   237,   238,   246,     0,   251,   239,   240,   241,   242,
     285,   282,   196,   181,   195,     0,   190,   191,     0,     0,
     171,    38,     0,     0,     0,   136,   130,     0,   137,     0,
     144,   148,     0,   151,   156,   155,   150,     0,     0,     0,
       0,    78,    79,    80,    81,    82,    83,    84,    85,    86,
      87,    77,     0,     4,     0,     0,    23,    20,     0,    28,
       0,    22,    46,    47,    48,    50,    51,    53,    54,    58,
      59,    56,    57,    61,    62,    64,    66,    68,    70,    72,
       0,   220,     0,     0,     0,   204,    38,     0,     0,   200,
       0,     0,     0,     0,     0,   228,     0,     0,     0,   232,
     248,   253,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   273,   274,   275,     0,   257,   247,   252,     0,   193,
     201,   194,   180,     0,   182,     0,     0,     0,   172,   179,
       0,   178,    38,     0,   131,   146,     0,   138,     0,   152,
      35,     0,    36,     0,    76,    89,    44,     0,    21,     0,
      19,     0,   221,   203,     0,     0,   205,   211,     0,   210,
       0,   222,     0,     0,   212,    38,     0,     0,     0,     0,
     235,     0,   224,   227,   231,   233,   243,     0,   245,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   272,
     276,   189,   192,   197,   174,     0,     0,   175,   177,   145,
     147,     0,     0,    13,     0,     0,    29,    74,   207,     0,
       0,   209,   223,     0,     0,   213,   219,     0,   218,     0,
     236,   234,   230,     0,   225,   244,   260,     0,   262,     0,
     264,     0,     0,   268,     0,     0,   173,   176,     0,    12,
       0,     0,     0,    26,   206,   208,   215,     0,     0,   216,
     229,   259,   261,   263,     0,     0,     0,     0,     0,     0,
      16,    14,    15,    27,   214,   217,     0,   266,     0,   270,
       0,   267,     0,   258,   265,   271,   269
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -338,  -338,  -338,  -338,  -338,  -338,  -338,   -44,  -338,  -338,
     307,  -338,   -93,   145,   160,   108,   161,   236,   233,   237,
     238,   239,  -338,   -25,     5,  -338,   -84,   -38,     1,    16,
    -338,   293,  -338,   -46,  -338,  -338,   286,  -109,    27,  -338,
      70,  -338,   352,  -130,  -338,   -39,  -338,  -338,    -9,   -60,
     -35,  -116,  -127,  -338,    85,  -338,   -11,  -106,  -180,  -125,
      63,  -337,  -338,   113,   -43,   -22,  -338,   -17,   -26,   -18,
    -338,  -160,  -217,  -338,  -338,  -338,  -338,   388,  -338,  -338
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,    95,    96,    74,    97,    98,   422,   423,    99,   278,
     154,   101,   102,   103,   104,   105,   106,   107,   108,   109,
     110,   111,   112,   155,   156,   272,   218,   114,   219,   130,
      58,    59,    34,    35,    36,    37,   138,   139,   116,   249,
     250,    38,    75,    76,    39,    40,    41,    42,   121,    61,
      62,   125,   302,   236,   237,   238,   424,   303,   191,   315,
     316,   317,   318,   319,    43,   220,   221,   222,   132,   146,
     224,   225,   226,   227,   228,   229,    44,    45,    46,   133
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      50,    32,   136,   202,   157,   115,   115,   235,   165,   309,
     190,    66,   117,   117,   255,   120,    33,   123,    73,   243,
     115,   124,    72,   141,    60,   144,   113,   117,   113,   245,
     183,    48,   252,    65,   391,    54,    47,    54,   462,   137,
     118,   119,   115,   131,   321,    32,   145,   126,   134,   117,
      63,    64,   135,   145,   443,   145,    67,    68,    69,   145,
      33,   129,    51,   157,   337,   157,   127,   173,   174,   115,
      52,   115,   308,   282,   283,   284,   117,   158,   117,   280,
      54,   189,   166,   171,   172,   274,   197,   167,   168,    54,
     198,   115,   115,   140,   141,   141,   123,    53,   117,   117,
     300,   115,   203,   115,   335,   254,   115,   184,   117,    55,
     117,    55,   408,   117,   223,   145,   231,   200,   113,    56,
     246,   200,   255,   347,   253,   443,   256,    49,   341,    49,
      49,   251,   334,   201,   230,   245,   257,    54,   258,    54,
     242,   259,   186,    73,   192,   175,   176,   356,   143,   123,
     234,   274,   189,    54,    55,   187,   152,   247,   260,   188,
     309,   153,    56,    55,   140,   140,   357,   279,   323,   310,
     410,    56,   179,   311,   180,   248,   181,   203,   313,   185,
     314,   113,   366,   382,    57,   182,   320,   193,   375,   328,
     454,   455,   393,   307,   394,   387,   169,   170,   115,   340,
     123,   141,   194,   234,   197,   117,   336,   195,   201,   355,
     187,   338,   276,    55,   188,   188,   247,   274,    56,    56,
     370,    56,   113,   177,   178,   339,   354,   338,   281,   273,
     274,   188,   344,   345,   359,   368,   369,   196,   159,   160,
     161,   400,   402,   404,   346,   274,   371,   275,   353,   367,
     261,   262,   263,   264,   265,   266,   267,   268,   269,   270,
       9,    10,    11,   447,   274,   123,   442,   434,   312,   197,
     128,   140,   123,   449,   274,   389,   322,   364,   324,   365,
     136,   289,   290,   291,   292,   330,   451,   274,   113,   459,
     460,   203,   488,   274,   122,   490,   274,   325,   392,   331,
     396,   326,   398,   340,   492,   274,   162,    56,   197,   374,
     163,   327,   164,   380,   285,   286,   386,   115,   470,   329,
     420,   332,   201,   342,   117,   343,   234,   271,   358,   348,
     407,   287,   288,   113,   367,   367,   197,   442,   293,   294,
     349,   203,   360,   361,   123,   362,   427,   251,   197,   363,
     372,   373,   415,   376,   234,   416,   377,   388,   100,   234,
     100,   390,   405,   397,   409,   203,   413,   414,   475,   417,
     477,   479,   201,   444,   426,   445,   418,   428,   431,   432,
     429,   452,   435,   430,   436,   441,   440,   446,   433,   148,
     150,   151,   439,   448,   450,   197,   201,   453,   486,   456,
     457,   458,   461,   487,   494,   464,   465,   463,   100,   466,
     469,   484,   485,   296,   115,   295,   481,   203,   297,   199,
     298,   117,   299,   244,   142,   471,   419,   472,   412,   473,
     425,   395,    71,     0,     0,     0,   203,     0,     0,   467,
       0,     0,   468,     0,   483,     0,     0,     0,   201,     0,
     100,     0,     0,     0,   489,     0,   491,     0,     0,     0,
       0,     0,     0,   480,   493,     0,   482,   201,   495,     0,
     496,     0,     0,   100,   100,   100,   100,   100,   100,   100,
     100,   100,   100,   100,   100,   100,   100,   100,   100,   100,
     100,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   100,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   204,     0,   205,    78,
      79,    80,    81,    82,     0,    83,    84,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   100,     2,    85,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,     0,   100,   206,   207,   208,     0,   209,   210,   211,
     212,   213,   214,   215,   216,    27,    86,    28,    87,    29,
      30,    31,    88,     0,     0,     0,     0,     0,     0,    89,
      90,    91,    92,    93,    94,     0,     0,     0,     0,     0,
     100,     0,     0,   217,    49,   145,     2,     0,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,   205,    78,    79,    80,    81,    82,     0,    83,
      84,     0,     0,     0,     0,   100,    27,     0,    28,     0,
      29,     0,    31,     0,   381,     0,     0,     0,   100,     2,
      85,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,     0,     0,   206,   207,   208,
       0,   209,   210,   211,   212,   213,   214,   215,   216,    27,
      86,    28,    87,    29,    30,    31,    88,     0,     0,     0,
       0,     0,     0,    89,    90,    91,    92,    93,    94,     0,
       0,     0,     0,     0,     0,     0,     0,   217,    49,   145,
     406,     0,    77,    78,    79,    80,    81,    82,     0,    83,
      84,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     2,
      85,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    27,
      86,    28,    87,    29,    30,    31,    88,     0,     0,     0,
       0,     0,     0,    89,    90,    91,    92,    93,    94,     0,
       0,    77,    78,    79,    80,    81,    82,   217,    83,    84,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    85,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   205,    78,    79,    80,    81,    82,
       0,    83,    84,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    86,
       0,    87,    85,     0,     0,    88,     0,     0,     0,   313,
       0,   314,    89,    90,    91,    92,    93,    94,    77,    78,
      79,    80,    81,    82,     0,    83,    84,    49,   145,   206,
     207,   208,     0,   209,   210,   211,   212,   213,   214,   215,
     216,     0,    86,     0,    87,     0,    85,     0,    88,     0,
       0,     0,     0,     0,     0,    89,    90,    91,    92,    93,
      94,     0,     0,     0,     0,     0,     0,     0,     0,   217,
      49,     0,     0,     0,     0,     0,     0,    77,    78,    79,
      80,    81,    82,     0,    83,    84,    86,     0,    87,     0,
       0,     0,    88,     0,     0,     0,   313,     0,   314,    89,
      90,    91,    92,    93,    94,    85,     0,     0,    77,    78,
      79,    80,    81,    82,    49,    83,    84,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    77,    78,    79,
      80,    81,    82,     0,    83,    84,    85,     0,     0,     0,
       0,     0,     0,     0,     0,    86,     0,    87,     0,     0,
       0,    88,     0,     0,     0,    85,     0,     0,    89,    90,
      91,    92,    93,    94,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    49,     0,     0,    86,     0,    87,     0,
       0,     0,    88,     0,     0,     0,     0,     0,     0,    89,
      90,    91,    92,    93,    94,    86,     0,    87,     0,     0,
       0,    88,     0,   333,     0,     0,     0,     0,    89,    90,
      91,    92,    93,    94,   399,     0,    77,    78,    79,    80,
      81,    82,   217,    83,    84,     0,     0,     0,     0,     0,
       0,     0,     0,   401,     0,    77,    78,    79,    80,    81,
      82,     0,    83,    84,    85,     0,     0,     0,     0,     0,
       0,     0,   403,     0,    77,    78,    79,    80,    81,    82,
       0,    83,    84,    85,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    85,     0,    86,     0,    87,     0,     0,     0,
      88,     0,     0,     0,     0,     0,     0,    89,    90,    91,
      92,    93,    94,    86,     0,    87,     0,     0,     0,    88,
       0,     0,     0,     0,     0,     0,    89,    90,    91,    92,
      93,    94,    86,     0,    87,     0,     0,     0,    88,     0,
       0,     0,     0,     0,     0,    89,    90,    91,    92,    93,
      94,   474,     0,    77,    78,    79,    80,    81,    82,     0,
      83,    84,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     2,     0,     0,     0,     0,     0,
       0,    85,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
       0,     0,     0,     0,     0,    77,    78,    79,    80,    81,
      82,     0,    83,    84,     0,     0,    28,     0,     0,    30,
       0,    86,     0,    87,     0,     0,     0,    88,     0,     0,
       0,     0,     2,    85,    89,    90,    91,    92,    93,    94,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,     0,     0,
       0,     0,     0,     0,    77,    78,    79,    80,    81,    82,
       0,    83,    84,    86,    28,    87,     0,     0,     0,    88,
       0,     0,     0,     0,     0,     0,    89,    90,    91,    92,
      93,    94,    85,     0,     2,   239,     0,     0,     0,     9,
      10,    11,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
       0,     0,     0,    77,    78,    79,    80,    81,    82,     0,
      83,    84,    86,   122,    87,     0,    28,     0,    88,    30,
       0,     0,     0,   240,     0,    89,   241,    91,    92,    93,
      94,    85,     0,     0,   304,     0,     0,     0,     9,    10,
      11,     0,     0,     0,   145,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    77,    78,    79,    80,    81,    82,     0,    83,
      84,    86,   122,    87,     0,     0,     0,    88,     0,     0,
       0,     0,   305,     0,    89,   306,    91,    92,    93,    94,
      85,     0,     2,   350,     0,     0,     0,     9,    10,    11,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,     0,     0,
       0,    77,    78,    79,    80,    81,    82,     0,    83,    84,
      86,   122,    87,     0,    28,     0,    88,     0,     0,     0,
       0,   351,     0,    89,   352,    91,    92,    93,    94,    85,
       0,     0,   378,     0,     0,     0,     9,    10,    11,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      77,    78,    79,    80,    81,    82,     0,    83,    84,    86,
     122,    87,     0,     0,     0,    88,     0,     0,     0,     0,
     379,     0,    89,    90,    91,    92,    93,    94,    85,     0,
       0,   383,     0,     0,     0,     9,    10,    11,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    77,
      78,    79,    80,    81,    82,     0,    83,    84,    86,   122,
      87,     0,     0,     0,    88,     0,     0,     0,     0,   384,
       0,    89,   385,    91,    92,    93,    94,    85,     0,     0,
     437,     0,     0,     0,     9,    10,    11,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    77,    78,    79,    80,    81,    82,     0,    83,    84,
       0,     0,     0,     0,     0,     0,     0,    86,   122,    87,
       0,     0,     0,    88,     0,     0,     0,     0,   438,    85,
      89,    90,    91,    92,    93,    94,     9,    10,    11,    77,
      78,    79,    80,    81,    82,     0,    83,    84,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    85,     0,    86,
     122,    87,     0,     0,     0,    88,     0,     0,     0,     0,
       0,     0,    89,    90,    91,    92,    93,    94,    77,    78,
      79,    80,    81,    82,     0,    83,    84,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    86,     0,    87,
       0,     0,     0,    88,   277,     0,    85,     0,     0,     0,
      89,    90,    91,    92,    93,    94,    77,    78,    79,    80,
      81,    82,     0,    83,    84,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    85,     0,    86,     0,    87,     0,
       0,     0,    88,   476,     0,     0,     0,     0,     0,    89,
      90,    91,    92,    93,    94,    77,    78,    79,    80,    81,
      82,     0,    83,    84,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    86,     0,    87,     0,     0,     0,
      88,   478,     0,    85,     0,     0,     0,    89,    90,    91,
      92,    93,    94,    77,    78,    79,    80,    81,    82,     0,
      83,    84,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    85,     0,    86,     0,    87,     0,     0,     0,    88,
       0,     0,     0,     0,     0,     0,    89,    90,    91,    92,
      93,    94,    77,    78,    79,    80,    81,    82,     0,    83,
      84,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    86,     0,    87,     0,     0,     0,   147,     0,     0,
      85,     0,     2,     0,    89,    90,    91,    92,    93,    94,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,     0,     0,
       0,   421,    54,     0,     0,     0,     0,     0,     0,     0,
      86,     0,    87,     0,    28,     0,   149,     0,     0,     0,
       0,     0,     0,    89,    90,    91,    92,    93,    94,     2,
       0,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    70,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    27,
       0,    28,     0,    29,     0,    31,   338,   301,     0,     0,
     188,     0,     0,     0,    56,     2,     0,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,     1,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    27,     0,    28,     0,    29,
      30,    31,     0,     0,     0,     0,     0,     0,     0,     0,
       2,     0,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,   232,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      27,     0,    28,     0,    29,    30,    31,     0,     0,     0,
       0,     0,     0,     2,     0,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    27,     0,    28,     0,    29,     0,    31,
       2,   233,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      27,     0,    28,     0,    29,    30,    31,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   128,     2,    49,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    27,     0,
      28,     0,    29,    30,    31,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     2,    49,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    27,     0,    28,     0,
      29,     0,    31,   187,   301,     0,     0,   188,     0,     0,
       2,    56,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,   411,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      27,     0,    28,     0,    29,     2,    31,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    27,     0,    28,     0,    29,
       0,    31
};

static const yytype_int16 yycheck[] =
{
      26,     0,    62,   128,    88,    51,    52,   134,   101,   189,
     116,    37,    51,    52,   144,    53,     0,    56,     3,   135,
      66,    56,    48,    66,    33,    79,    51,    66,    53,   138,
      19,     3,    79,     3,    79,     3,    98,     3,    79,    65,
      51,    52,    88,    60,   204,    44,   100,    79,    77,    88,
      34,    35,    81,   100,   391,   100,    40,    41,    42,   100,
      44,    60,    77,   147,   224,   149,    98,    14,    15,   115,
      77,   117,   188,   166,   167,   168,   115,    88,   117,   163,
       3,   116,    85,    12,    13,    79,   125,    90,    91,     3,
     125,   137,   138,    66,   137,   138,   135,    77,   137,   138,
     184,   147,   128,   149,    98,   143,   152,    96,   147,    77,
     149,    77,   329,   152,   132,   100,   133,   126,   143,    85,
     138,   130,   252,   239,   142,   462,   144,    99,   234,    99,
      99,   140,   216,   128,   133,   244,   147,     3,   149,     3,
     135,   152,   115,     3,   117,    92,    93,    79,    97,   188,
     134,    79,   187,     3,    77,    77,    77,    80,   153,    81,
     340,    77,    85,    77,   137,   138,    98,   162,   206,    77,
      98,    85,    84,    81,    94,    98,    95,   203,    81,    78,
      83,   206,   275,   310,    98,    18,   204,    78,   304,   211,
     407,   408,   317,   188,    97,   311,    86,    87,   244,   234,
     239,   244,    78,   187,   243,   244,   224,    79,   203,   247,
      77,    77,     3,    77,    81,    81,    80,    79,    85,    85,
      82,    85,   247,    16,    17,   234,   244,    77,     3,    78,
      79,    81,    78,    79,   252,    78,    79,    78,     9,    10,
      11,   325,   326,   327,   239,    79,    80,    78,   243,   275,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      38,    39,    40,    78,    79,   304,   391,   383,     6,   308,
      97,   244,   311,    78,    79,   313,    80,   272,    80,   274,
     340,   173,   174,   175,   176,     3,    78,    79,   313,    78,
      79,   317,    78,    79,    72,    78,    79,    77,   316,    98,
     322,    77,   324,   338,    78,    79,    77,    85,   347,   304,
      81,    77,    83,   308,   169,   170,   311,   363,   443,    77,
     358,    98,   317,    78,   363,    79,   310,    97,    80,    82,
     329,   171,   172,   358,   360,   361,   375,   462,   177,   178,
      82,   367,    78,    78,   383,    78,   371,   356,   387,    79,
      78,    78,   347,    82,   338,   350,    82,    78,    51,   343,
      53,     3,    63,    80,    98,   391,     3,    82,   452,    82,
     454,   455,   367,   391,   369,   397,    82,    82,    82,    78,
     375,    77,    82,   378,    82,    82,    98,    78,   383,    82,
      83,    84,   387,    78,    78,   434,   391,    78,    61,    82,
      82,    80,    80,    78,    98,    82,    82,   425,   101,    82,
      82,    82,    82,   180,   460,   179,   460,   443,   181,   126,
     182,   460,   183,   137,    72,   447,   356,   449,   343,   451,
     367,   318,    44,    -1,    -1,    -1,   462,    -1,    -1,   434,
      -1,    -1,   437,    -1,   462,    -1,    -1,    -1,   443,    -1,
     143,    -1,    -1,    -1,   476,    -1,   478,    -1,    -1,    -1,
      -1,    -1,    -1,   458,   486,    -1,   461,   462,   490,    -1,
     492,    -1,    -1,   166,   167,   168,   169,   170,   171,   172,
     173,   174,   175,   176,   177,   178,   179,   180,   181,   182,
     183,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   206,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     1,    -1,     3,     4,
       5,     6,     7,     8,    -1,    10,    11,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   247,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    -1,   275,    58,    59,    60,    -1,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    -1,    -1,    -1,    -1,    -1,    -1,    84,
      85,    86,    87,    88,    89,    -1,    -1,    -1,    -1,    -1,
     313,    -1,    -1,    98,    99,   100,    30,    -1,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,     3,     4,     5,     6,     7,     8,    -1,    10,
      11,    -1,    -1,    -1,    -1,   358,    70,    -1,    72,    -1,
      74,    -1,    76,    -1,    78,    -1,    -1,    -1,   371,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    -1,    -1,    58,    59,    60,
      -1,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    -1,    -1,    -1,
      -1,    -1,    -1,    84,    85,    86,    87,    88,    89,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    98,    99,   100,
       1,    -1,     3,     4,     5,     6,     7,     8,    -1,    10,
      11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    70,
      71,    72,    73,    74,    75,    76,    77,    -1,    -1,    -1,
      -1,    -1,    -1,    84,    85,    86,    87,    88,    89,    -1,
      -1,     3,     4,     5,     6,     7,     8,    98,    10,    11,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    31,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     3,     4,     5,     6,     7,     8,
      -1,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    71,
      -1,    73,    31,    -1,    -1,    77,    -1,    -1,    -1,    81,
      -1,    83,    84,    85,    86,    87,    88,    89,     3,     4,
       5,     6,     7,     8,    -1,    10,    11,    99,   100,    58,
      59,    60,    -1,    62,    63,    64,    65,    66,    67,    68,
      69,    -1,    71,    -1,    73,    -1,    31,    -1,    77,    -1,
      -1,    -1,    -1,    -1,    -1,    84,    85,    86,    87,    88,
      89,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    98,
      99,    -1,    -1,    -1,    -1,    -1,    -1,     3,     4,     5,
       6,     7,     8,    -1,    10,    11,    71,    -1,    73,    -1,
      -1,    -1,    77,    -1,    -1,    -1,    81,    -1,    83,    84,
      85,    86,    87,    88,    89,    31,    -1,    -1,     3,     4,
       5,     6,     7,     8,    99,    10,    11,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,     4,     5,
       6,     7,     8,    -1,    10,    11,    31,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    71,    -1,    73,    -1,    -1,
      -1,    77,    -1,    -1,    -1,    31,    -1,    -1,    84,    85,
      86,    87,    88,    89,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    99,    -1,    -1,    71,    -1,    73,    -1,
      -1,    -1,    77,    -1,    -1,    -1,    -1,    -1,    -1,    84,
      85,    86,    87,    88,    89,    71,    -1,    73,    -1,    -1,
      -1,    77,    -1,    98,    -1,    -1,    -1,    -1,    84,    85,
      86,    87,    88,    89,     1,    -1,     3,     4,     5,     6,
       7,     8,    98,    10,    11,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     1,    -1,     3,     4,     5,     6,     7,
       8,    -1,    10,    11,    31,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     1,    -1,     3,     4,     5,     6,     7,     8,
      -1,    10,    11,    31,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    31,    -1,    71,    -1,    73,    -1,    -1,    -1,
      77,    -1,    -1,    -1,    -1,    -1,    -1,    84,    85,    86,
      87,    88,    89,    71,    -1,    73,    -1,    -1,    -1,    77,
      -1,    -1,    -1,    -1,    -1,    -1,    84,    85,    86,    87,
      88,    89,    71,    -1,    73,    -1,    -1,    -1,    77,    -1,
      -1,    -1,    -1,    -1,    -1,    84,    85,    86,    87,    88,
      89,     1,    -1,     3,     4,     5,     6,     7,     8,    -1,
      10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    30,    -1,    -1,    -1,    -1,    -1,
      -1,    31,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      -1,    -1,    -1,    -1,    -1,     3,     4,     5,     6,     7,
       8,    -1,    10,    11,    -1,    -1,    72,    -1,    -1,    75,
      -1,    71,    -1,    73,    -1,    -1,    -1,    77,    -1,    -1,
      -1,    -1,    30,    31,    84,    85,    86,    87,    88,    89,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    -1,    -1,
      -1,    -1,    -1,    -1,     3,     4,     5,     6,     7,     8,
      -1,    10,    11,    71,    72,    73,    -1,    -1,    -1,    77,
      -1,    -1,    -1,    -1,    -1,    -1,    84,    85,    86,    87,
      88,    89,    31,    -1,    30,    34,    -1,    -1,    -1,    38,
      39,    40,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      -1,    -1,    -1,     3,     4,     5,     6,     7,     8,    -1,
      10,    11,    71,    72,    73,    -1,    72,    -1,    77,    75,
      -1,    -1,    -1,    82,    -1,    84,    85,    86,    87,    88,
      89,    31,    -1,    -1,    34,    -1,    -1,    -1,    38,    39,
      40,    -1,    -1,    -1,   100,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     3,     4,     5,     6,     7,     8,    -1,    10,
      11,    71,    72,    73,    -1,    -1,    -1,    77,    -1,    -1,
      -1,    -1,    82,    -1,    84,    85,    86,    87,    88,    89,
      31,    -1,    30,    34,    -1,    -1,    -1,    38,    39,    40,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    -1,    -1,
      -1,     3,     4,     5,     6,     7,     8,    -1,    10,    11,
      71,    72,    73,    -1,    72,    -1,    77,    -1,    -1,    -1,
      -1,    82,    -1,    84,    85,    86,    87,    88,    89,    31,
      -1,    -1,    34,    -1,    -1,    -1,    38,    39,    40,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       3,     4,     5,     6,     7,     8,    -1,    10,    11,    71,
      72,    73,    -1,    -1,    -1,    77,    -1,    -1,    -1,    -1,
      82,    -1,    84,    85,    86,    87,    88,    89,    31,    -1,
      -1,    34,    -1,    -1,    -1,    38,    39,    40,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,
       4,     5,     6,     7,     8,    -1,    10,    11,    71,    72,
      73,    -1,    -1,    -1,    77,    -1,    -1,    -1,    -1,    82,
      -1,    84,    85,    86,    87,    88,    89,    31,    -1,    -1,
      34,    -1,    -1,    -1,    38,    39,    40,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     3,     4,     5,     6,     7,     8,    -1,    10,    11,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    71,    72,    73,
      -1,    -1,    -1,    77,    -1,    -1,    -1,    -1,    82,    31,
      84,    85,    86,    87,    88,    89,    38,    39,    40,     3,
       4,     5,     6,     7,     8,    -1,    10,    11,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    31,    -1,    71,
      72,    73,    -1,    -1,    -1,    77,    -1,    -1,    -1,    -1,
      -1,    -1,    84,    85,    86,    87,    88,    89,     3,     4,
       5,     6,     7,     8,    -1,    10,    11,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    71,    -1,    73,
      -1,    -1,    -1,    77,    78,    -1,    31,    -1,    -1,    -1,
      84,    85,    86,    87,    88,    89,     3,     4,     5,     6,
       7,     8,    -1,    10,    11,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    31,    -1,    71,    -1,    73,    -1,
      -1,    -1,    77,    78,    -1,    -1,    -1,    -1,    -1,    84,
      85,    86,    87,    88,    89,     3,     4,     5,     6,     7,
       8,    -1,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    71,    -1,    73,    -1,    -1,    -1,
      77,    78,    -1,    31,    -1,    -1,    -1,    84,    85,    86,
      87,    88,    89,     3,     4,     5,     6,     7,     8,    -1,
      10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    31,    -1,    71,    -1,    73,    -1,    -1,    -1,    77,
      -1,    -1,    -1,    -1,    -1,    -1,    84,    85,    86,    87,
      88,    89,     3,     4,     5,     6,     7,     8,    -1,    10,
      11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    71,    -1,    73,    -1,    -1,    -1,    77,    -1,    -1,
      31,    -1,    30,    -1,    84,    85,    86,    87,    88,    89,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    -1,    -1,
      -1,    59,     3,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      71,    -1,    73,    -1,    72,    -1,    77,    -1,    -1,    -1,
      -1,    -1,    -1,    84,    85,    86,    87,    88,    89,    30,
      -1,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,     0,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    70,
      -1,    72,    -1,    74,    -1,    76,    77,    78,    -1,    -1,
      81,    -1,    -1,    -1,    85,    30,    -1,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,     1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    70,    -1,    72,    -1,    74,
      75,    76,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      30,    -1,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,     3,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      70,    -1,    72,    -1,    74,    75,    76,    -1,    -1,    -1,
      -1,    -1,    -1,    30,    -1,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    70,    -1,    72,    -1,    74,    -1,    76,
      30,    78,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      70,    -1,    72,    -1,    74,    75,    76,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    97,    30,    99,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    70,    -1,
      72,    -1,    74,    75,    76,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    30,    99,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    70,    -1,    72,    -1,
      74,    -1,    76,    77,    78,    -1,    -1,    81,    -1,    -1,
      30,    85,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      70,    -1,    72,    -1,    74,    30,    76,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    70,    -1,    72,    -1,    74,
      -1,    76
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     1,    30,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    70,    72,    74,
      75,    76,   129,   130,   133,   134,   135,   136,   142,   145,
     146,   147,   148,   165,   177,   178,   179,    98,     3,    99,
     169,    77,    77,    77,     3,    77,    85,    98,   131,   132,
     149,   150,   151,   130,   130,     3,   169,   130,   130,   130,
       0,   178,   169,     3,   104,   143,   144,     3,     4,     5,
       6,     7,     8,    10,    11,    31,    71,    73,    77,    84,
      85,    86,    87,    88,    89,   102,   103,   105,   106,   109,
     111,   112,   113,   114,   115,   116,   117,   118,   119,   120,
     121,   122,   123,   124,   128,   134,   139,   146,   157,   157,
     128,   149,    72,   146,   151,   152,    79,    98,    97,   129,
     130,   168,   169,   180,    77,    81,   150,   169,   137,   138,
     139,   165,   143,    97,    79,   100,   170,    77,   111,    77,
     111,   111,    77,    77,   111,   124,   125,   127,   157,     9,
      10,    11,    77,    81,    83,   113,    85,    90,    91,    86,
      87,    12,    13,    14,    15,    92,    93,    16,    17,    84,
      94,    95,    18,    19,    96,    78,   139,    77,    81,   151,
     158,   159,   139,    78,    78,    79,    78,   146,   151,   132,
     149,   125,   160,   169,     1,     3,    58,    59,    60,    62,
      63,    64,    65,    66,    67,    68,    69,    98,   127,   129,
     166,   167,   168,   170,   171,   172,   173,   174,   175,   176,
     129,   168,     3,    78,   130,   153,   154,   155,   156,    34,
      82,    85,   125,   152,   137,   138,   170,    80,    98,   140,
     141,   149,    79,   170,   128,   144,   170,   157,   157,   157,
     125,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    97,   126,    78,    79,    78,     3,    78,   110,   125,
     127,     3,   113,   113,   113,   114,   114,   115,   115,   116,
     116,   116,   116,   117,   117,   118,   119,   120,   121,   122,
     127,    78,   153,   158,    34,    82,    85,   125,   152,   159,
      77,    81,     6,    81,    83,   160,   161,   162,   163,   164,
     170,   172,    80,   128,    80,    77,    77,    77,   166,    77,
       3,    98,    98,    98,   127,    98,   170,   172,    77,   149,
     151,   158,    78,    79,    78,    79,   125,   152,    82,    82,
      34,    82,    85,   125,   170,   128,    79,    98,    80,   170,
      78,    78,    78,    79,   125,   125,   113,   169,    78,    79,
      82,    80,    78,    78,   125,   152,    82,    82,    34,    82,
     125,    78,   153,    34,    82,    85,   125,   152,    78,   128,
       3,    79,   170,   160,    97,   164,   166,    80,   166,     1,
     127,     1,   127,     1,   127,    63,     1,   129,   173,    98,
      98,    56,   155,     3,    82,   125,   125,    82,    82,   141,
     128,    59,   107,   108,   157,   161,   125,   124,    82,   125,
     125,    82,    78,   125,   152,    82,    82,    34,    82,   125,
      98,    82,   160,   162,   170,   166,    78,    78,    78,    78,
      78,    78,    77,    78,   173,   173,    82,    82,    80,    78,
      79,    80,    79,   170,    82,    82,    82,   125,   125,    82,
     160,   166,   166,   166,     1,   127,    78,   127,    78,   127,
     125,   108,   125,   170,    82,    82,    61,    78,    78,   166,
      78,   166,    78,   166,    98,   166,   166
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_uint8 yyr1[] =
{
       0,   101,   102,   102,   102,   102,   103,   103,   103,   104,
     105,   105,   106,   107,   107,   108,   108,   109,   109,   109,
     109,   109,   109,   109,   109,   109,   109,   109,   110,   110,
     111,   111,   111,   111,   111,   111,   111,   112,   112,   112,
     112,   112,   112,   113,   113,   114,   114,   114,   114,   115,
     115,   115,   116,   116,   116,   117,   117,   117,   117,   117,
     118,   118,   118,   119,   119,   120,   120,   121,   121,   122,
     122,   123,   123,   124,   124,   125,   125,   126,   126,   126,
     126,   126,   126,   126,   126,   126,   126,   126,   127,   127,
     128,   129,   129,   129,   130,   130,   130,   130,   130,   130,
     130,   130,   130,   130,   131,   131,   132,   132,   133,   133,
     133,   133,   133,   133,   134,   134,   134,   134,   134,   134,
     134,   134,   134,   134,   134,   134,   134,   134,   134,   134,
     135,   135,   135,   136,   136,   137,   137,   138,   138,   138,
     139,   139,   139,   139,   140,   140,   141,   141,   141,   142,
     142,   142,   142,   142,   143,   143,   144,   144,   145,   146,
     146,   146,   146,   147,   147,   148,   148,   149,   149,   150,
     150,   150,   150,   150,   150,   150,   150,   150,   150,   150,
     150,   150,   150,   151,   151,   151,   151,   152,   152,   153,
     153,   154,   154,   155,   155,   155,   156,   156,   157,   157,
     158,   158,   158,   159,   159,   159,   159,   159,   159,   159,
     159,   159,   159,   159,   159,   159,   159,   159,   159,   159,
     159,   159,   159,   159,   160,   160,   160,   161,   161,   161,
     161,   162,   163,   163,   164,   164,   165,   166,   166,   166,
     166,   166,   166,   167,   167,   167,   168,   168,   168,   169,
     170,   171,   171,   171,   172,   172,   173,   173,   174,   174,
     174,   174,   174,   175,   175,   175,   175,   175,   175,   175,
     175,   175,   176,   176,   176,   176,   176,   177,   177,   177,
     178,   178,   179,   179,   180,   180
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     3,     1,     1,     1,     1,     1,
       1,     1,     6,     1,     3,     3,     3,     1,     1,     4,
       3,     4,     3,     3,     2,     2,     6,     7,     1,     3,
       1,     2,     2,     2,     2,     4,     4,     1,     1,     1,
       1,     1,     1,     1,     4,     1,     3,     3,     3,     1,
       3,     3,     1,     3,     3,     1,     3,     3,     3,     3,
       1,     3,     3,     1,     3,     1,     3,     1,     3,     1,
       3,     1,     3,     1,     5,     1,     3,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     3,
       1,     2,     3,     1,     2,     1,     2,     1,     2,     1,
       2,     1,     2,     1,     1,     3,     3,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       4,     5,     2,     1,     1,     1,     2,     2,     3,     1,
       2,     1,     2,     1,     1,     3,     2,     3,     1,     4,
       5,     5,     6,     2,     1,     3,     3,     1,     4,     1,
       1,     1,     1,     1,     1,     4,     4,     2,     1,     1,
       3,     3,     4,     6,     5,     5,     6,     5,     4,     4,
       4,     3,     4,     3,     2,     2,     1,     1,     2,     3,
       1,     1,     3,     2,     2,     1,     1,     3,     2,     1,
       2,     1,     1,     3,     2,     3,     5,     4,     5,     4,
       3,     3,     3,     4,     6,     5,     5,     6,     4,     4,
       2,     3,     3,     4,     3,     4,     1,     2,     1,     4,
       3,     2,     1,     2,     3,     2,     7,     1,     1,     1,
       1,     1,     1,     3,     4,     3,     2,     3,     3,     1,
       1,     1,     2,     2,     1,     1,     1,     2,     7,     5,
       4,     5,     4,     5,     4,     7,     6,     6,     4,     7,
       6,     7,     3,     2,     2,     2,     3,     1,     2,     2,
       1,     1,     4,     3,     1,     2
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

/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)                                \
    do                                                                  \
      if (N)                                                            \
        {                                                               \
          (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;        \
          (Current).first_column = YYRHSLOC (Rhs, 1).first_column;      \
          (Current).last_line    = YYRHSLOC (Rhs, N).last_line;         \
          (Current).last_column  = YYRHSLOC (Rhs, N).last_column;       \
        }                                                               \
      else                                                              \
        {                                                               \
          (Current).first_line   = (Current).last_line   =              \
            YYRHSLOC (Rhs, 0).last_line;                                \
          (Current).first_column = (Current).last_column =              \
            YYRHSLOC (Rhs, 0).last_column;                              \
        }                                                               \
    while (0)
#endif

#define YYRHSLOC(Rhs, K) ((Rhs)[K])


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


/* YYLOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

# ifndef YYLOCATION_PRINT

#  if defined YY_LOCATION_PRINT

   /* Temporary convenience wrapper in case some people defined the
      undocumented and private YY_LOCATION_PRINT macros.  */
#   define YYLOCATION_PRINT(File, Loc)  YY_LOCATION_PRINT(File, *(Loc))

#  elif defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL

/* Print *YYLOCP on YYO.  Private, do not rely on its existence. */

YY_ATTRIBUTE_UNUSED
static int
yy_location_print_ (FILE *yyo, YYLTYPE const * const yylocp)
{
  int res = 0;
  int end_col = 0 != yylocp->last_column ? yylocp->last_column - 1 : 0;
  if (0 <= yylocp->first_line)
    {
      res += YYFPRINTF (yyo, "%d", yylocp->first_line);
      if (0 <= yylocp->first_column)
        res += YYFPRINTF (yyo, ".%d", yylocp->first_column);
    }
  if (0 <= yylocp->last_line)
    {
      if (yylocp->first_line < yylocp->last_line)
        {
          res += YYFPRINTF (yyo, "-%d", yylocp->last_line);
          if (0 <= end_col)
            res += YYFPRINTF (yyo, ".%d", end_col);
        }
      else if (0 <= end_col && yylocp->first_column < end_col)
        res += YYFPRINTF (yyo, "-%d", end_col);
    }
  return res;
}

#   define YYLOCATION_PRINT  yy_location_print_

    /* Temporary convenience wrapper in case some people defined the
       undocumented and private YY_LOCATION_PRINT macros.  */
#   define YY_LOCATION_PRINT(File, Loc)  YYLOCATION_PRINT(File, &(Loc))

#  else

#   define YYLOCATION_PRINT(File, Loc) ((void) 0)
    /* Temporary convenience wrapper in case some people defined the
       undocumented and private YY_LOCATION_PRINT macros.  */
#   define YY_LOCATION_PRINT  YYLOCATION_PRINT

#  endif
# endif /* !defined YYLOCATION_PRINT */


# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value, Location); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  YY_USE (yylocationp);
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
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  YYLOCATION_PRINT (yyo, yylocationp);
  YYFPRINTF (yyo, ": ");
  yy_symbol_value_print (yyo, yykind, yyvaluep, yylocationp);
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp, YYLTYPE *yylsp,
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
                       &yyvsp[(yyi + 1) - (yynrhs)],
                       &(yylsp[(yyi + 1) - (yynrhs)]));
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, yylsp, Rule); \
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


/* Context of a parse error.  */
typedef struct
{
  yy_state_t *yyssp;
  yysymbol_kind_t yytoken;
  YYLTYPE *yylloc;
} yypcontext_t;

/* Put in YYARG at most YYARGN of the expected tokens given the
   current YYCTX, and return the number of tokens stored in YYARG.  If
   YYARG is null, return the number of expected tokens (guaranteed to
   be less than YYNTOKENS).  Return YYENOMEM on memory exhaustion.
   Return 0 if there are more than YYARGN expected tokens, yet fill
   YYARG up to YYARGN. */
static int
yypcontext_expected_tokens (const yypcontext_t *yyctx,
                            yysymbol_kind_t yyarg[], int yyargn)
{
  /* Actual size of YYARG. */
  int yycount = 0;
  int yyn = yypact[+*yyctx->yyssp];
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
        if (yycheck[yyx + yyn] == yyx && yyx != YYSYMBOL_YYerror
            && !yytable_value_is_error (yytable[yyx + yyn]))
          {
            if (!yyarg)
              ++yycount;
            else if (yycount == yyargn)
              return 0;
            else
              yyarg[yycount++] = YY_CAST (yysymbol_kind_t, yyx);
          }
    }
  if (yyarg && yycount == 0 && 0 < yyargn)
    yyarg[0] = YYSYMBOL_YYEMPTY;
  return yycount;
}




/* The kind of the lookahead of this context.  */
static yysymbol_kind_t
yypcontext_token (const yypcontext_t *yyctx) YY_ATTRIBUTE_UNUSED;

static yysymbol_kind_t
yypcontext_token (const yypcontext_t *yyctx)
{
  return yyctx->yytoken;
}

/* The location of the lookahead of this context.  */
static YYLTYPE *
yypcontext_location (const yypcontext_t *yyctx) YY_ATTRIBUTE_UNUSED;

static YYLTYPE *
yypcontext_location (const yypcontext_t *yyctx)
{
  return yyctx->yylloc;
}

/* User defined function to report a syntax error.  */
static int
yyreport_syntax_error (const yypcontext_t *yyctx);

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep, YYLTYPE *yylocationp)
{
  YY_USE (yyvaluep);
  YY_USE (yylocationp);
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
/* Location data for the lookahead symbol.  */
YYLTYPE yylloc
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
  = { 1, 1, 1, 1 }
# endif
;
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

    /* The location stack: array, bottom, top.  */
    YYLTYPE yylsa[YYINITDEPTH];
    YYLTYPE *yyls = yylsa;
    YYLTYPE *yylsp = yyls;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;
  YYLTYPE yyloc;

  /* The locations where the error started and ended.  */
  YYLTYPE yyerror_range[3];



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N), yylsp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */

  yylsp[0] = yylloc;
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
        YYLTYPE *yyls1 = yyls;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yyls1, yysize * YYSIZEOF (*yylsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
        yyls = yyls1;
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
        YYSTACK_RELOCATE (yyls_alloc, yyls);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;
      yylsp = yyls + yysize - 1;

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
      yyerror_range[1] = yylloc;
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
  *++yylsp = yylloc;

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

  /* Default location. */
  YYLLOC_DEFAULT (yyloc, (yylsp - yylen), yylen);
  yyerror_range[1] = yyloc;
  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 18: /* postfix_expression: IDENTIFIER  */
#line 69 "parser.y"
                     { ck_declaration(yylloc.first_line); }
#line 2221 "parser.tab.c"
    break;

  case 91: /* declaration: declaration_specifiers ';'  */
#line 202 "parser.y"
                                     { fin_declaracion(); }
#line 2227 "parser.tab.c"
    break;

  case 92: /* declaration: declaration_specifiers init_declarator_list ';'  */
#line 203 "parser.y"
                                                          { fin_declaracion(); }
#line 2233 "parser.tab.c"
    break;

  case 114: /* type_specifier: VOID  */
#line 240 "parser.y"
               { guardarTipo(yylloc.first_line); }
#line 2239 "parser.tab.c"
    break;

  case 115: /* type_specifier: CHAR  */
#line 241 "parser.y"
               { guardarTipo(yylloc.first_line); }
#line 2245 "parser.tab.c"
    break;

  case 116: /* type_specifier: SHORT  */
#line 242 "parser.y"
                { guardarTipo(yylloc.first_line); }
#line 2251 "parser.tab.c"
    break;

  case 117: /* type_specifier: INT  */
#line 243 "parser.y"
              { guardarTipo(yylloc.first_line); }
#line 2257 "parser.tab.c"
    break;

  case 118: /* type_specifier: LONG  */
#line 244 "parser.y"
               { guardarTipo(yylloc.first_line); }
#line 2263 "parser.tab.c"
    break;

  case 119: /* type_specifier: FLOAT  */
#line 245 "parser.y"
                { guardarTipo(yylloc.first_line); }
#line 2269 "parser.tab.c"
    break;

  case 120: /* type_specifier: DOUBLE  */
#line 246 "parser.y"
                 { guardarTipo(yylloc.first_line); }
#line 2275 "parser.tab.c"
    break;

  case 121: /* type_specifier: SIGNED  */
#line 247 "parser.y"
                 { guardarTipo(yylloc.first_line); }
#line 2281 "parser.tab.c"
    break;

  case 122: /* type_specifier: UNSIGNED  */
#line 248 "parser.y"
                   { guardarTipo(yylloc.first_line); }
#line 2287 "parser.tab.c"
    break;

  case 123: /* type_specifier: BOOL  */
#line 249 "parser.y"
               { guardarTipo(yylloc.first_line); }
#line 2293 "parser.tab.c"
    break;

  case 124: /* type_specifier: COMPLEX  */
#line 250 "parser.y"
                  { guardarTipo(yylloc.first_line); }
#line 2299 "parser.tab.c"
    break;

  case 169: /* direct_declarator: IDENTIFIER  */
#line 343 "parser.y"
                     { guardarID(yylloc.first_line); }
#line 2305 "parser.tab.c"
    break;

  case 235: /* designator: '.' IDENTIFIER  */
#line 452 "parser.y"
                         { printf("\nVARIABLE A USAR\n"); }
#line 2311 "parser.tab.c"
    break;

  case 248: /* compound_statement: open_scope error close_scope  */
#line 477 "parser.y"
                                       {yyerrok; synErrorFound =1;}
#line 2317 "parser.tab.c"
    break;

  case 249: /* open_scope: '{'  */
#line 481 "parser.y"
              { open_scope(); }
#line 2323 "parser.tab.c"
    break;

  case 250: /* close_scope: '}'  */
#line 485 "parser.y"
              { close_scope(); }
#line 2329 "parser.tab.c"
    break;

  case 253: /* block_item_list: error block_item  */
#line 491 "parser.y"
                           {yyerrok; synErrorFound =1;}
#line 2335 "parser.tab.c"
    break;

  case 260: /* selection_statement: IF '(' error ')'  */
#line 507 "parser.y"
                           {yyerrok; synErrorFound =1;}
#line 2341 "parser.tab.c"
    break;

  case 262: /* selection_statement: SWITCH '(' error ')'  */
#line 509 "parser.y"
                              {yyerrok; synErrorFound =1;}
#line 2347 "parser.tab.c"
    break;

  case 264: /* iteration_statement: WHILE '(' error ')'  */
#line 514 "parser.y"
                              {yyerrok; synErrorFound =1;}
#line 2353 "parser.tab.c"
    break;

  case 266: /* iteration_statement: DO statement WHILE '(' error ')'  */
#line 516 "parser.y"
                                           {yyerrok; synErrorFound =1;}
#line 2359 "parser.tab.c"
    break;

  case 268: /* iteration_statement: FOR '(' error ')'  */
#line 518 "parser.y"
                            {yyerrok; synErrorFound =1;}
#line 2365 "parser.tab.c"
    break;

  case 278: /* translation_unit: error ';'  */
#line 535 "parser.y"
                    {yyerrok; synErrorFound =1;}
#line 2371 "parser.tab.c"
    break;


#line 2375 "parser.tab.c"

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
  *++yylsp = yyloc;

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
      {
        yypcontext_t yyctx
          = {yyssp, yytoken, &yylloc};
        if (yyreport_syntax_error (&yyctx) == 2)
          YYNOMEM;
      }
    }

  yyerror_range[1] = yylloc;
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
                      yytoken, &yylval, &yylloc);
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

      yyerror_range[1] = *yylsp;
      yydestruct ("Error: popping",
                  YY_ACCESSING_SYMBOL (yystate), yyvsp, yylsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  yyerror_range[2] = yylloc;
  ++yylsp;
  YYLLOC_DEFAULT (*yylsp, yyerror_range, 2);

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
                  yytoken, &yylval, &yylloc);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp, yylsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 554 "parser.y"

#include <stdio.h>

int
yyreport_syntax_error (const yypcontext_t *ctx)
{
  int res = 0;
  fprintf(stderr,"Line %d - column %d", yylloc.first_line, yylloc.first_column);
  fprintf (stderr, ": syntax error");
  // Report the tokens expected at this point.
  {
    enum { TOKENMAX = 10 };
    yysymbol_kind_t expected[TOKENMAX];
    int n = yypcontext_expected_tokens (ctx, expected, TOKENMAX);
    if (n < 0)
      // Forward errors to yyparse.
      res = n;
    else
      for (int i = 0; i < n; ++i)
        fprintf (stderr, "%s %s",
                 i == 0 ? ": expected" : " or", yysymbol_name (expected[i]));
  }
  // Report the unexpected token.
  {
    yysymbol_kind_t lookahead = yypcontext_token (ctx);
    if (lookahead != YYSYMBOL_YYEMPTY)
      fprintf (stderr, " before %s", yysymbol_name (lookahead));
  }
  fprintf (stderr, "\n");
  return res;
}

void yyerror(const char *str)
{
    fprintf(stderr,"error: %s in line %d, column %d\n", str, yylloc.first_line, yylloc.first_column);

    fprintf(stderr,"\n");
}

void errorFound()
{
	synErrorFound = 1;
}
