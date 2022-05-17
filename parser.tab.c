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
void yyerror(const char *s);
extern char *lineptr;

#line 78 "parser.tab.c"

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
  YYSYMBOL_84_ = 84,                       /* '{'  */
  YYSYMBOL_85_ = 85,                       /* '}'  */
  YYSYMBOL_86_ = 86,                       /* '&'  */
  YYSYMBOL_87_ = 87,                       /* '*'  */
  YYSYMBOL_88_ = 88,                       /* '+'  */
  YYSYMBOL_89_ = 89,                       /* '-'  */
  YYSYMBOL_90_ = 90,                       /* '~'  */
  YYSYMBOL_91_ = 91,                       /* '!'  */
  YYSYMBOL_92_ = 92,                       /* '/'  */
  YYSYMBOL_93_ = 93,                       /* '%'  */
  YYSYMBOL_94_ = 94,                       /* '<'  */
  YYSYMBOL_95_ = 95,                       /* '>'  */
  YYSYMBOL_96_ = 96,                       /* '^'  */
  YYSYMBOL_97_ = 97,                       /* '|'  */
  YYSYMBOL_98_ = 98,                       /* '?'  */
  YYSYMBOL_99_ = 99,                       /* '='  */
  YYSYMBOL_100_ = 100,                     /* ';'  */
  YYSYMBOL_YYACCEPT = 101,                 /* $accept  */
  YYSYMBOL_SPRIME = 102,                   /* SPRIME  */
  YYSYMBOL_primary_expression = 103,       /* primary_expression  */
  YYSYMBOL_constant = 104,                 /* constant  */
  YYSYMBOL_enumeration_constant = 105,     /* enumeration_constant  */
  YYSYMBOL_string = 106,                   /* string  */
  YYSYMBOL_generic_selection = 107,        /* generic_selection  */
  YYSYMBOL_generic_assoc_list = 108,       /* generic_assoc_list  */
  YYSYMBOL_generic_association = 109,      /* generic_association  */
  YYSYMBOL_postfix_expression = 110,       /* postfix_expression  */
  YYSYMBOL_argument_expression_list = 111, /* argument_expression_list  */
  YYSYMBOL_unary_expression = 112,         /* unary_expression  */
  YYSYMBOL_unary_operator = 113,           /* unary_operator  */
  YYSYMBOL_cast_expression = 114,          /* cast_expression  */
  YYSYMBOL_multiplicative_expression = 115, /* multiplicative_expression  */
  YYSYMBOL_additive_expression = 116,      /* additive_expression  */
  YYSYMBOL_shift_expression = 117,         /* shift_expression  */
  YYSYMBOL_relational_expression = 118,    /* relational_expression  */
  YYSYMBOL_equality_expression = 119,      /* equality_expression  */
  YYSYMBOL_and_expression = 120,           /* and_expression  */
  YYSYMBOL_exclusive_or_expression = 121,  /* exclusive_or_expression  */
  YYSYMBOL_inclusive_or_expression = 122,  /* inclusive_or_expression  */
  YYSYMBOL_logical_and_expression = 123,   /* logical_and_expression  */
  YYSYMBOL_logical_or_expression = 124,    /* logical_or_expression  */
  YYSYMBOL_conditional_expression = 125,   /* conditional_expression  */
  YYSYMBOL_assignment_expression = 126,    /* assignment_expression  */
  YYSYMBOL_assignment_operator = 127,      /* assignment_operator  */
  YYSYMBOL_expression = 128,               /* expression  */
  YYSYMBOL_constant_expression = 129,      /* constant_expression  */
  YYSYMBOL_declaration = 130,              /* declaration  */
  YYSYMBOL_declaration_specifiers = 131,   /* declaration_specifiers  */
  YYSYMBOL_init_declarator_list = 132,     /* init_declarator_list  */
  YYSYMBOL_init_declarator = 133,          /* init_declarator  */
  YYSYMBOL_storage_class_specifier = 134,  /* storage_class_specifier  */
  YYSYMBOL_type_specifier = 135,           /* type_specifier  */
  YYSYMBOL_struct_or_union_specifier = 136, /* struct_or_union_specifier  */
  YYSYMBOL_struct_or_union = 137,          /* struct_or_union  */
  YYSYMBOL_struct_declaration_list = 138,  /* struct_declaration_list  */
  YYSYMBOL_struct_declaration = 139,       /* struct_declaration  */
  YYSYMBOL_specifier_qualifier_list = 140, /* specifier_qualifier_list  */
  YYSYMBOL_struct_declarator_list = 141,   /* struct_declarator_list  */
  YYSYMBOL_struct_declarator = 142,        /* struct_declarator  */
  YYSYMBOL_enum_specifier = 143,           /* enum_specifier  */
  YYSYMBOL_enumerator_list = 144,          /* enumerator_list  */
  YYSYMBOL_enumerator = 145,               /* enumerator  */
  YYSYMBOL_atomic_type_specifier = 146,    /* atomic_type_specifier  */
  YYSYMBOL_type_qualifier = 147,           /* type_qualifier  */
  YYSYMBOL_function_specifier = 148,       /* function_specifier  */
  YYSYMBOL_alignment_specifier = 149,      /* alignment_specifier  */
  YYSYMBOL_declarator = 150,               /* declarator  */
  YYSYMBOL_direct_declarator = 151,        /* direct_declarator  */
  YYSYMBOL_pointer = 152,                  /* pointer  */
  YYSYMBOL_type_qualifier_list = 153,      /* type_qualifier_list  */
  YYSYMBOL_parameter_type_list = 154,      /* parameter_type_list  */
  YYSYMBOL_parameter_list = 155,           /* parameter_list  */
  YYSYMBOL_parameter_declaration = 156,    /* parameter_declaration  */
  YYSYMBOL_identifier_list = 157,          /* identifier_list  */
  YYSYMBOL_type_name = 158,                /* type_name  */
  YYSYMBOL_abstract_declarator = 159,      /* abstract_declarator  */
  YYSYMBOL_direct_abstract_declarator = 160, /* direct_abstract_declarator  */
  YYSYMBOL_initializer = 161,              /* initializer  */
  YYSYMBOL_initializer_list = 162,         /* initializer_list  */
  YYSYMBOL_designation = 163,              /* designation  */
  YYSYMBOL_designator_list = 164,          /* designator_list  */
  YYSYMBOL_designator = 165,               /* designator  */
  YYSYMBOL_static_assert_declaration = 166, /* static_assert_declaration  */
  YYSYMBOL_statement = 167,                /* statement  */
  YYSYMBOL_labeled_statement = 168,        /* labeled_statement  */
  YYSYMBOL_compound_statement = 169,       /* compound_statement  */
  YYSYMBOL_block_item_list = 170,          /* block_item_list  */
  YYSYMBOL_block_item = 171,               /* block_item  */
  YYSYMBOL_expression_statement = 172,     /* expression_statement  */
  YYSYMBOL_selection_statement = 173,      /* selection_statement  */
  YYSYMBOL_iteration_statement = 174,      /* iteration_statement  */
  YYSYMBOL_jump_statement = 175,           /* jump_statement  */
  YYSYMBOL_translation_unit = 176,         /* translation_unit  */
  YYSYMBOL_external_declaration = 177,     /* external_declaration  */
  YYSYMBOL_function_definition = 178,      /* function_definition  */
  YYSYMBOL_declaration_list = 179          /* declaration_list  */
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
#define YYFINAL  52
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   2569

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  101
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  79
/* YYNRULES -- Number of rules.  */
#define YYNRULES  276
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  482

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
       2,     2,     2,    91,     2,     2,     2,    93,    86,     2,
      77,    78,    87,    88,    79,    89,    83,    92,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    80,   100,
      94,    99,    95,    98,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    81,     2,    82,    96,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    84,    97,    85,    90,     2,     2,     2,
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
       0,    27,    27,    32,    33,    34,    35,    36,    40,    41,
      42,    46,    50,    51,    55,    59,    60,    64,    65,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    82,
      83,    87,    88,    89,    90,    91,    92,    93,    97,    98,
      99,   100,   101,   102,   106,   107,   111,   112,   113,   114,
     118,   119,   120,   124,   125,   126,   130,   131,   132,   133,
     134,   138,   139,   140,   144,   145,   149,   150,   154,   155,
     159,   160,   164,   165,   169,   170,   174,   175,   179,   180,
     181,   182,   183,   184,   185,   186,   187,   188,   189,   193,
     194,   198,   202,   203,   204,   208,   209,   210,   211,   212,
     213,   214,   215,   216,   217,   221,   222,   226,   227,   231,
     232,   233,   234,   235,   236,   240,   241,   242,   243,   244,
     245,   246,   247,   248,   249,   250,   251,   252,   253,   254,
     255,   259,   260,   261,   265,   266,   270,   271,   275,   276,
     277,   281,   282,   283,   284,   288,   289,   293,   294,   295,
     299,   300,   301,   302,   303,   307,   308,   312,   313,   317,
     321,   322,   323,   324,   328,   329,   333,   334,   338,   339,
     343,   344,   345,   346,   347,   348,   349,   350,   351,   352,
     353,   354,   355,   356,   360,   361,   362,   363,   367,   368,
     373,   374,   378,   379,   383,   384,   385,   389,   390,   394,
     395,   399,   400,   401,   405,   406,   407,   408,   409,   410,
     411,   412,   413,   414,   415,   416,   417,   418,   419,   420,
     421,   422,   423,   424,   425,   429,   430,   431,   435,   436,
     437,   438,   442,   446,   447,   451,   452,   456,   460,   461,
     462,   463,   464,   465,   469,   470,   471,   475,   476,   480,
     481,   485,   486,   490,   491,   495,   496,   497,   501,   502,
     503,   504,   505,   506,   510,   511,   512,   513,   514,   518,
     519,   523,   524,   528,   529,   533,   534
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
  "']'", "'.'", "'{'", "'}'", "'&'", "'*'", "'+'", "'-'", "'~'", "'!'",
  "'/'", "'%'", "'<'", "'>'", "'^'", "'|'", "'?'", "'='", "';'", "$accept",
  "SPRIME", "primary_expression", "constant", "enumeration_constant",
  "string", "generic_selection", "generic_assoc_list",
  "generic_association", "postfix_expression", "argument_expression_list",
  "unary_expression", "unary_operator", "cast_expression",
  "multiplicative_expression", "additive_expression", "shift_expression",
  "relational_expression", "equality_expression", "and_expression",
  "exclusive_or_expression", "inclusive_or_expression",
  "logical_and_expression", "logical_or_expression",
  "conditional_expression", "assignment_expression", "assignment_operator",
  "expression", "constant_expression", "declaration",
  "declaration_specifiers", "init_declarator_list", "init_declarator",
  "storage_class_specifier", "type_specifier", "struct_or_union_specifier",
  "struct_or_union", "struct_declaration_list", "struct_declaration",
  "specifier_qualifier_list", "struct_declarator_list",
  "struct_declarator", "enum_specifier", "enumerator_list", "enumerator",
  "atomic_type_specifier", "type_qualifier", "function_specifier",
  "alignment_specifier", "declarator", "direct_declarator", "pointer",
  "type_qualifier_list", "parameter_type_list", "parameter_list",
  "parameter_declaration", "identifier_list", "type_name",
  "abstract_declarator", "direct_abstract_declarator", "initializer",
  "initializer_list", "designation", "designator_list", "designator",
  "static_assert_declaration", "statement", "labeled_statement",
  "compound_statement", "block_item_list", "block_item",
  "expression_statement", "selection_statement", "iteration_statement",
  "jump_statement", "translation_unit", "external_declaration",
  "function_definition", "declaration_list", YY_NULLPTR
  };
  return yy_sname[yysymbol];
}
#endif

