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
  YYSYMBOL_leftpar = 151,                  /* leftpar  */
  YYSYMBOL_pointer = 152,                  /* pointer  */
  YYSYMBOL_type_qualifier_list = 153,      /* type_qualifier_list  */
  YYSYMBOL_parameter_type_list = 154,      /* parameter_type_list  */
  YYSYMBOL_parameter_list = 155,           /* parameter_list  */
  YYSYMBOL_parameter_declaration = 156,    /* parameter_declaration  */
  YYSYMBOL_identifier_list = 157,          /* identifier_list  */
  YYSYMBOL_comma = 158,                    /* comma  */
  YYSYMBOL_type_name = 159,                /* type_name  */
  YYSYMBOL_abstract_declarator = 160,      /* abstract_declarator  */
  YYSYMBOL_direct_abstract_declarator = 161, /* direct_abstract_declarator  */
  YYSYMBOL_initializer = 162,              /* initializer  */
  YYSYMBOL_initializer_list = 163,         /* initializer_list  */
  YYSYMBOL_designation = 164,              /* designation  */
  YYSYMBOL_designator_list = 165,          /* designator_list  */
  YYSYMBOL_designator = 166,               /* designator  */
  YYSYMBOL_static_assert_declaration = 167, /* static_assert_declaration  */
  YYSYMBOL_statement = 168,                /* statement  */
  YYSYMBOL_labeled_statement = 169,        /* labeled_statement  */
  YYSYMBOL_compound_statement = 170,       /* compound_statement  */
  YYSYMBOL_open_scope = 171,               /* open_scope  */
  YYSYMBOL_close_scope = 172,              /* close_scope  */
  YYSYMBOL_block_item_list = 173,          /* block_item_list  */
  YYSYMBOL_block_item = 174,               /* block_item  */
  YYSYMBOL_expression_statement = 175,     /* expression_statement  */
  YYSYMBOL_selection_statement = 176,      /* selection_statement  */
  YYSYMBOL_iteration_statement = 177,      /* iteration_statement  */
  YYSYMBOL_jump_statement = 178,           /* jump_statement  */
  YYSYMBOL_translation_unit = 179,         /* translation_unit  */
  YYSYMBOL_external_declaration = 180,     /* external_declaration  */
  YYSYMBOL_function_definition = 181,      /* function_definition  */
  YYSYMBOL_declaration_list = 182          /* declaration_list  */
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
#define YYLAST   2491

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  101
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  82
/* YYNRULES -- Number of rules.  */
#define YYNRULES  287
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  500

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
     354,   355,   356,   360,   362,   363,   364,   365,   369,   370,
     375,   376,   380,   381,   385,   386,   387,   391,   392,   396,
     398,   399,   403,   404,   405,   409,   410,   411,   412,   413,
     414,   415,   416,   417,   418,   419,   420,   421,   422,   423,
     424,   425,   426,   427,   428,   429,   433,   434,   435,   439,
     440,   441,   442,   446,   450,   451,   455,   456,   460,   464,
     465,   466,   467,   468,   469,   473,   474,   475,   479,   480,
     481,   485,   489,   493,   494,   495,   499,   500,   504,   505,
     509,   510,   511,   512,   513,   517,   518,   519,   520,   521,
     522,   523,   524,   525,   529,   530,   531,   532,   533,   538,
     539,   540,   544,   545,   550,   551,   555,   556
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
  "alignment_specifier", "declarator", "direct_declarator", "leftpar",
  "pointer", "type_qualifier_list", "parameter_type_list",
  "parameter_list", "parameter_declaration", "identifier_list", "comma",
  "type_name", "abstract_declarator", "direct_abstract_declarator",
  "initializer", "initializer_list", "designation", "designator_list",
  "designator", "static_assert_declaration", "statement",
  "labeled_statement", "compound_statement", "open_scope", "close_scope",
  "block_item_list", "block_item", "expression_statement",
  "selection_statement", "iteration_statement", "jump_statement",
  "translation_unit", "external_declaration", "function_definition",
  "declaration_list", YY_NULLPTR
  };
  return yy_sname[yysymbol];
}
#endif

