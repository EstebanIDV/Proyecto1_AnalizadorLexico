%option noyywrap
%{

#include <stdio.h>
#include <string.h>
#include "scanner.h"
int intvar;
float floatvar;

int intval;
float floatval;
%}

inttoken [0-9]+
floattoken [0-9]+\.[0-9]+
chartoken \'.\'
stringtoken \".*\"
identifier ([a-zA-Z|_])([a-zA-Z|_])
doublequotationmark	\"
singlequotationmark \'
backslash	\\
comment	\/\/.*
multilinecomment	/\*([^*]|[\r\n]|(\*+([^*/]|[\r\n])))*\*+/
preprocess	\#.*



%%
{inttoken}	{intval = atoi(yytext) ;return INTVAL;}
{floattoken}	{floatval = atof(yytext) ;return FLOATVAL;}
{stringtoken}	{return STRINGVAL;}
{chartoken}	{return CHARVAL;}
{doublequotationmark}	{return DOUBLEQUOTATIONMARK;}
{singlequotationmark}	{return SINGLEQUOTATIONMARK;}
{backslash}	{return BACKSLASH;}
\t {return TAB;}
\n	{return NEWLINE;}
"auto"	{ return AUTO;}
"break"	{return BREAK;}
"case"	{return CASE;}
"char"	{return CHAR;}
"const"	{return CONST;}
"continue"	{return CONTINUE;}
"default"	{return DEFAULT;}
"do"	{return DO;}
"double"	{return DOUBLE;}
"else"	{return ELSE;}
"enum" {return ENUM;}
"extern"	{return EXTERN;}
"float"	{return FLOAT;}
"for"	{return FOR;}
"goto"	{return GOTO;}
"if"	{return IF;}
"int"	{return INT;}
"long" {return LONG;}
"register"	{return REGISTER;}
"return"	{return RETURN;}
"short"	{return SHORT;}
"signed"	{return SIGNED;}
"sizeof"	{return SIZEOF;}
"static"	{return STATIC;}
"struct"	{return STRUCT;}
"switch"	{return SWITCH;}
"typedef"	{return TYPEDEF;}
"union"	{return UNION;}
"unsigned"	{return UNSIGNED;}
"void"	{return VOID;}
"volatile"	{return VOLATILE;}
"while"	{return WHILE;}
"++"	{return INCREMENT;}
"--"	{return DECREMENT;}
"=="	{return EQUALOP;}
"!="	{return NOTEQUALOP;}
">="	{return GRTROREQUALTHANOP;}
"<="	{return LWROREQUALTHANOP;}
"&&"	{return ANDOP;}
"||"	{return OROP;}
"<<"	{return LSHIFTOP;}
">>"	{return RSHIFTOP;}
"+="	{return ADDASSIGN;}
"-="	{return SUBASSIGN;}
"*="	{return MULASSIGN;}
"/="	{return DIVASSIGN;}
"%="	{return MODASSIGN;}
"<<="	{return LSHIFTASSIGN;}
">>="	{return RSHIFTASSIGN;}
"&="	{return BITWISEASSIGN;}
"^="	{return BITWISEXORASSIGN;}
"|="	{return BITWISEANDASSIGN;}
"~" {return TILDE;}
"!" {return EXCLAMATIONMARK;}
"#" {return NUMBERSIGN;}
"$"	{return DOLLARSIGN	;}
"%"	{return PERCENTAGESIGN;}
"^"	{return CARET;}
"&"	{return AMPERSAND;}
"*"	{return ASTERISK;}
"("	{return LPARENTHESIS;}
")"	{return RPARENTHESIS;}
"_"	{return UNDERSCORE;}
"+"	{return PLUSSIGN;}
"|"	{return VERTICALSIGN;}
"`"	{return APOSTROPHE;}
"-"	{return MINUSSIGN;}
"="	{return EQUALSIGN;}
"{"	{return LCURLY;}
"}"	{return RCURLY;}
"["	{return LBRACKET;}
"]"	{return RBRACKET;}
":"	{return COLON;}
";"	{return SEMICOLON;}
"<"	{return LWRBRACKET;}
">"	{return GRTRBRACKET;}
"?"	{return QUESTIONMARK;}
","	{return COMMA;}
"."	{return PERIOD;}
"/"	{return SLASH;}
{identifier} {return IDENTIFIER;}
<<EOF>>	{return END_OF_FILE;}
" "	{}
.	{return UNKNOWN;}

%%

void infile(FILE *file){
	yyin = file;
}

token GetToken(){
	struct tokens tok;
	token_code code = yylex();
        if(code == INTVAL){
		tok.lexemaInt = intval;
	}else if(code == FLOATVAL){
     		tok.lexemaFloat = floatval;
    }else if(code != END_OF_FILE){
		tok.lexemaChar = yytext;
	}
	tok.tokenCode = code;
	return tok;
}

void finish(void){
	fclose(yyin);
}