#define YYPACT_NINF (-366)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    2293,  -366,  -366,  -366,  -366,  -366,  -366,  -366,  -366,  -366,
    -366,  -366,  -366,  -366,  -366,  -366,  -366,  -366,  -366,  -366,
    -366,  -366,  -366,  -366,  -366,    30,   -60,   -50,  -366,   -41,
    -366,    59,  -366,    45,  2385,  2385,  -366,    54,  -366,  -366,
    2385,  2385,  2385,  -366,  2246,  -366,  -366,   -59,    63,   891,
    2497,  1712,  -366,  -366,    16,   137,  -366,   -39,  -366,  1926,
     -47,    79,  -366,  -366,   -30,  2424,  -366,  -366,  -366,  -366,
    -366,    63,  -366,    29,    10,  -366,  -366,  -366,  -366,  -366,
    -366,  1734,  1756,  1756,  -366,    73,    80,   891,  -366,  -366,
    -366,  -366,  -366,  -366,  -366,  -366,  -366,  -366,   172,  -366,
    1712,  -366,   127,   133,   213,    41,   216,    86,   101,   107,
     205,    51,  -366,   128,  2497,   -46,  2497,   149,   156,   175,
     190,  -366,  -366,  -366,   137,    16,  -366,   496,  1468,  -366,
      45,  -366,  2146,  1879,   980,   -47,  2424,  2044,  -366,    44,
    -366,    68,  1712,    25,  -366,   891,  -366,   891,  -366,  -366,
    2497,  1712,   367,  -366,  -366,   158,   192,   275,  -366,  -366,
    1490,  1712,   289,  -366,  1712,  1712,  1712,  1712,  1712,  1712,
    1712,  1712,  1712,  1712,  1712,  1712,  1712,  1712,  1712,  1712,
    1712,  1712,  1712,  -366,  -366,  1994,  1002,   126,  -366,   134,
    -366,  -366,  -366,   210,  -366,  -366,  -366,  -366,   199,   204,
    1712,   221,   225,   227,   230,   405,   237,   312,   218,   219,
     762,  -366,  -366,    84,  -366,  -366,  -366,  -366,   618,  -366,
    -366,  -366,  -366,  -366,  1446,  -366,  -366,  -366,  -366,  -366,
    -366,    71,   242,   243,  -366,   161,  1313,  -366,   241,   246,
    1091,  2092,  -366,  -366,  1712,  -366,    90,  -366,   254,    26,
    -366,  -366,  -366,  -366,   257,   258,   259,   261,  -366,  -366,
    -366,  -366,  -366,  -366,  -366,  -366,  -366,  -366,  -366,  1712,
    -366,  1712,  1579,  -366,  -366,   167,  -366,    83,  -366,  -366,
    -366,  -366,   127,   127,   133,   133,   213,   213,   213,   213,
      41,    41,   216,    86,   101,   107,   205,   168,  -366,   260,
     263,  1313,  -366,   262,   264,  1113,   134,  2199,  1202,   265,
     405,   268,   405,  1712,  1712,  1712,   282,   709,   249,  -366,
    -366,  -366,   110,  -366,  -366,  -366,  1712,   347,  -366,    82,
    1468,   119,  -366,  1823,  -366,    74,  -366,  -366,  2340,  -366,
     351,   274,  1313,  -366,  -366,  1712,  -366,   277,   278,  -366,
    -366,    91,  -366,  1712,  -366,   273,   273,  -366,  2462,  -366,
    -366,  1446,  -366,  -366,  1712,  -366,  1712,  -366,  -366,   279,
    1313,  -366,  -366,  1712,  -366,   283,  -366,   288,  1313,  -366,
     285,   286,  1224,   269,  -366,   405,  -366,   179,   183,   185,
     293,   800,   800,  -366,  -366,   291,  -366,  1335,  -366,  -366,
    -366,  -366,  -366,  -366,  -366,  -366,   292,   295,  -366,  -366,
    -366,  -366,   300,   188,  -366,   302,    95,  -366,  -366,  -366,
     301,   303,  -366,  -366,   304,  1313,  -366,  -366,  1712,  -366,
     315,  -366,  -366,   405,   405,   405,  1712,  1601,  1623,  -366,
    -366,  -366,  1468,  -366,  -366,  1712,  -366,  2462,  1712,  1357,
    -366,  -366,  -366,  -366,   317,   318,  -366,   310,  -366,  -366,
     195,   405,   198,   405,   217,  -366,  -366,  -366,  -366,  -366,
    -366,  -366,   405,   284,  -366,   405,  -366,   405,  -366,  -366,
    -366,  -366
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int16 yydefact[] =
{
       0,   130,   109,   110,   111,   113,   114,   164,   160,   161,
     162,   124,   116,   117,   118,   119,   122,   123,   120,   121,
     115,   125,   126,   134,   135,     0,     0,   163,   165,     0,
     112,     0,   272,     0,    96,    98,   128,     0,   129,   127,
     100,   102,   104,    94,     0,   269,   271,   154,     0,     0,
       0,     0,     1,   170,     0,   187,    92,     0,   105,   108,
     169,     0,    95,    97,   133,     0,    99,   101,   103,     2,
     270,     0,    11,   158,     0,   155,     3,     8,     9,    12,
      13,     0,     0,     0,    10,     0,     0,     0,    38,    39,
      40,    41,    42,    43,    19,     4,     5,     7,    31,    44,
       0,    46,    50,    53,    56,    61,    64,    66,    68,    70,
      72,    74,    91,     0,   142,   200,   144,     0,     0,     0,
       0,   163,   188,   186,   185,     0,    93,     0,     0,   275,
       0,   274,     0,     0,     0,   168,     0,     0,   136,     0,
     140,     0,     0,     0,   150,     0,    35,     0,    32,    33,
       0,     0,    44,    76,    89,     0,     0,     0,    25,    26,
       0,     0,     0,    34,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   167,   141,     0,     0,   202,   199,   203,
     143,   166,   159,     0,   171,   189,   184,   106,   108,     3,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   247,   253,     0,   251,   252,   238,   239,     0,   249,
     240,   241,   242,   243,     0,   227,   107,   276,   273,   197,
     182,   196,     0,   191,   192,     0,     0,   172,    39,     0,
       0,     0,   131,   137,     0,   138,     0,   145,   149,     0,
     152,   157,   151,   156,     0,     0,     0,     0,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    78,     0,
       6,     0,     0,    24,    21,     0,    29,     0,    23,    47,
      48,    49,    51,    52,    54,    55,    59,    60,    57,    58,
      62,    63,    65,    67,    69,    71,    73,     0,   221,     0,
       0,     0,   205,    39,     0,     0,   201,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   265,
     266,   267,     0,   254,   248,   250,     0,     0,   229,     0,
       0,     0,   233,     0,   194,   202,   195,   181,     0,   183,
       0,     0,     0,   173,   180,     0,   179,    39,     0,   132,
     147,     0,   139,     0,   153,    36,     0,    37,     0,    77,
      90,     0,    45,    22,     0,    20,     0,   222,   204,     0,
       0,   206,   212,     0,   211,     0,   223,     0,     0,   213,
      39,     0,     0,     0,   244,     0,   246,     0,     0,     0,
       0,     0,     0,   264,   268,     0,   236,     0,   225,   228,
     232,   234,   190,   193,   198,   175,     0,     0,   176,   178,
     146,   148,     0,     0,    15,     0,     0,    30,    75,   208,
       0,     0,   210,   224,     0,     0,   214,   220,     0,   219,
       0,   237,   245,     0,     0,     0,     0,     0,     0,   235,
     226,   231,     0,   174,   177,     0,    14,     0,     0,     0,
      27,   207,   209,   216,     0,     0,   217,   256,   257,   258,
       0,     0,     0,     0,     0,   230,    18,    16,    17,    28,
     215,   218,     0,     0,   262,     0,   260,     0,   255,   259,
     263,   261
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -366,  -366,  -366,  -366,  -366,  -366,  -366,  -366,   -44,  -366,
    -366,   281,  -366,   -86,   138,    81,   115,   135,   224,   226,
     228,   234,   236,  -366,   -27,   -70,  -366,   -85,   -36,   -20,
       9,  -366,   280,  -366,   -45,  -366,  -366,   270,  -111,     3,
    -366,    67,  -366,   348,  -120,  -366,   -49,  -366,  -366,   -26,
     -53,   -52,  -113,  -122,  -366,    87,  -366,    -4,   -97,  -175,
    -118,    60,  -365,  -366,    89,   -28,  -192,  -366,    27,  -366,
     206,  -265,  -366,  -366,  -366,  -366,   378,  -366,  -366
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,    31,    94,    95,    73,    96,    97,   413,   414,    98,
     275,   152,   100,   101,   102,   103,   104,   105,   106,   107,
     108,   109,   110,   111,   153,   154,   269,   213,   113,    32,
     130,    57,    58,    34,    35,    36,    37,   137,   138,   115,
     246,   247,    38,    74,    75,    39,    40,    41,    42,   120,
      60,    61,   124,   299,   233,   234,   235,   415,   300,   189,
     328,   329,   330,   331,   332,    43,   215,   216,   217,   218,
     219,   220,   221,   222,   223,    44,    45,    46,   132
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     116,   116,   155,   123,   114,   114,   122,    59,   135,    33,
     226,   232,   306,   316,   163,   119,   116,    49,   188,    53,
     114,   240,   112,   253,   112,    71,   243,    50,    72,    72,
     133,   185,   442,    47,   134,   186,    51,   140,   116,   129,
     125,    55,   114,    62,    63,   117,   118,    53,    53,    66,
      67,    68,   392,    33,   136,   171,   172,    64,   225,    52,
     155,   126,   155,   187,   239,   116,    72,   116,   139,   114,
     181,   114,   196,   305,    53,   195,   277,    53,   279,   280,
     281,   257,    53,   156,   442,   122,   131,   116,   116,   143,
     276,   114,   114,    54,    53,   144,   116,   297,   116,   198,
     114,   116,   114,    55,   198,   114,   251,   214,   140,   140,
     252,   354,   227,   248,    48,   112,   304,   184,   384,   190,
     386,    54,    54,   342,   244,   322,   437,   438,   142,   253,
     243,    55,    55,   187,   336,   173,   174,   122,    65,   139,
     139,   254,   231,   255,   245,    56,   256,   249,   333,   182,
     150,   333,   186,   250,   225,   186,    54,   151,    55,   228,
     306,   397,   271,   271,   311,   365,   341,   398,    54,   351,
     348,   244,   177,   112,   449,     8,     9,    10,    55,   335,
     450,   157,   158,   159,   323,   377,   362,   122,   370,   271,
     352,   195,   116,   432,   231,   382,   114,   178,   214,   359,
     326,   360,   327,   185,   179,   334,   183,   186,   350,   121,
     394,   307,   399,   140,   164,   308,   309,   112,   400,   165,
     166,   167,   168,   180,    55,   169,   170,   191,   387,   388,
     389,   369,   175,   176,   192,   375,   270,   271,   381,   339,
     340,   457,   458,   459,   139,   363,   364,   271,   366,   160,
     284,   285,   122,   161,   193,   162,   195,   433,   271,   122,
     225,   434,   271,   435,   271,   425,   446,   447,   194,   474,
     272,   476,   406,   473,   271,   407,   475,   271,   273,   441,
     478,   335,   135,   480,   310,   481,   286,   287,   288,   289,
     395,   225,   278,   195,   417,   477,   271,   391,   128,   112,
     420,   312,   313,   421,   314,   282,   283,   315,   424,   116,
     290,   291,   430,   114,   317,   318,   231,   411,   319,   320,
     337,   195,   338,   343,   465,   248,   112,   225,   344,   122,
      99,   441,    99,   195,   353,   355,   356,   357,   367,   418,
     358,   368,   231,   383,   371,   390,   372,   231,   385,   393,
     396,   460,   462,   464,   404,   454,   405,   361,   455,   408,
     409,   419,   146,   148,   149,   422,   423,   426,   427,   431,
     436,   472,   225,   439,   443,   466,   195,   444,   468,   225,
     445,    99,   448,   451,   479,   452,   453,   258,   259,   260,
     261,   262,   263,   264,   265,   266,   267,   456,   116,   470,
     471,   292,   114,   467,   293,   197,   241,   294,   199,    77,
      78,    79,    80,    81,   295,    82,    83,   296,   410,   141,
     401,   416,    70,    99,   325,   403,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    84,     0,     0,     0,
       0,     0,     0,     0,     0,    99,    99,    99,    99,    99,
      99,    99,    99,    99,    99,    99,    99,    99,    99,    99,
      99,    99,    99,   200,   201,   202,   268,   203,   204,   205,
     206,   207,   208,   209,   210,     0,    85,     0,    86,     0,
       0,    99,    87,     0,     0,     0,     0,     0,     0,   127,
       0,    88,    89,    90,    91,    92,    93,     0,     0,   199,
      77,    78,    79,    80,    81,   212,    82,    83,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    99,     1,    84,     2,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,     0,    99,   200,   201,   202,     0,   203,   204,
     205,   206,   207,   208,   209,   210,    26,    85,    27,    86,
      28,    29,    30,    87,     0,     0,     0,     0,     0,     0,
     127,   211,    88,    89,    90,    91,    92,    93,     0,     0,
       0,     0,     0,     0,     0,     0,   212,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    99,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   199,    77,    78,    79,    80,    81,     0,    82,    83,
       0,     0,     0,     0,    99,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    99,     1,    84,
       2,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,     0,     0,   200,   201,   202,     0,
     203,   204,   205,   206,   207,   208,   209,   210,    26,    85,
      27,    86,    28,    29,    30,    87,     0,     0,     0,     0,
       0,     0,   127,   324,    88,    89,    90,    91,    92,    93,
       0,     0,    76,    77,    78,    79,    80,    81,   212,    82,
      83,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     1,
      84,     2,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    76,    77,    78,    79,    80,
      81,     0,    82,    83,     0,     0,     0,     0,     0,    26,
      85,    27,    86,    28,    29,    30,    87,     0,     0,     0,
       0,     0,     0,    84,     0,    88,    89,    90,    91,    92,
      93,     0,     0,    76,    77,    78,    79,    80,    81,   212,
      82,    83,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    84,     0,    85,     0,    86,     0,     0,     0,    87,
       0,     0,     0,     0,     0,     0,     0,     0,    88,    89,
      90,    91,    92,    93,     0,     0,     0,     0,     0,     0,
       0,     0,   321,     0,     0,     0,     0,     0,     0,     0,
       0,    85,     0,    86,     0,     0,     0,    87,     0,     0,
       0,     0,     0,     0,     0,     0,    88,    89,    90,    91,
      92,    93,     0,     0,    76,    77,    78,    79,    80,    81,
     212,    82,    83,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     1,    84,     0,     0,     0,     0,     0,     0,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    85,    27,    86,     0,     0,     0,    87,     0,
       0,     0,     0,     0,     0,     0,     0,    88,    89,    90,
      91,    92,    93,    76,    77,    78,    79,    80,    81,     0,
      82,    83,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    76,    77,    78,    79,    80,
      81,    84,    82,    83,   236,     0,     0,     0,     8,     9,
      10,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    84,     0,     0,   301,     0,     0,     0,
       8,     9,    10,     0,     0,     0,     0,     0,     0,     0,
       0,    85,   121,    86,     0,     0,     0,    87,     0,     0,
       0,     0,   237,     0,     0,     0,    88,   238,    90,    91,
      92,    93,     0,    85,   121,    86,     0,     0,     0,    87,
       0,     0,     0,     0,   302,     0,     0,     0,    88,   303,
      90,    91,    92,    93,    76,    77,    78,    79,    80,    81,
       0,    82,    83,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    76,    77,    78,    79,
      80,    81,    84,    82,    83,   345,     0,     0,     0,     8,
       9,    10,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    84,     0,     0,   373,     0,     0,
       0,     8,     9,    10,     0,     0,     0,     0,     0,     0,
       0,     0,    85,   121,    86,     0,     0,     0,    87,     0,
       0,     0,     0,   346,     0,     0,     0,    88,   347,    90,
      91,    92,    93,     0,    85,   121,    86,     0,     0,     0,
      87,     0,     0,     0,     0,   374,     0,     0,     0,    88,
      89,    90,    91,    92,    93,    76,    77,    78,    79,    80,
      81,     0,    82,    83,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    76,    77,    78,
      79,    80,    81,    84,    82,    83,   378,     0,     0,     0,
       8,     9,    10,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    84,     0,     0,   428,     0,
       0,     0,     8,     9,    10,     0,     0,     0,     0,     0,
       0,     0,     0,    85,   121,    86,     0,     0,     0,    87,
       0,     0,     0,     0,   379,     0,     0,     0,    88,   380,
      90,    91,    92,    93,     0,    85,   121,    86,     0,     0,
       0,    87,     0,     0,     0,     0,   429,     0,     0,     0,
      88,    89,    90,    91,    92,    93,    76,    77,    78,    79,
      80,    81,     0,    82,    83,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    76,    77,
      78,    79,    80,    81,    84,    82,    83,     0,     0,     0,
       0,     8,     9,    10,     0,     0,     0,     0,     0,     0,
      76,    77,    78,    79,    80,    81,    84,    82,    83,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    85,   121,    86,     0,    84,     0,
      87,     0,     0,     0,     0,     0,     0,     0,     0,    88,
      89,    90,    91,    92,    93,     0,    85,     0,    86,     0,
       0,     0,    87,     0,     0,     0,   326,     0,   327,   224,
     440,    88,    89,    90,    91,    92,    93,     0,    85,     0,
      86,     0,     0,     0,    87,     0,     0,     0,   326,     0,
     327,   224,   469,    88,    89,    90,    91,    92,    93,    76,
      77,    78,    79,    80,    81,     0,    82,    83,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    76,    77,    78,    79,    80,    81,    84,    82,    83,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    76,    77,    78,    79,    80,    81,    84,
      82,    83,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    85,     0,    86,
       0,    84,     0,    87,     0,     0,     0,   326,     0,   327,
     224,     0,    88,    89,    90,    91,    92,    93,     0,    85,
       0,    86,     0,     0,     0,    87,     0,     0,     0,     0,
       0,     0,   224,     0,    88,    89,    90,    91,    92,    93,
       0,    85,     0,    86,     0,     0,     0,    87,   274,     0,
       0,     0,     0,     0,     0,     0,    88,    89,    90,    91,
      92,    93,    76,    77,    78,    79,    80,    81,     0,    82,
      83,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    76,    77,    78,    79,    80,    81,
      84,    82,    83,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    76,    77,    78,    79,
      80,    81,    84,    82,    83,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      85,     0,    86,     0,    84,     0,    87,     0,     0,     0,
       0,     0,     0,   361,     0,    88,    89,    90,    91,    92,
      93,     0,    85,     0,    86,     0,     0,     0,    87,   461,
       0,     0,     0,     0,     0,     0,     0,    88,    89,    90,
      91,    92,    93,     0,    85,     0,    86,     0,     0,     0,
      87,   463,     0,     0,     0,     0,     0,     0,     0,    88,
      89,    90,    91,    92,    93,    76,    77,    78,    79,    80,
      81,     0,    82,    83,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    76,    77,    78,
      79,    80,    81,    84,    82,    83,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    76,
      77,    78,    79,    80,    81,    84,    82,    83,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    85,     0,    86,     0,    84,     0,    87,
       0,     0,     0,     0,     0,     0,     0,     0,    88,    89,
      90,    91,    92,    93,     0,    85,     0,    86,     0,     0,
       0,   145,     0,     0,     0,     0,     0,     0,     0,     0,
      88,    89,    90,    91,    92,    93,    53,    85,     0,    86,
       0,     0,     0,   147,     0,     0,     0,     0,     0,     0,
       0,     0,    88,    89,    90,    91,    92,    93,     0,     0,
       0,     0,     0,     1,     0,     2,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,     0,
       0,     0,   229,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    26,     0,    27,     0,    28,     0,    30,
     333,   298,     0,     0,   186,     0,     0,     0,     0,     1,
      55,     2,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    26,
       0,    27,     0,    28,     0,    30,     1,   230,     2,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    26,     0,    27,     0,
      28,    29,    30,     0,     0,     0,     0,     0,     0,     0,
     127,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     1,   128,     2,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    26,     0,    27,     0,    28,     0,
      30,   185,   298,     0,     1,   186,     0,     0,     0,     0,
       0,    55,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    27,     0,     0,    29,
       0,     0,     1,     0,     0,     0,     0,     0,     0,   242,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    27,     0,     0,    29,     0,     0,
       0,     0,     0,     0,     0,     0,     1,   349,     2,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    26,     0,    27,     0,
      28,    29,    30,     0,     0,     0,     0,     0,     0,     1,
     127,     2,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    26,
       0,    27,     0,    28,     0,    30,     1,   376,     2,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,     0,    69,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    26,     0,    27,     0,
      28,    29,    30,     1,     0,     2,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    26,     0,    27,     0,    28,    29,    30,
       1,     0,     2,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,   402,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      26,     0,    27,     0,    28,     1,    30,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     1,    26,     0,    27,     0,    28,
       0,    30,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     1,     0,     0,     0,    27,     0,     0,    29,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,     0,     0,
       0,   412,     0,     0,     0,     0,     0,     1,     0,     0,
       0,     0,     0,     0,    27,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    27
};