#define YYPACT_NINF (-339)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    2125,   -71,  -339,  -339,  -339,  -339,  -339,  -339,  -339,  -339,
    -339,  -339,  -339,  -339,  -339,  -339,  -339,  -339,  -339,  -339,
    -339,  -339,  -339,  -339,  -339,  -339,    25,   -24,     0,  -339,
       2,  -339,  -339,    65,  2415,  2415,  -339,    26,  -339,  -339,
    2415,  2415,  2415,  -339,  2070,  -339,  -339,  -339,   -54,  -339,
     112,  1287,  1467,  1867,  -339,    43,   213,  -339,   -22,  -339,
    2225,     5,    41,  -339,  -339,   -54,  1229,  -339,  -339,  -339,
    -339,  -339,   112,  -339,    79,   -49,  -339,  -339,  -339,  -339,
    -339,  -339,  1905,  1954,  1954,  -339,   105,   111,  1287,  -339,
    -339,  -339,  -339,  -339,  -339,  -339,  -339,  -339,  -339,   212,
    -339,  1867,  -339,   107,   118,   214,   115,   241,   -11,    97,
      99,   188,    42,  -339,   134,  1467,   179,  1467,   141,   146,
     149,   167,  -339,  -339,  -339,   213,    43,  -339,   981,  -339,
      65,  -339,   560,  2293,  -339,  1346,  2178,     5,  1229,  1349,
    -339,    71,  -339,   -45,  1867,    22,  -339,  -339,  1287,  -339,
    1287,  -339,  -339,  1467,  1867,   210,  -339,  -339,   189,   176,
     258,  -339,  -339,  1731,  1867,   260,  -339,  1867,  1867,  1867,
    1867,  1867,  1867,  1867,  1867,  1867,  1867,  1867,  1867,  1867,
    1867,  1867,  1867,  1867,  1867,  1867,  -339,  -339,  2361,  1405,
      84,  -339,   136,  -339,  -339,  -339,   259,  -339,  -339,  -339,
    -339,   175,  -339,  -339,   894,   686,   200,  1867,   211,   222,
     235,   240,   875,   244,   320,   229,   233,  1000,  -339,    -8,
    -339,  -339,  -339,  -339,  -339,   686,  -339,  -339,  -339,  -339,
    -339,  -339,  -339,  1693,  -339,   261,   270,  1464,  -339,  -339,
      81,   275,   277,  -339,   192,  1349,  -339,  -339,  1867,  -339,
      -7,  -339,   278,    22,  -339,  -339,  -339,  -339,   281,   282,
     284,   285,  -339,  -339,  -339,  -339,  -339,  -339,  -339,  -339,
    -339,  -339,  -339,  1867,  -339,  1867,   981,  -339,  -339,   196,
    -339,    95,  -339,  -339,  -339,  -339,   107,   107,   118,   118,
     214,   214,   214,   214,   115,   115,   241,   -11,    97,    99,
     188,   197,  -339,   287,   288,  1693,  -339,   290,   293,  1523,
     136,   631,  1582,   289,  1867,   360,  -339,    53,   981,    89,
    -339,  -339,  -339,   875,   297,   875,  1108,  1127,  1146,   306,
     786,   272,  -339,  -339,  -339,    70,  -339,  -339,  -339,   296,
    1693,  -339,  -339,  1867,  -339,   298,   308,  2014,  -339,   137,
    -339,  -339,   335,  2415,  -339,  -339,   390,  -339,  -339,   104,
    -339,  1867,  -339,   -54,   -54,  -339,  1957,  -339,  -339,  -339,
     894,  -339,  1867,  -339,  1867,  -339,  -339,   313,  1693,  -339,
    -339,  1867,  -339,   314,  -339,   319,  1693,  -339,   316,   317,
    1641,   302,   321,  -339,   378,  -339,  -339,  -339,  -339,  -339,
     875,  -339,   323,   209,   324,   218,   326,   223,   328,   329,
    1019,  1019,  -339,  -339,  -339,   330,   333,  -339,  -339,  -339,
    -339,  -339,  -339,  -339,   331,   225,  -339,   336,    67,  -339,
    -339,  -339,   337,   339,  -339,  -339,   345,  1693,  -339,  -339,
    1867,  -339,   346,  -339,  -339,  -339,   981,  -339,  -339,  -339,
     875,  -339,   875,  -339,   875,  1235,  -339,  1780,  1818,  -339,
    -339,  1867,  -339,  1957,  1867,   378,  -339,  -339,  -339,  -339,
     349,   350,  -339,  -339,   357,  -339,  -339,   332,   227,   875,
     236,   875,   247,  -339,  -339,  -339,  -339,  -339,  -339,   875,
    -339,   338,  -339,   875,  -339,   875,  -339,  -339,  -339,  -339
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int16 yydefact[] =
{
       0,     0,   129,   108,   109,   110,   112,   113,   163,   159,
     160,   161,   123,   115,   116,   117,   118,   121,   122,   119,
     120,   114,   124,   125,   133,   134,     0,     0,   162,   164,
       0,   111,   283,     0,    95,    97,   127,     0,   128,   126,
      99,   101,   103,    93,     0,   279,   282,   280,   153,   251,
       0,     0,     0,     0,   169,     0,   187,    91,     0,   104,
     107,   168,     0,    94,    96,   132,     0,    98,   100,   102,
       1,   281,     0,     9,   157,     0,   154,    18,     6,     7,
      10,    11,     0,     0,     0,     8,     0,     0,     0,    37,
      38,    39,    40,    41,    42,    17,     2,     3,     5,    30,
      43,     0,    45,    49,    52,    55,    60,    63,    65,    67,
      69,    71,    73,    90,     0,   141,   201,   143,     0,     0,
       0,     0,   162,   188,   186,   185,     0,    92,     0,   286,
       0,   285,     0,     0,   183,     0,     0,   167,     0,     0,
     135,     0,   139,     0,     0,     0,   252,   149,     0,    34,
       0,    31,    32,     0,     0,    43,    75,    88,     0,     0,
       0,    24,    25,     0,     0,     0,    33,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   166,   140,     0,     0,
     203,   200,   204,   142,   165,   158,     0,   170,   189,   184,
     105,   107,   228,   106,     0,     0,    18,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   258,     0,
     256,   257,   239,   240,   248,     0,   253,   241,   242,   243,
     244,   287,   284,     0,   171,    38,     0,     0,   197,   181,
     196,     0,   191,   192,     0,     0,   136,   130,     0,   137,
       0,   144,   148,     0,   151,   156,   155,   150,     0,     0,
       0,     0,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    87,    77,     0,     4,     0,     0,    23,    20,     0,
      28,     0,    22,    46,    47,    48,    50,    51,    53,    54,
      58,    59,    56,    57,    61,    62,    64,    66,    68,    70,
      72,     0,   222,     0,     0,     0,   206,    38,     0,     0,
     202,     0,     0,     0,     0,     0,   230,     0,     0,     0,
     234,   250,   255,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   275,   276,   277,     0,   259,   249,   254,     0,
       0,   172,   179,     0,   178,    38,     0,     0,   194,   203,
     195,   180,   199,     0,   182,   199,     0,   131,   146,     0,
     138,     0,   152,    35,     0,    36,     0,    76,    89,    44,
       0,    21,     0,    19,     0,   223,   205,     0,     0,   207,
     213,     0,   212,     0,   224,     0,     0,   214,    38,     0,
       0,     0,     0,   237,     0,   226,   229,   233,   235,   245,
       0,   247,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   274,   278,   174,     0,     0,   175,   177,   190,
     193,   198,   145,   147,     0,     0,    13,     0,     0,    29,
      74,   209,     0,     0,   211,   225,     0,     0,   215,   221,
       0,   220,     0,   238,   236,   232,     0,   227,   246,   262,
       0,   264,     0,   266,     0,     0,   270,     0,     0,   173,
     176,     0,    12,     0,     0,     0,    26,   208,   210,   217,
       0,     0,   218,   231,   261,   263,   265,     0,     0,     0,
       0,     0,     0,    16,    14,    15,    27,   216,   219,     0,
     268,     0,   272,     0,   269,     0,   260,   267,   273,   271
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -339,  -339,  -339,  -339,  -339,  -339,  -339,   -29,  -339,  -339,
     341,  -339,   -75,   164,   174,    72,   172,   253,   254,   255,
     257,   262,  -339,   -32,    36,  -339,   -84,   -48,     3,     8,
    -339,   312,  -339,   -34,  -339,  -339,   303,  -119,    -4,  -339,
      85,  -339,   371,  -130,  -339,   -50,  -339,  -339,   -20,   -55,
    -339,   -47,  -102,  -126,  -339,    92,  -339,   203,     7,   -93,
    -176,  -116,    78,  -338,  -339,   131,   -30,  -171,  -339,    10,
     -26,  -108,  -339,  -165,  -231,  -339,  -339,  -339,  -339,   408,
    -339,  -339
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,    95,    96,    74,    97,    98,   425,   426,    99,   279,
     155,   101,   102,   103,   104,   105,   106,   107,   108,   109,
     110,   111,   112,   156,   157,   273,   219,   114,   220,   130,
      58,    59,    34,    35,    36,    37,   139,   140,   116,   250,
     251,    38,    75,    76,    39,    40,    41,    42,   121,    61,
     136,    62,   125,   303,   242,   243,   244,   353,   427,   304,
     192,   316,   317,   318,   319,   320,    43,   221,   222,   223,
     132,   147,   225,   226,   227,   228,   229,   230,    44,    45,
      46,   133
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      50,   117,   117,    32,   158,   120,   123,   137,    33,   124,
     241,    66,   203,    60,   310,   256,   117,   115,   115,   113,
     246,   113,    72,   191,   224,    73,   166,    47,    48,    65,
     145,   247,   115,   237,   253,   254,   142,   257,   117,   138,
     322,   329,    63,    64,    54,    49,    54,    32,    67,    68,
      69,   146,    33,    51,   115,   146,   446,   126,   118,   119,
     338,   184,   141,   129,   158,   117,   158,   117,    54,   190,
     131,   275,   359,   180,    54,   198,   127,    52,   199,    53,
     281,   115,   134,   115,    54,   123,   135,   309,   117,   117,
     336,   360,   283,   284,   285,   159,   255,   321,   117,   411,
     117,   301,   204,   117,   115,   115,   201,    54,   142,   142,
     201,   187,   113,   193,   115,    73,   115,   337,    55,   115,
      55,   252,   146,   256,    49,    49,   246,   446,    56,   174,
     175,   340,   394,   335,   141,   141,   231,   357,   185,   123,
      54,   190,    55,   232,   240,   362,   465,   350,    55,   275,
      56,   248,   399,   146,   401,   258,    56,   259,   347,   324,
     260,   188,   189,    57,   202,   189,    56,   146,   413,   249,
     314,   236,   315,   310,   275,   113,   144,   373,   204,   457,
     458,    55,   153,   123,   248,   385,   397,   198,   154,    56,
     261,   181,   167,   349,   182,   117,   240,   168,   169,   280,
     358,   369,   396,   378,   170,   171,   183,   176,   177,   395,
     390,   115,   186,   311,   347,   142,   113,   312,   189,   194,
     348,   160,   161,   162,   195,   308,   172,   173,   196,   448,
     262,   263,   264,   265,   266,   267,   268,   269,   270,   271,
     202,   141,   403,   405,   407,   197,   290,   291,   292,   293,
     370,     9,    10,    11,   276,   123,   188,   178,   179,   198,
     189,   277,   123,   282,    56,   313,   392,   274,   275,   339,
     354,   355,   128,   346,   371,   372,   275,   374,   445,   474,
     323,   475,   113,   476,   437,   122,   447,   450,   275,   163,
     198,   325,   204,   164,   137,   165,   452,   275,    56,   326,
     349,   454,   275,   462,   463,   491,   275,   272,   492,   367,
     494,   368,   327,   423,   493,   275,   117,   328,   496,   240,
     466,   330,   498,   331,   499,   495,   275,   332,   198,   113,
     473,   333,   115,   410,   286,   287,   123,   370,   370,   252,
     198,   377,   430,   341,   204,   383,   288,   289,   389,   445,
     294,   295,   342,   351,   202,   240,   352,   486,   361,   363,
     364,   240,   365,   393,   366,   375,   376,   391,   204,   408,
     412,   478,   379,   480,   482,   380,   415,   400,   414,   416,
     417,    77,    78,    79,    80,    81,    82,   198,    83,    84,
     418,   419,   100,   421,   100,   431,   434,   435,   438,   439,
     443,   449,   451,   444,   453,   455,   202,   456,   429,    85,
     490,   461,   459,   117,   432,   460,   464,   433,   489,   467,
     204,   468,   436,   149,   151,   152,   442,   469,   472,   115,
     202,   487,   488,   296,   484,   297,   497,   298,   200,   204,
     299,   245,   100,   143,   422,   420,   300,   356,   428,    86,
     398,    87,    71,     0,     0,    88,     0,     0,     0,   314,
       0,   315,    89,    90,    91,    92,    93,    94,     0,     0,
       0,     0,     0,   470,     0,     0,   471,    49,   146,     0,
       0,     0,   202,     0,     0,   100,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   483,     0,     0,
     485,   202,     0,     0,     0,     0,     0,     0,   100,   100,
     100,   100,   100,   100,   100,   100,   100,   100,   100,   100,
     100,   100,   100,   100,   100,   100,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   100,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   205,     0,   206,    78,    79,    80,    81,    82,     0,
      83,    84,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   100,
       2,    85,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,     0,   100,   207,   208,
     209,     0,   210,   211,   212,   213,   214,   215,   216,   217,
      27,    86,    28,    87,    29,    30,    31,    88,     0,     0,
       0,     0,     0,     0,    89,    90,    91,    92,    93,    94,
       0,     0,     0,     0,     0,   100,     0,     0,   218,    49,
     146,     2,     0,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,     0,     0,   206,
      78,    79,    80,    81,    82,     0,    83,    84,     0,     0,
       0,    27,   100,    28,     0,    29,     0,    31,     0,   384,
       0,     0,     0,     0,     0,   100,     2,    85,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,     0,     0,   207,   208,   209,     0,   210,   211,
     212,   213,   214,   215,   216,   217,    27,    86,    28,    87,
      29,    30,    31,    88,     0,     0,     0,     0,     0,     0,
      89,    90,    91,    92,    93,    94,     0,     0,     0,     0,
       0,     0,     0,     0,   218,    49,   146,   409,     0,    77,
      78,    79,    80,    81,    82,     0,    83,    84,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     2,    85,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    27,    86,    28,    87,
      29,    30,    31,    88,     0,     0,     0,     0,     0,     0,
      89,    90,    91,    92,    93,    94,     0,     0,   206,    78,
      79,    80,    81,    82,   218,    83,    84,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    77,    78,    79,
      80,    81,    82,     0,    83,    84,    85,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    85,     0,     0,     0,     0,
       0,     0,     0,   207,   208,   209,     0,   210,   211,   212,
     213,   214,   215,   216,   217,     0,    86,     0,    87,     0,
       0,     0,    88,     0,     0,     0,     0,     0,     0,    89,
      90,    91,    92,    93,    94,    86,     0,    87,     0,     0,
       0,    88,     0,   218,    49,   314,     0,   315,    89,    90,
      91,    92,    93,    94,    77,    78,    79,    80,    81,    82,
       0,    83,    84,    49,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    77,    78,    79,    80,    81,    82,     0,
      83,    84,    85,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    77,    78,    79,    80,    81,    82,     0,    83,
      84,    85,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      85,     0,    86,     0,    87,     0,     0,     0,    88,     0,
       0,     0,     0,     0,     0,    89,    90,    91,    92,    93,
      94,    86,     0,    87,     0,     0,     0,    88,     0,     0,
      49,     0,     0,     0,    89,    90,    91,    92,    93,    94,
      86,     0,    87,     0,     0,     0,    88,     0,   334,     0,
       0,     0,     0,    89,    90,    91,    92,    93,    94,   402,
       0,    77,    78,    79,    80,    81,    82,   218,    83,    84,
       0,     0,     0,     0,     0,     0,     0,     0,   404,     0,
      77,    78,    79,    80,    81,    82,     0,    83,    84,    85,
       0,     0,     0,     0,     0,     0,     0,   406,     0,    77,
      78,    79,    80,    81,    82,     0,    83,    84,    85,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    85,     0,    86,
       0,    87,     0,     0,     0,    88,     0,     0,     0,     0,
       0,     0,    89,    90,    91,    92,    93,    94,    86,     0,
      87,     0,     0,     0,    88,     0,     0,     0,     0,     0,
       0,    89,    90,    91,    92,    93,    94,    86,     0,    87,
       0,     0,     0,    88,     0,     0,     0,     0,     0,     0,
      89,    90,    91,    92,    93,    94,   477,     0,    77,    78,
      79,    80,    81,    82,     0,    83,    84,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     2,
       0,     0,     0,     0,     0,     0,    85,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,     0,     0,     0,     0,     0,
      77,    78,    79,    80,    81,    82,     0,    83,    84,     0,
       0,    28,     0,     0,    30,     0,    86,     0,    87,     0,
       0,     0,    88,     0,     0,     0,     0,     2,    85,    89,
      90,    91,    92,    93,    94,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,     0,     0,     0,     0,     0,     0,    77,
      78,    79,    80,    81,    82,     0,    83,    84,    86,    28,
      87,     0,     0,     0,    88,     0,     0,     0,     0,     0,
       0,    89,    90,    91,    92,    93,    94,    85,     0,     2,
     233,     0,     0,     0,     9,    10,    11,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,     0,     0,     0,    77,    78,
      79,    80,    81,    82,     0,    83,    84,    86,   122,    87,
       0,    28,     0,    88,    30,     0,     0,     0,   234,     0,
      89,   235,    91,    92,    93,    94,    85,     0,     0,   305,
       0,     0,     0,     9,    10,    11,     0,     0,     0,   146,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    77,    78,    79,
      80,    81,    82,     0,    83,    84,    86,   122,    87,     0,
       0,     0,    88,     0,     0,     0,     0,   306,     0,    89,
     307,    91,    92,    93,    94,    85,     0,     2,   343,     0,
       0,     0,     9,    10,    11,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,     0,     0,     0,    77,    78,    79,    80,
      81,    82,     0,    83,    84,    86,   122,    87,     0,    28,
       0,    88,     0,     0,     0,     0,   344,     0,    89,   345,
      91,    92,    93,    94,    85,     0,     0,   381,     0,     0,
       0,     9,    10,    11,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    77,    78,    79,    80,    81,
      82,     0,    83,    84,    86,   122,    87,     0,     0,     0,
      88,     0,     0,     0,     0,   382,     0,    89,    90,    91,
      92,    93,    94,    85,     0,     0,   386,     0,     0,     0,
       9,    10,    11,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    77,    78,    79,    80,    81,    82,
       0,    83,    84,    86,   122,    87,     0,     0,     0,    88,
       0,     0,     0,     0,   387,     0,    89,   388,    91,    92,
      93,    94,    85,     0,     0,   440,     0,     0,     0,     9,
      10,    11,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    77,    78,    79,    80,
      81,    82,     0,    83,    84,     0,     0,     0,     0,     0,
       0,     0,    86,   122,    87,     0,     0,     0,    88,     0,
       0,     0,     0,   441,    85,    89,    90,    91,    92,    93,
      94,     9,    10,    11,    77,    78,    79,    80,    81,    82,
       0,    83,    84,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    85,     0,    86,   122,    87,     0,     0,     0,
      88,     0,     0,     0,     0,     0,     0,    89,    90,    91,
      92,    93,    94,    77,    78,    79,    80,    81,    82,     0,
      83,    84,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    86,     0,    87,     0,     0,     0,    88,   278,
       0,    85,     0,     0,     0,    89,    90,    91,    92,    93,
      94,    77,    78,    79,    80,    81,    82,     0,    83,    84,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    85,
       0,    86,     0,    87,     0,     0,     0,    88,   479,     0,
       0,     0,     0,     0,    89,    90,    91,    92,    93,    94,
      77,    78,    79,    80,    81,    82,     0,    83,    84,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    86,
       0,    87,     0,     0,     0,    88,   481,     0,    85,     0,
       0,     0,    89,    90,    91,    92,    93,    94,    77,    78,
      79,    80,    81,    82,     0,    83,    84,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    85,     0,    86,     0,
      87,     0,     0,     0,    88,     0,     0,     0,     0,     0,
       0,    89,    90,    91,    92,    93,    94,    77,    78,    79,
      80,    81,    82,     0,    83,    84,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    86,     0,    87,     0,
       0,     0,   148,     0,     0,    85,     0,     2,     0,    89,
      90,    91,    92,    93,    94,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,     0,     0,     0,   424,    54,     0,     0,
       0,     0,     0,     0,     0,    86,     0,    87,     0,    28,
       0,   150,     0,     0,     0,     0,     0,     0,    89,    90,
      91,    92,    93,    94,     2,     0,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      70,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    27,     0,    28,     0,    29,     0,
      31,   347,   302,     0,     0,   189,     0,     0,     0,    56,
       2,     0,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,     1,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      27,     0,    28,     0,    29,    30,    31,     0,     0,     0,
       0,     0,     0,     0,     0,     2,     0,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,   238,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    27,     0,    28,     0,    29,
      30,    31,     0,     0,     0,     0,     0,     0,     2,     0,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    27,     0,
      28,     0,    29,     0,    31,     2,   239,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    27,     0,    28,     0,    29,
      30,    31,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   128,     2,    49,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    27,     0,    28,     0,    29,    30,    31,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     2,    49,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    27,     0,    28,     0,    29,     0,    31,   188,   302,
       0,     0,   189,     0,     0,     2,    56,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    27,     0,    28,     0,    29,
       0,    31
};

