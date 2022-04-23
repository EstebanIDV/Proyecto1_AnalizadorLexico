//
// Created by esteban on 22/4/22.
//

#ifndef PROYECTO1_ANALIZADORLEXICO_SCANNER_H
#define PROYECTO1_ANALIZADORLEXICO_SCANNER_H
#include <bits/types/FILE.h>
typedef enum token_types {
    KEYWORD, OPERATOR, STRING, CONSTANT, SPECIALCHAR, IDENT, ERROR
} token_type;


typedef enum token_codes {
    INTVAL, FLOATVAL, STRINGVAL, CHARVAL, IDENTIFIER, SEMICOLON, END_OF_FILE, PREPROCESS, UNKNOWN, AUTO, BREAK, CASE, CHAR, CONST, CONTINUE, DEFAULT, DO, DOUBLE, ELSE, ENUM, EXTERN, FLOAT, FOR, GOTO, IF, INT,
    LONG, REGISTER, RETURN, SHORT, SIGNED, SIZEOF, STATIC, STRUCT, SWITCH, TYPEDEF, UNION, UNSIGNED, VOID, VOLATILE, WHILE, TILDE, EXCLAMATIONMARK, NUMBERSIGN,
    DOLLARSIGN, PERCENTAGESIGN, CARET, AMPERSAND, ASTERISK, LPARENTHESIS, RPARENTHESIS, UNDERSCORE, PLUSSIGN, VERTICALSIGN, BACKSLASH, APOSTROPHE, MINUSSIGN,
    EQUALSIGN, LCURLY, RCURLY, LBRACKET, RBRACKET, COLON, DOUBLEQUOTATIONMARK, SINGLEQUOTATIONMARK, LWRBRACKET, GRTRBRACKET, QUESTIONMARK,
    COMMA, PERIOD, SLASH, INCREMENT, DECREMENT, EQUALOP, NOTEQUALOP, GRTROREQUALTHANOP, LWROREQUALTHANOP, ANDOP, OROP, LSHIFTOP, RSHIFTOP, ADDASSIGN,
    SUBASSIGN, MULASSIGN, DIVASSIGN, MODASSIGN, LSHIFTASSIGN, RSHIFTASSIGN, BITWISEASSIGN, BITWISEXORASSIGN,
    BITWISEANDASSIGN, TAB, NEWLINE
} token_code;



typedef struct tokens{
    token_code tokenCode;
    char *lexemaChar;
    int lexemaInt;
    float lexemaFloat;
} token;

token GetToken();
void infile(FILE *file);
void finish();
void generateSlides();
#endif //PROYECTO1_ANALIZADORLEXICO_SCANNER_H