static const yytype_int16 yycheck[] =
{
      49,    50,    87,    55,    49,    50,    55,    33,    61,     0,
     128,   133,   187,   205,   100,    51,    65,    77,   115,     3,
      65,   134,    49,   143,    51,    84,   137,    77,     3,     3,
      77,    77,   397,     3,    81,    81,    77,    65,    87,    59,
      79,    87,    87,    34,    35,    49,    50,     3,     3,    40,
      41,    42,   317,    44,    84,    14,    15,     3,   128,     0,
     145,   100,   147,   115,   134,   114,     3,   116,    65,   114,
      19,   116,   124,   186,     3,   124,   161,     3,   164,   165,
     166,   151,     3,    87,   449,   134,    59,   136,   137,    79,
     160,   136,   137,    77,     3,    85,   145,   182,   147,   125,
     145,   150,   147,    87,   130,   150,   142,   127,   136,   137,
      85,    85,   132,   139,    84,   142,   186,   114,   310,   116,
     312,    77,    77,   236,    80,   210,   391,   392,    99,   249,
     241,    87,    87,   185,   231,    94,    95,   186,    84,   136,
     137,   145,   133,   147,   100,   100,   150,    79,    77,    98,
      77,    77,    81,    85,   224,    81,    77,    77,    87,   132,
     335,    79,    79,    79,   200,    82,   236,    85,    77,    79,
     240,    80,    86,   200,    79,    38,    39,    40,    87,   231,
      85,     9,    10,    11,   100,   307,   272,   236,   301,    79,
     100,   240,   241,   385,   185,   308,   241,    96,   218,   269,
      81,   271,    83,    77,    97,   231,    78,    81,   244,    72,
     100,    77,   330,   241,    87,    81,     6,   244,    99,    92,
      93,    88,    89,    18,    87,    12,    13,    78,   313,   314,
     315,   301,    16,    17,    78,   305,    78,    79,   308,    78,
      79,   433,   434,   435,   241,    78,    79,    79,    80,    77,
     169,   170,   301,    81,    79,    83,   305,    78,    79,   308,
     330,    78,    79,    78,    79,   378,    78,    79,    78,   461,
      78,   463,   342,    78,    79,   345,    78,    79,     3,   397,
     472,   333,   335,   475,    80,   477,   171,   172,   173,   174,
     326,   361,     3,   342,   364,    78,    79,   317,    99,   326,
     370,    80,    77,   373,    77,   167,   168,    77,   378,   358,
     175,   176,   382,   358,    77,     3,   307,   353,   100,   100,
      78,   370,    79,    82,   442,   351,   353,   397,    82,   378,
      49,   449,    51,   382,    80,    78,    78,    78,    78,   366,
      79,    78,   333,    78,    82,    63,    82,   338,    80,   100,
       3,   436,   437,   438,     3,   425,    82,    84,   428,    82,
      82,    82,    81,    82,    83,    82,    78,    82,    82,   100,
      77,    61,   442,    82,    82,   445,   425,    82,   448,   449,
      80,   100,    80,    82,   100,    82,    82,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    82,   447,    82,
      82,   177,   447,   447,   178,   125,   136,   179,     3,     4,
       5,     6,     7,     8,   180,    10,    11,   181,   351,    71,
     331,   361,    44,   142,   218,   338,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    31,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   164,   165,   166,   167,   168,
     169,   170,   171,   172,   173,   174,   175,   176,   177,   178,
     179,   180,   181,    58,    59,    60,    99,    62,    63,    64,
      65,    66,    67,    68,    69,    -1,    71,    -1,    73,    -1,
      -1,   200,    77,    -1,    -1,    -1,    -1,    -1,    -1,    84,
      -1,    86,    87,    88,    89,    90,    91,    -1,    -1,     3,
       4,     5,     6,     7,     8,   100,    10,    11,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   244,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    -1,   272,    58,    59,    60,    -1,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    -1,    -1,    -1,    -1,    -1,    -1,
      84,    85,    86,    87,    88,    89,    90,    91,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   100,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   326,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     3,     4,     5,     6,     7,     8,    -1,    10,    11,
      -1,    -1,    -1,    -1,   353,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   366,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    -1,    -1,    58,    59,    60,    -1,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    -1,    -1,    -1,    -1,
      -1,    -1,    84,    85,    86,    87,    88,    89,    90,    91,
      -1,    -1,     3,     4,     5,     6,     7,     8,   100,    10,
      11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,     3,     4,     5,     6,     7,
       8,    -1,    10,    11,    -1,    -1,    -1,    -1,    -1,    70,
      71,    72,    73,    74,    75,    76,    77,    -1,    -1,    -1,
      -1,    -1,    -1,    31,    -1,    86,    87,    88,    89,    90,
      91,    -1,    -1,     3,     4,     5,     6,     7,     8,   100,
      10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    31,    -1,    71,    -1,    73,    -1,    -1,    -1,    77,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    86,    87,
      88,    89,    90,    91,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   100,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    71,    -1,    73,    -1,    -1,    -1,    77,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    86,    87,    88,    89,
      90,    91,    -1,    -1,     3,     4,     5,     6,     7,     8,
     100,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    30,    31,    -1,    -1,    -1,    -1,    -1,    -1,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    71,    72,    73,    -1,    -1,    -1,    77,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    86,    87,    88,
      89,    90,    91,     3,     4,     5,     6,     7,     8,    -1,
      10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     3,     4,     5,     6,     7,
       8,    31,    10,    11,    34,    -1,    -1,    -1,    38,    39,
      40,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    31,    -1,    -1,    34,    -1,    -1,    -1,
      38,    39,    40,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    71,    72,    73,    -1,    -1,    -1,    77,    -1,    -1,
      -1,    -1,    82,    -1,    -1,    -1,    86,    87,    88,    89,
      90,    91,    -1,    71,    72,    73,    -1,    -1,    -1,    77,
      -1,    -1,    -1,    -1,    82,    -1,    -1,    -1,    86,    87,
      88,    89,    90,    91,     3,     4,     5,     6,     7,     8,
      -1,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     3,     4,     5,     6,
       7,     8,    31,    10,    11,    34,    -1,    -1,    -1,    38,
      39,    40,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    31,    -1,    -1,    34,    -1,    -1,
      -1,    38,    39,    40,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    71,    72,    73,    -1,    -1,    -1,    77,    -1,
      -1,    -1,    -1,    82,    -1,    -1,    -1,    86,    87,    88,
      89,    90,    91,    -1,    71,    72,    73,    -1,    -1,    -1,
      77,    -1,    -1,    -1,    -1,    82,    -1,    -1,    -1,    86,
      87,    88,    89,    90,    91,     3,     4,     5,     6,     7,
       8,    -1,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,     4,     5,
       6,     7,     8,    31,    10,    11,    34,    -1,    -1,    -1,
      38,    39,    40,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    31,    -1,    -1,    34,    -1,
      -1,    -1,    38,    39,    40,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    71,    72,    73,    -1,    -1,    -1,    77,
      -1,    -1,    -1,    -1,    82,    -1,    -1,    -1,    86,    87,
      88,    89,    90,    91,    -1,    71,    72,    73,    -1,    -1,
      -1,    77,    -1,    -1,    -1,    -1,    82,    -1,    -1,    -1,
      86,    87,    88,    89,    90,    91,     3,     4,     5,     6,
       7,     8,    -1,    10,    11,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,     4,
       5,     6,     7,     8,    31,    10,    11,    -1,    -1,    -1,
      -1,    38,    39,    40,    -1,    -1,    -1,    -1,    -1,    -1,
       3,     4,     5,     6,     7,     8,    31,    10,    11,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    71,    72,    73,    -1,    31,    -1,
      77,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    86,
      87,    88,    89,    90,    91,    -1,    71,    -1,    73,    -1,
      -1,    -1,    77,    -1,    -1,    -1,    81,    -1,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    -1,    71,    -1,
      73,    -1,    -1,    -1,    77,    -1,    -1,    -1,    81,    -1,
      83,    84,    85,    86,    87,    88,    89,    90,    91,     3,
       4,     5,     6,     7,     8,    -1,    10,    11,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     3,     4,     5,     6,     7,     8,    31,    10,    11,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     3,     4,     5,     6,     7,     8,    31,
      10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    71,    -1,    73,
      -1,    31,    -1,    77,    -1,    -1,    -1,    81,    -1,    83,
      84,    -1,    86,    87,    88,    89,    90,    91,    -1,    71,
      -1,    73,    -1,    -1,    -1,    77,    -1,    -1,    -1,    -1,
      -1,    -1,    84,    -1,    86,    87,    88,    89,    90,    91,
      -1,    71,    -1,    73,    -1,    -1,    -1,    77,    78,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    86,    87,    88,    89,
      90,    91,     3,     4,     5,     6,     7,     8,    -1,    10,
      11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     3,     4,     5,     6,     7,     8,
      31,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     3,     4,     5,     6,
       7,     8,    31,    10,    11,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      71,    -1,    73,    -1,    31,    -1,    77,    -1,    -1,    -1,
      -1,    -1,    -1,    84,    -1,    86,    87,    88,    89,    90,
      91,    -1,    71,    -1,    73,    -1,    -1,    -1,    77,    78,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    86,    87,    88,
      89,    90,    91,    -1,    71,    -1,    73,    -1,    -1,    -1,
      77,    78,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    86,
      87,    88,    89,    90,    91,     3,     4,     5,     6,     7,
       8,    -1,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,     4,     5,
       6,     7,     8,    31,    10,    11,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,
       4,     5,     6,     7,     8,    31,    10,    11,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    71,    -1,    73,    -1,    31,    -1,    77,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    86,    87,
      88,    89,    90,    91,    -1,    71,    -1,    73,    -1,    -1,
      -1,    77,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      86,    87,    88,    89,    90,    91,     3,    71,    -1,    73,
      -1,    -1,    -1,    77,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    86,    87,    88,    89,    90,    91,    -1,    -1,
      -1,    -1,    -1,    30,    -1,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    -1,
      -1,    -1,     3,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    70,    -1,    72,    -1,    74,    -1,    76,
      77,    78,    -1,    -1,    81,    -1,    -1,    -1,    -1,    30,
      87,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    70,
      -1,    72,    -1,    74,    -1,    76,    30,    78,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    70,    -1,    72,    -1,
      74,    75,    76,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      84,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    30,    99,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    70,    -1,    72,    -1,    74,    -1,
      76,    77,    78,    -1,    30,    81,    -1,    -1,    -1,    -1,
      -1,    87,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    72,    -1,    -1,    75,
      -1,    -1,    30,    -1,    -1,    -1,    -1,    -1,    -1,    85,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    72,    -1,    -1,    75,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    30,    85,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    70,    -1,    72,    -1,
      74,    75,    76,    -1,    -1,    -1,    -1,    -1,    -1,    30,
      84,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    70,
      -1,    72,    -1,    74,    -1,    76,    30,    78,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    -1,    57,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    70,    -1,    72,    -1,
      74,    75,    76,    30,    -1,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    70,    -1,    72,    -1,    74,    75,    76,
      30,    -1,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      70,    -1,    72,    -1,    74,    30,    76,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    30,    70,    -1,    72,    -1,    74,
      -1,    76,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    30,    -1,    -1,    -1,    72,    -1,    -1,    75,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    -1,    -1,
      -1,    59,    -1,    -1,    -1,    -1,    -1,    30,    -1,    -1,
      -1,    -1,    -1,    -1,    72,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    72
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    30,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    70,    72,    74,    75,
      76,   102,   130,   131,   134,   135,   136,   137,   143,   146,
     147,   148,   149,   166,   176,   177,   178,     3,    84,    77,
      77,    77,     0,     3,    77,    87,   100,   132,   133,   150,
     151,   152,   131,   131,     3,    84,   131,   131,   131,    57,
     177,    84,     3,   105,   144,   145,     3,     4,     5,     6,
       7,     8,    10,    11,    31,    71,    73,    77,    86,    87,
      88,    89,    90,    91,   103,   104,   106,   107,   110,   112,
     113,   114,   115,   116,   117,   118,   119,   120,   121,   122,
     123,   124,   125,   129,   135,   140,   147,   158,   158,   129,
     150,    72,   147,   152,   153,    79,   100,    84,    99,   130,
     131,   169,   179,    77,    81,   151,    84,   138,   139,   140,
     166,   144,    99,    79,    85,    77,   112,    77,   112,   112,
      77,    77,   112,   125,   126,   128,   158,     9,    10,    11,
      77,    81,    83,   114,    87,    92,    93,    88,    89,    12,
      13,    14,    15,    94,    95,    16,    17,    86,    96,    97,
      18,    19,    98,    78,   140,    77,    81,   152,   159,   160,
     140,    78,    78,    79,    78,   147,   152,   133,   150,     3,
      58,    59,    60,    62,    63,    64,    65,    66,    67,    68,
      69,    85,   100,   128,   130,   167,   168,   169,   170,   171,
     172,   173,   174,   175,    84,   126,   161,   130,   169,     3,
      78,   131,   154,   155,   156,   157,    34,    82,    87,   126,
     153,   138,    85,   139,    80,   100,   141,   142,   150,    79,
      85,   129,    85,   145,   158,   158,   158,   126,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    99,   127,
      78,    79,    78,     3,    78,   111,   126,   128,     3,   114,
     114,   114,   115,   115,   116,   116,   117,   117,   117,   117,
     118,   118,   119,   120,   121,   122,   123,   128,    78,   154,
     159,    34,    82,    87,   126,   153,   160,    77,    81,     6,
      80,   129,    80,    77,    77,    77,   167,    77,     3,   100,
     100,   100,   128,   100,    85,   171,    81,    83,   161,   162,
     163,   164,   165,    77,   150,   152,   159,    78,    79,    78,
      79,   126,   153,    82,    82,    34,    82,    87,   126,    85,
     129,    79,   100,    80,    85,    78,    78,    78,    79,   126,
     126,    84,   114,    78,    79,    82,    80,    78,    78,   126,
     153,    82,    82,    34,    82,   126,    78,   154,    34,    82,
      87,   126,   153,    78,   167,    80,   167,   128,   128,   128,
      63,   130,   172,   100,   100,   129,     3,    79,    85,   161,
      99,   165,    56,   156,     3,    82,   126,   126,    82,    82,
     142,   129,    59,   108,   109,   158,   162,   126,   125,    82,
     126,   126,    82,    78,   126,   153,    82,    82,    34,    82,
     126,   100,   167,    78,    78,    78,    77,   172,   172,    82,
      85,   161,   163,    82,    82,    80,    78,    79,    80,    79,
      85,    82,    82,    82,   126,   126,    82,   167,   167,   167,
     128,    78,   128,    78,   128,   161,   126,   109,   126,    85,
      82,    82,    61,    78,   167,    78,   167,    78,   167,   100,
     167,   167
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_uint8 yyr1[] =
{
       0,   101,   102,   103,   103,   103,   103,   103,   104,   104,
     104,   105,   106,   106,   107,   108,   108,   109,   109,   110,
     110,   110,   110,   110,   110,   110,   110,   110,   110,   111,
     111,   112,   112,   112,   112,   112,   112,   112,   113,   113,
     113,   113,   113,   113,   114,   114,   115,   115,   115,   115,
     116,   116,   116,   117,   117,   117,   118,   118,   118,   118,
     118,   119,   119,   119,   120,   120,   121,   121,   122,   122,
     123,   123,   124,   124,   125,   125,   126,   126,   127,   127,
     127,   127,   127,   127,   127,   127,   127,   127,   127,   128,
     128,   129,   130,   130,   130,   131,   131,   131,   131,   131,
     131,   131,   131,   131,   131,   132,   132,   133,   133,   134,
     134,   134,   134,   134,   134,   135,   135,   135,   135,   135,
     135,   135,   135,   135,   135,   135,   135,   135,   135,   135,
     135,   136,   136,   136,   137,   137,   138,   138,   139,   139,
     139,   140,   140,   140,   140,   141,   141,   142,   142,   142,
     143,   143,   143,   143,   143,   144,   144,   145,   145,   146,
     147,   147,   147,   147,   148,   148,   149,   149,   150,   150,
     151,   151,   151,   151,   151,   151,   151,   151,   151,   151,
     151,   151,   151,   151,   152,   152,   152,   152,   153,   153,
     154,   154,   155,   155,   156,   156,   156,   157,   157,   158,
     158,   159,   159,   159,   160,   160,   160,   160,   160,   160,
     160,   160,   160,   160,   160,   160,   160,   160,   160,   160,
     160,   160,   160,   160,   160,   161,   161,   161,   162,   162,
     162,   162,   163,   164,   164,   165,   165,   166,   167,   167,
     167,   167,   167,   167,   168,   168,   168,   169,   169,   170,
     170,   171,   171,   172,   172,   173,   173,   173,   174,   174,
     174,   174,   174,   174,   175,   175,   175,   175,   175,   176,
     176,   177,   177,   178,   178,   179,   179
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     2,     1,     1,     1,     3,     1,     1,     1,
       1,     1,     1,     1,     6,     1,     3,     3,     3,     1,
       4,     3,     4,     3,     3,     2,     2,     6,     7,     1,
       3,     1,     2,     2,     2,     2,     4,     4,     1,     1,
       1,     1,     1,     1,     1,     4,     1,     3,     3,     3,
       1,     3,     3,     1,     3,     3,     1,     3,     3,     3,
       3,     1,     3,     3,     1,     3,     1,     3,     1,     3,
       1,     3,     1,     3,     1,     5,     1,     3,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       3,     1,     2,     3,     1,     2,     1,     2,     1,     2,
       1,     2,     1,     2,     1,     1,     3,     3,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     4,     5,     2,     1,     1,     1,     2,     2,     3,
       1,     2,     1,     2,     1,     1,     3,     2,     3,     1,
       4,     5,     5,     6,     2,     1,     3,     3,     1,     4,
       1,     1,     1,     1,     1,     1,     4,     4,     2,     1,
       1,     3,     3,     4,     6,     5,     5,     6,     5,     4,
       4,     4,     3,     4,     3,     2,     2,     1,     1,     2,
       3,     1,     1,     3,     2,     2,     1,     1,     3,     2,
       1,     2,     1,     1,     3,     2,     3,     5,     4,     5,
       4,     3,     3,     3,     4,     6,     5,     5,     6,     4,
       4,     2,     3,     3,     4,     3,     4,     1,     2,     1,
       4,     3,     2,     1,     2,     3,     2,     7,     1,     1,
       1,     1,     1,     1,     3,     4,     3,     2,     3,     1,
       2,     1,     1,     1,     2,     7,     5,     5,     5,     7,
       6,     7,     6,     7,     3,     2,     2,     2,     3,     1,
       2,     1,     1,     4,     3,     1,     2
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
  case 2: /* SPRIME: translation_unit ENDOFFILE  */
#line 27 "parser.y"
                                   {
    return 0;
}
#line 2214 "parser.tab.c"
    break;


#line 2218 "parser.tab.c"

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

#line 536 "parser.y"

#include <stdio.h>

int
yyreport_syntax_error (const yypcontext_t *ctx)
{
  int res = 0;
  fprintf(stderr,"Line %d - column %d:", yylloc.first_line, yylloc.first_column);
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
    for(int i = 0; i < yylloc.first_column - 1; i++)
        fprintf(stderr,"_");
    fprintf(stderr,"^\n");
}
