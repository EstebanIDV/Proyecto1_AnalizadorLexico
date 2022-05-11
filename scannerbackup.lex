%option noyywrap yylineno
%{

#include <stdio.h>
#include <string.h>
#include "parser.tab.c"
int intvar;
float floatvar;

int intval;
float floatval;

int yycolumn = 1;


%}


inttoken [0-9]+
floattoken [0-9]+\.[0-9]+
chartoken \'.\'
stringtoken \".*\"
identifier ([a-zA-Z|_])([a-zA-Z0-9|_])*
doublequotationmark	\"
singlequotationmark \'
backslash	\\
comment	\/\/.*
multilinecomment	/\*([^*]|[\r\n]|(\*+([^*/]|[\r\n])))*\*+/
preprocess	\#.+



%%
{inttoken} {intval = atoi(yytext) ;return INTVAL;}
{floattoken} {floatval = atof(yytext) ;return FLOATVAL;}
{stringtoken} {return STRINGVAL;}
{chartoken}	{return CHARVAL;}
{preprocess} {return UNKNOWN;}
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
"inline"	{return INLINE;}
"int"	{return INT;}
"long" {return LONG;}
"register"	{return REGISTER;}
"return"	{return RETURN;}
"restrict"	{return RESTRICT;}
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
"_Alignas" { return ALIGNAS; }
"_Alignof" { return ALIGNOF; }
"_Atomic"  { return ATOMIC; }
"_Bool" { return BOOL; }
"_Complex" { return COMPLEX; }
"_Generic" { return GENERIC; }
"_Imaginary" { return IMAGINARY; }
"_Noreturn"  { return NORETURN; }
"_Static_assert" { return STATIC_ASSERT; }
"_Thread_local" { return THREAD_LOCAL; }
"__func__" { return FUNC_NAME; }
"..."   { return ELLIPSIS; }
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
"->"	{ return PTR_OP; }
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
{backslash}	{return BACKSLASH;}
{doublequotationmark}	{return DOUBLEQUOTATIONMARK;}
{singlequotationmark}	{return SINGLEQUOTATIONMARK;}
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
/*
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
*/
void finish(void){
	fclose(yyin);
}