static const yytype_int16 yycheck[] =
{
      26,    51,    52,     0,    88,    53,    56,    62,     0,    56,
     136,    37,   128,    33,   190,   145,    66,    51,    52,    51,
     139,    53,    48,   116,   132,     3,   101,    98,     3,     3,
      79,   139,    66,   135,    79,   143,    66,   145,    88,    65,
     205,   212,    34,    35,     3,    99,     3,    44,    40,    41,
      42,   100,    44,    77,    88,   100,   394,    79,    51,    52,
     225,    19,    66,    60,   148,   115,   150,   117,     3,   116,
      60,    79,    79,    84,     3,   125,    98,    77,   125,    77,
     164,   115,    77,   117,     3,   135,    81,   189,   138,   139,
      98,    98,   167,   168,   169,    88,   144,   205,   148,   330,
     150,   185,   128,   153,   138,   139,   126,     3,   138,   139,
     130,   115,   144,   117,   148,     3,   150,   225,    77,   153,
      77,   141,   100,   253,    99,    99,   245,   465,    85,    14,
      15,   233,    79,   217,   138,   139,   133,   245,    96,   189,
       3,   188,    77,   133,   136,   253,    79,   240,    77,    79,
      85,    80,   323,   100,   325,   148,    85,   150,    77,   207,
     153,    77,    81,    98,   128,    81,    85,   100,    98,    98,
      81,   135,    83,   349,    79,   207,    97,    82,   204,   410,
     411,    77,    77,   233,    80,   311,    97,   237,    77,    85,
     154,    94,    85,   240,    95,   245,   188,    90,    91,   163,
     248,   276,   318,   305,    86,    87,    18,    92,    93,   317,
     312,   245,    78,    77,    77,   245,   248,    81,    81,    78,
     240,     9,    10,    11,    78,   189,    12,    13,    79,   400,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
     204,   245,   326,   327,   328,    78,   174,   175,   176,   177,
     276,    38,    39,    40,    78,   305,    77,    16,    17,   309,
      81,     3,   312,     3,    85,     6,   314,    78,    79,   233,
      78,    79,    97,   237,    78,    79,    79,    80,   394,   450,
      80,   452,   314,   454,   386,    72,   394,    78,    79,    77,
     340,    80,   318,    81,   349,    83,    78,    79,    85,    77,
     347,    78,    79,    78,    79,    78,    79,    97,   479,   273,
     481,   275,    77,   361,    78,    79,   366,    77,   489,   311,
     428,    77,   493,     3,   495,    78,    79,    98,   378,   361,
     446,    98,   366,   330,   170,   171,   386,   363,   364,   359,
     390,   305,   374,    82,   370,   309,   172,   173,   312,   465,
     178,   179,    82,    78,   318,   347,    79,   465,    80,    78,
      78,   353,    78,     3,    79,    78,    78,    78,   394,    63,
      98,   455,    82,   457,   458,    82,   340,    80,    82,   343,
      82,     3,     4,     5,     6,     7,     8,   437,    10,    11,
      82,    56,    51,     3,    53,    82,    82,    78,    82,    82,
      98,    78,    78,    82,    78,    77,   370,    78,   372,    31,
      78,    80,    82,   463,   378,    82,    80,   381,    61,    82,
     446,    82,   386,    82,    83,    84,   390,    82,    82,   463,
     394,    82,    82,   180,   463,   181,    98,   182,   126,   465,
     183,   138,   101,    72,   359,   353,   184,   244,   370,    71,
     319,    73,    44,    -1,    -1,    77,    -1,    -1,    -1,    81,
      -1,    83,    84,    85,    86,    87,    88,    89,    -1,    -1,
      -1,    -1,    -1,   437,    -1,    -1,   440,    99,   100,    -1,
      -1,    -1,   446,    -1,    -1,   144,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   461,    -1,    -1,
     464,   465,    -1,    -1,    -1,    -1,    -1,    -1,   167,   168,
     169,   170,   171,   172,   173,   174,   175,   176,   177,   178,
     179,   180,   181,   182,   183,   184,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   207,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     1,    -1,     3,     4,     5,     6,     7,     8,    -1,
      10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   248,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    -1,   276,    58,    59,
      60,    -1,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    -1,    -1,
      -1,    -1,    -1,    -1,    84,    85,    86,    87,    88,    89,
      -1,    -1,    -1,    -1,    -1,   314,    -1,    -1,    98,    99,
     100,    30,    -1,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    -1,    -1,     3,
       4,     5,     6,     7,     8,    -1,    10,    11,    -1,    -1,
      -1,    70,   361,    72,    -1,    74,    -1,    76,    -1,    78,
      -1,    -1,    -1,    -1,    -1,   374,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    -1,    -1,    58,    59,    60,    -1,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    -1,    -1,    -1,    -1,    -1,    -1,
      84,    85,    86,    87,    88,    89,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    98,    99,   100,     1,    -1,     3,
       4,     5,     6,     7,     8,    -1,    10,    11,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    70,    71,    72,    73,
      74,    75,    76,    77,    -1,    -1,    -1,    -1,    -1,    -1,
      84,    85,    86,    87,    88,    89,    -1,    -1,     3,     4,
       5,     6,     7,     8,    98,    10,    11,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,     4,     5,
       6,     7,     8,    -1,    10,    11,    31,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    31,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    58,    59,    60,    -1,    62,    63,    64,
      65,    66,    67,    68,    69,    -1,    71,    -1,    73,    -1,
      -1,    -1,    77,    -1,    -1,    -1,    -1,    -1,    -1,    84,
      85,    86,    87,    88,    89,    71,    -1,    73,    -1,    -1,
      -1,    77,    -1,    98,    99,    81,    -1,    83,    84,    85,
      86,    87,    88,    89,     3,     4,     5,     6,     7,     8,
      -1,    10,    11,    99,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     3,     4,     5,     6,     7,     8,    -1,
      10,    11,    31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     3,     4,     5,     6,     7,     8,    -1,    10,
      11,    31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      31,    -1,    71,    -1,    73,    -1,    -1,    -1,    77,    -1,
      -1,    -1,    -1,    -1,    -1,    84,    85,    86,    87,    88,
      89,    71,    -1,    73,    -1,    -1,    -1,    77,    -1,    -1,
      99,    -1,    -1,    -1,    84,    85,    86,    87,    88,    89,
      71,    -1,    73,    -1,    -1,    -1,    77,    -1,    98,    -1,
      -1,    -1,    -1,    84,    85,    86,    87,    88,    89,     1,
      -1,     3,     4,     5,     6,     7,     8,    98,    10,    11,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     1,    -1,
       3,     4,     5,     6,     7,     8,    -1,    10,    11,    31,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     1,    -1,     3,
       4,     5,     6,     7,     8,    -1,    10,    11,    31,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    31,    -1,    71,
      -1,    73,    -1,    -1,    -1,    77,    -1,    -1,    -1,    -1,
      -1,    -1,    84,    85,    86,    87,    88,    89,    71,    -1,
      73,    -1,    -1,    -1,    77,    -1,    -1,    -1,    -1,    -1,
      -1,    84,    85,    86,    87,    88,    89,    71,    -1,    73,
      -1,    -1,    -1,    77,    -1,    -1,    -1,    -1,    -1,    -1,
      84,    85,    86,    87,    88,    89,     1,    -1,     3,     4,
       5,     6,     7,     8,    -1,    10,    11,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,
      -1,    -1,    -1,    -1,    -1,    -1,    31,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    -1,    -1,    -1,    -1,    -1,
       3,     4,     5,     6,     7,     8,    -1,    10,    11,    -1,
      -1,    72,    -1,    -1,    75,    -1,    71,    -1,    73,    -1,
      -1,    -1,    77,    -1,    -1,    -1,    -1,    30,    31,    84,
      85,    86,    87,    88,    89,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    -1,    -1,    -1,    -1,    -1,    -1,     3,
       4,     5,     6,     7,     8,    -1,    10,    11,    71,    72,
      73,    -1,    -1,    -1,    77,    -1,    -1,    -1,    -1,    -1,
      -1,    84,    85,    86,    87,    88,    89,    31,    -1,    30,
      34,    -1,    -1,    -1,    38,    39,    40,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    -1,    -1,    -1,     3,     4,
       5,     6,     7,     8,    -1,    10,    11,    71,    72,    73,
      -1,    72,    -1,    77,    75,    -1,    -1,    -1,    82,    -1,
      84,    85,    86,    87,    88,    89,    31,    -1,    -1,    34,
      -1,    -1,    -1,    38,    39,    40,    -1,    -1,    -1,   100,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,     4,     5,
       6,     7,     8,    -1,    10,    11,    71,    72,    73,    -1,
      -1,    -1,    77,    -1,    -1,    -1,    -1,    82,    -1,    84,
      85,    86,    87,    88,    89,    31,    -1,    30,    34,    -1,
      -1,    -1,    38,    39,    40,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    -1,    -1,    -1,     3,     4,     5,     6,
       7,     8,    -1,    10,    11,    71,    72,    73,    -1,    72,
      -1,    77,    -1,    -1,    -1,    -1,    82,    -1,    84,    85,
      86,    87,    88,    89,    31,    -1,    -1,    34,    -1,    -1,
      -1,    38,    39,    40,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     3,     4,     5,     6,     7,
       8,    -1,    10,    11,    71,    72,    73,    -1,    -1,    -1,
      77,    -1,    -1,    -1,    -1,    82,    -1,    84,    85,    86,
      87,    88,    89,    31,    -1,    -1,    34,    -1,    -1,    -1,
      38,    39,    40,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     3,     4,     5,     6,     7,     8,
      -1,    10,    11,    71,    72,    73,    -1,    -1,    -1,    77,
      -1,    -1,    -1,    -1,    82,    -1,    84,    85,    86,    87,
      88,    89,    31,    -1,    -1,    34,    -1,    -1,    -1,    38,
      39,    40,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     3,     4,     5,     6,
       7,     8,    -1,    10,    11,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    71,    72,    73,    -1,    -1,    -1,    77,    -1,
      -1,    -1,    -1,    82,    31,    84,    85,    86,    87,    88,
      89,    38,    39,    40,     3,     4,     5,     6,     7,     8,
      -1,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    31,    -1,    71,    72,    73,    -1,    -1,    -1,
      77,    -1,    -1,    -1,    -1,    -1,    -1,    84,    85,    86,
      87,    88,    89,     3,     4,     5,     6,     7,     8,    -1,
      10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    71,    -1,    73,    -1,    -1,    -1,    77,    78,
      -1,    31,    -1,    -1,    -1,    84,    85,    86,    87,    88,
      89,     3,     4,     5,     6,     7,     8,    -1,    10,    11,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    31,
      -1,    71,    -1,    73,    -1,    -1,    -1,    77,    78,    -1,
      -1,    -1,    -1,    -1,    84,    85,    86,    87,    88,    89,
       3,     4,     5,     6,     7,     8,    -1,    10,    11,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    71,
      -1,    73,    -1,    -1,    -1,    77,    78,    -1,    31,    -1,
      -1,    -1,    84,    85,    86,    87,    88,    89,     3,     4,
       5,     6,     7,     8,    -1,    10,    11,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    31,    -1,    71,    -1,
      73,    -1,    -1,    -1,    77,    -1,    -1,    -1,    -1,    -1,
      -1,    84,    85,    86,    87,    88,    89,     3,     4,     5,
       6,     7,     8,    -1,    10,    11,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    71,    -1,    73,    -1,
      -1,    -1,    77,    -1,    -1,    31,    -1,    30,    -1,    84,
      85,    86,    87,    88,    89,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    -1,    -1,    -1,    59,     3,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    71,    -1,    73,    -1,    72,
      -1,    77,    -1,    -1,    -1,    -1,    -1,    -1,    84,    85,
      86,    87,    88,    89,    30,    -1,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
       0,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    70,    -1,    72,    -1,    74,    -1,
      76,    77,    78,    -1,    -1,    81,    -1,    -1,    -1,    85,
      30,    -1,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,     1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      70,    -1,    72,    -1,    74,    75,    76,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    30,    -1,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,     3,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    70,    -1,    72,    -1,    74,
      75,    76,    -1,    -1,    -1,    -1,    -1,    -1,    30,    -1,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    70,    -1,
      72,    -1,    74,    -1,    76,    30,    78,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    70,    -1,    72,    -1,    74,
      75,    76,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    97,    30,    99,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    70,    -1,    72,    -1,    74,    75,    76,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    30,    99,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    70,    -1,    72,    -1,    74,    -1,    76,    77,    78,
      -1,    -1,    81,    -1,    -1,    30,    85,    32,    33,    34,
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
     146,   147,   148,   167,   179,   180,   181,    98,     3,    99,
     171,    77,    77,    77,     3,    77,    85,    98,   131,   132,
     149,   150,   152,   130,   130,     3,   171,   130,   130,   130,
       0,   180,   171,     3,   104,   143,   144,     3,     4,     5,
       6,     7,     8,    10,    11,    31,    71,    73,    77,    84,
      85,    86,    87,    88,    89,   102,   103,   105,   106,   109,
     111,   112,   113,   114,   115,   116,   117,   118,   119,   120,
     121,   122,   123,   124,   128,   134,   139,   146,   159,   159,
     128,   149,    72,   146,   152,   153,    79,    98,    97,   129,
     130,   170,   171,   182,    77,    81,   151,   150,   171,   137,
     138,   139,   167,   143,    97,    79,   100,   172,    77,   111,
      77,   111,   111,    77,    77,   111,   124,   125,   127,   159,
       9,    10,    11,    77,    81,    83,   113,    85,    90,    91,
      86,    87,    12,    13,    14,    15,    92,    93,    16,    17,
      84,    94,    95,    18,    19,    96,    78,   139,    77,    81,
     152,   160,   161,   139,    78,    78,    79,    78,   146,   152,
     132,   149,   125,   162,   171,     1,     3,    58,    59,    60,
      62,    63,    64,    65,    66,    67,    68,    69,    98,   127,
     129,   168,   169,   170,   172,   173,   174,   175,   176,   177,
     178,   129,   170,    34,    82,    85,   125,   153,     3,    78,
     130,   154,   155,   156,   157,   137,   138,   172,    80,    98,
     140,   141,   149,    79,   172,   128,   144,   172,   159,   159,
     159,   125,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    97,   126,    78,    79,    78,     3,    78,   110,
     125,   127,     3,   113,   113,   113,   114,   114,   115,   115,
     116,   116,   116,   116,   117,   117,   118,   119,   120,   121,
     122,   127,    78,   154,   160,    34,    82,    85,   125,   153,
     161,    77,    81,     6,    81,    83,   162,   163,   164,   165,
     166,   172,   174,    80,   128,    80,    77,    77,    77,   168,
      77,     3,    98,    98,    98,   127,    98,   172,   174,   125,
     153,    82,    82,    34,    82,    85,   125,    77,   149,   152,
     160,    78,    79,   158,    78,    79,   158,   172,   128,    79,
      98,    80,   172,    78,    78,    78,    79,   125,   125,   113,
     171,    78,    79,    82,    80,    78,    78,   125,   153,    82,
      82,    34,    82,   125,    78,   154,    34,    82,    85,   125,
     153,    78,   128,     3,    79,   172,   162,    97,   166,   168,
      80,   168,     1,   127,     1,   127,     1,   127,    63,     1,
     129,   175,    98,    98,    82,   125,   125,    82,    82,    56,
     156,     3,   141,   128,    59,   107,   108,   159,   163,   125,
     124,    82,   125,   125,    82,    78,   125,   153,    82,    82,
      34,    82,   125,    98,    82,   162,   164,   172,   168,    78,
      78,    78,    78,    78,    78,    77,    78,   175,   175,    82,
      82,    80,    78,    79,    80,    79,   172,    82,    82,    82,
     125,   125,    82,   162,   168,   168,   168,     1,   127,    78,
     127,    78,   127,   125,   108,   125,   172,    82,    82,    61,
      78,    78,   168,    78,   168,    78,   168,    98,   168,   168
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
     150,   150,   150,   151,   152,   152,   152,   152,   153,   153,
     154,   154,   155,   155,   156,   156,   156,   157,   157,   158,
     159,   159,   160,   160,   160,   161,   161,   161,   161,   161,
     161,   161,   161,   161,   161,   161,   161,   161,   161,   161,
     161,   161,   161,   161,   161,   161,   162,   162,   162,   163,
     163,   163,   163,   164,   165,   165,   166,   166,   167,   168,
     168,   168,   168,   168,   168,   169,   169,   169,   170,   170,
     170,   171,   172,   173,   173,   173,   174,   174,   175,   175,
     176,   176,   176,   176,   176,   177,   177,   177,   177,   177,
     177,   177,   177,   177,   178,   178,   178,   178,   178,   179,
     179,   179,   180,   180,   181,   181,   182,   182
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
       4,     3,     4,     1,     3,     2,     2,     1,     1,     2,
       3,     1,     1,     3,     2,     2,     1,     1,     3,     1,
       2,     1,     2,     1,     1,     3,     2,     3,     5,     4,
       5,     4,     3,     3,     3,     4,     6,     5,     5,     6,
       4,     4,     2,     3,     3,     4,     3,     4,     1,     2,
       1,     4,     3,     2,     1,     2,     3,     2,     7,     1,
       1,     1,     1,     1,     1,     3,     4,     3,     2,     3,
       3,     1,     1,     1,     2,     2,     1,     1,     1,     2,
       7,     5,     4,     5,     4,     5,     4,     7,     6,     6,
       4,     7,     6,     7,     3,     2,     2,     2,     3,     1,
       2,     2,     1,     1,     4,     3,     1,     2
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
#line 2214 "parser.tab.c"
    break;

  case 91: /* declaration: declaration_specifiers ';'  */
#line 202 "parser.y"
                                     { fin_declaracion(); }
#line 2220 "parser.tab.c"
    break;

  case 92: /* declaration: declaration_specifiers init_declarator_list ';'  */
#line 203 "parser.y"
                                                          { fin_declaracion(); }
#line 2226 "parser.tab.c"
    break;

  case 114: /* type_specifier: VOID  */
#line 240 "parser.y"
               { guardarTipo(yylloc.first_line); }
#line 2232 "parser.tab.c"
    break;

  case 115: /* type_specifier: CHAR  */
#line 241 "parser.y"
               { guardarTipo(yylloc.first_line); }
#line 2238 "parser.tab.c"
    break;

  case 116: /* type_specifier: SHORT  */
#line 242 "parser.y"
                { guardarTipo(yylloc.first_line); }
#line 2244 "parser.tab.c"
    break;

  case 117: /* type_specifier: INT  */
#line 243 "parser.y"
              { guardarTipo(yylloc.first_line); }
#line 2250 "parser.tab.c"
    break;

  case 118: /* type_specifier: LONG  */
#line 244 "parser.y"
               { guardarTipo(yylloc.first_line); }
#line 2256 "parser.tab.c"
    break;

  case 119: /* type_specifier: FLOAT  */
#line 245 "parser.y"
                { guardarTipo(yylloc.first_line); }
#line 2262 "parser.tab.c"
    break;

  case 120: /* type_specifier: DOUBLE  */
#line 246 "parser.y"
                 { guardarTipo(yylloc.first_line); }
#line 2268 "parser.tab.c"
    break;

  case 121: /* type_specifier: SIGNED  */
#line 247 "parser.y"
                 { guardarTipo(yylloc.first_line); }
#line 2274 "parser.tab.c"
    break;

  case 122: /* type_specifier: UNSIGNED  */
#line 248 "parser.y"
                   { guardarTipo(yylloc.first_line); }
#line 2280 "parser.tab.c"
    break;

  case 123: /* type_specifier: BOOL  */
#line 249 "parser.y"
               { guardarTipo(yylloc.first_line); }
#line 2286 "parser.tab.c"
    break;

  case 124: /* type_specifier: COMPLEX  */
#line 250 "parser.y"
                  { guardarTipo(yylloc.first_line); }
#line 2292 "parser.tab.c"
    break;

  case 169: /* direct_declarator: IDENTIFIER  */
#line 343 "parser.y"
                     { guardarID(yylloc.first_line); }
#line 2298 "parser.tab.c"
    break;

  case 180: /* direct_declarator: direct_declarator leftpar parameter_type_list ')'  */
#line 354 "parser.y"
                                                            { fin_declaracionParametro(); }
#line 2304 "parser.tab.c"
    break;

  case 182: /* direct_declarator: direct_declarator leftpar identifier_list ')'  */
#line 356 "parser.y"
                                                        { fin_declaracionParametro(); }
#line 2310 "parser.tab.c"
    break;

  case 183: /* leftpar: '('  */
#line 360 "parser.y"
              { fin_declaracion(); }
#line 2316 "parser.tab.c"
    break;

  case 197: /* identifier_list: IDENTIFIER  */
#line 391 "parser.y"
                     { guardarID(yylloc.first_line); }
#line 2322 "parser.tab.c"
    break;

  case 198: /* identifier_list: identifier_list comma IDENTIFIER  */
#line 392 "parser.y"
                                           { guardarID(yylloc.first_line); }
#line 2328 "parser.tab.c"
    break;

  case 199: /* comma: ','  */
#line 396 "parser.y"
              { fin_declaracionParametro(); }
#line 2334 "parser.tab.c"
    break;

  case 237: /* designator: '.' IDENTIFIER  */
#line 456 "parser.y"
                         { printf("\nVARIABLE A USAR\n"); }
#line 2340 "parser.tab.c"
    break;

  case 250: /* compound_statement: open_scope error close_scope  */
#line 481 "parser.y"
                                       {yyerrok; synErrorFound =1;}
#line 2346 "parser.tab.c"
    break;

  case 251: /* open_scope: '{'  */
#line 485 "parser.y"
              { open_scope(); }
#line 2352 "parser.tab.c"
    break;

  case 252: /* close_scope: '}'  */
#line 489 "parser.y"
              { close_scope(); }
#line 2358 "parser.tab.c"
    break;

  case 255: /* block_item_list: error block_item  */
#line 495 "parser.y"
                           {yyerrok; synErrorFound =1;}
#line 2364 "parser.tab.c"
    break;

  case 262: /* selection_statement: IF '(' error ')'  */
#line 511 "parser.y"
                           {yyerrok; synErrorFound =1;}
#line 2370 "parser.tab.c"
    break;

  case 264: /* selection_statement: SWITCH '(' error ')'  */
#line 513 "parser.y"
                              {yyerrok; synErrorFound =1;}
#line 2376 "parser.tab.c"
    break;

  case 266: /* iteration_statement: WHILE '(' error ')'  */
#line 518 "parser.y"
                              {yyerrok; synErrorFound =1;}
#line 2382 "parser.tab.c"
    break;

  case 268: /* iteration_statement: DO statement WHILE '(' error ')'  */
#line 520 "parser.y"
                                           {yyerrok; synErrorFound =1;}
#line 2388 "parser.tab.c"
    break;

  case 270: /* iteration_statement: FOR '(' error ')'  */
#line 522 "parser.y"
                            {yyerrok; synErrorFound =1;}
#line 2394 "parser.tab.c"
    break;

  case 280: /* translation_unit: error ';'  */
#line 539 "parser.y"
                    {yyerrok; synErrorFound =1;}
#line 2400 "parser.tab.c"
    break;


#line 2404 "parser.tab.c"

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

#line 558 "parser.y"

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
