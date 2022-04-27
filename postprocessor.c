//
// Created by esteban on 26/3/22.
//
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
#include "global.h"
#include "scanner.h"
int keywordCounter = 0;
int operatorCounter = 0;
int stringCounter = 0;
int constantCounter = 0;
int specialCounter = 0;
int identCounter = 0;
int errorCounter = 0;
FILE * resulttex;


char*  getCurrentForeground(token_type currentType){
    switch (currentType) {
        case KEYWORD:
            return "Blue";
        case OPERATOR:
            return "ForestGreen";
        case SPECIALCHAR:
            return "white";
        case CONSTANT:
            return "orange";
        case IDENT:
            return "Yellow";
        case STRING:
            return "black";
        default:
            return "Sepia";

    }
}
char*  getCurrentBackground(token_type currentType){
    switch (currentType) {
        case KEYWORD:
            return "Cyan";
        case OPERATOR:
            return "LimeGreen";
        case SPECIALCHAR:
            return "teal";
        case CONSTANT:
            return "Yellow";
        case IDENT:
            return "Violet";
        case STRING:
            return "gray";
        default:
            return "Red";

    }
}

char*  getCurrentFont(token_type currentType){
    switch (currentType) {
        case KEYWORD:
            return "cmr";
        case OPERATOR:
            return "lmtt";
        case SPECIALCHAR:
            return "put";
        case CONSTANT:
            return "qag";
        case IDENT:
            return "cmss";
        case STRING:
            return "lmdh";
        default:
            return "qtm";

    }
}
token_type getCurrentToken(token_code currentToken){
    switch (currentToken) {
        case CHARVAL:
        case FLOATVAL:
        case INTVAL:
            constantCounter++;
            return CONSTANT;
        case BREAK:
        case CASE:
        case AUTO:
        case CHAR:
        case CONST:
        case CONTINUE:
        case DEFAULT:
        case DO:
        case DOUBLE:
        case ELSE:
        case ENUM:
        case EXTERN:
        case FLOAT:
        case FOR:
        case GOTO:
        case IF:
        case INT:
        case LONG:
        case REGISTER:
        case RETURN:
        case SHORT:
        case SIGNED:
        case SIZEOF:
        case STATIC:
        case STRUCT:
        case SWITCH:
        case TYPEDEF:
        case UNION:
        case UNSIGNED:
        case VOID:
        case VOLATILE:
        case WHILE:
            keywordCounter++;
            return KEYWORD;
        case LCURLY:
        case SEMICOLON:
        case NUMBERSIGN:
        case DOLLARSIGN:
        case LPARENTHESIS:
        case RPARENTHESIS:
        case UNDERSCORE:
        case BACKSLASH:
        case APOSTROPHE:
        case RCURLY:
        case LBRACKET:
        case RBRACKET:
        case COLON:
        case DOUBLEQUOTATIONMARK:
        case SINGLEQUOTATIONMARK:
        case COMMA:
        case PERIOD:
            specialCounter++;
            return SPECIALCHAR;
        case INCREMENT:
        case TILDE:
        case EXCLAMATIONMARK:
        case PERCENTAGESIGN:
        case CARET:
        case AMPERSAND:
        case ASTERISK:
        case PLUSSIGN:
        case VERTICALSIGN:
        case MINUSSIGN:
        case EQUALSIGN:
        case LWRBRACKET:
        case GRTRBRACKET:
        case QUESTIONMARK:
        case SLASH:
        case DECREMENT:
        case EQUALOP:
        case NOTEQUALOP:
        case GRTROREQUALTHANOP:
        case LWROREQUALTHANOP:
        case ANDOP:
        case OROP:
        case LSHIFTOP:
        case RSHIFTOP:
        case ADDASSIGN:
        case SUBASSIGN:
        case MULASSIGN:
        case DIVASSIGN:
        case MODASSIGN:
        case LSHIFTASSIGN:
        case RSHIFTASSIGN:
        case BITWISEASSIGN:
        case BITWISEXORASSIGN:
        case BITWISEANDASSIGN:
            operatorCounter++;
            return OPERATOR;
        case STRINGVAL:
            stringCounter++;
            return STRING;
        case IDENTIFIER:
            identCounter++;
            return IDENT;
        default:
            errorCounter++;
            return ERROR;
    }
}
void setLine(token_type currentType, char* toRead){

    int currentPosition=0;
    fputs("\\fontfamily{",resulttex);
    fputs(getCurrentFont(currentType),resulttex);
    fputs("}\\selectfont\\textcolor{",resulttex);
    fputs(getCurrentForeground(currentType),resulttex);
    fputs("}{\\colorbox{",resulttex);
    fputs(getCurrentBackground(currentType),resulttex);
    fputs("}{",resulttex);
    while (toRead[currentPosition]!='\0'){
        if(toRead[currentPosition]=='}' || toRead[currentPosition]=='{' || toRead[currentPosition]=='^' || toRead[currentPosition]=='%'  || toRead[currentPosition]=='_' || toRead[currentPosition]=='&'  || toRead[currentPosition]=='#' || toRead[currentPosition]=='$'  ){
            fputs("\\",resulttex);
            fputc(toRead[currentPosition],resulttex);
        }else if(toRead[currentPosition] == '\\'){
            fputs("\\textbackslash }}",resulttex);
        }else if(toRead[currentPosition] == '~'){
            fputs("\\textasciitilde}}",resulttex);
        }else if(toRead[currentPosition] == '>' || toRead[currentPosition] == '<'){
            fputs("$",resulttex);
            fputc(toRead[currentPosition],resulttex);
            fputs("$",resulttex);
        }else{
            fputc(toRead[currentPosition],resulttex);
        }
        currentPosition++;
    }
    fputs("}}",resulttex);

}
void generateSlides(){

    rewind(tempfptr2);
    resulttex = fopen("analysis.tex","w");
    infile(tempfptr2);
    char workingString[500];
    token currentToken = GetToken();
    bool isSpace = false;
    fputs("\\begin{frame}[allowframebreaks]{Programa Fuente}\n\t\t",resulttex);
    while(currentToken.tokenCode!= END_OF_FILE){
        if(currentToken.tokenCode==NEWLINE){
            if(isSpace==false){
                fputs("\\newline \n", resulttex);
                isSpace = true;
            }


        }else if(currentToken.tokenCode==TAB){
            isSpace = false;
            fputs("\\hspace*{1em} \n",resulttex);
        }else{
            isSpace = false;
            token_type currentType = getCurrentToken(currentToken.tokenCode);
            switch (currentToken.tokenCode) {
                case INTVAL:
                    sprintf(workingString, "%d", currentToken.lexemaInt );
                    setLine(currentType, workingString);
                    //workingString = sprintf("%d}} ", getCurrentFont(currentType), getCurrentForeground(currentType), getCurrentBackground(currentType),currentToken.lexemaInt);
                    //fputs(workingString,resulttex);
                    break;
                case FLOATVAL:
                    sprintf(workingString, "%f", currentToken.lexemaFloat );
                    setLine(currentType, workingString);
                    //workingString = sprintf("\\fontfamily{%s}\\selectfont\\textcolor{%s}{\\colorbox{%s}{%f}} ", getCurrentFont(currentType), getCurrentForeground(currentType), getCurrentBackground(currentType)currentToken.lexemaFloat);

                    break;
                default:
                    //workingString = sprintf("\\fontfamily{%s}\\selectfont\\textcolor{%s}{\\colorbox{%s}{%f}} ", getCurrentFont(currentType), getCurrentForeground(currentType), getCurrentBackground(currentType),currentToken.lexemaChar);
                    sprintf(workingString, "%s", currentToken.lexemaChar );

                    setLine(currentType, workingString);
                    break;
            }
        }

        //printf("%d",tokencounter);

        currentToken = GetToken();
    }
    int maxy=keywordCounter;
    fputs("\n\t\\end{frame}\n",resulttex);
    fputs("\\begin{frame}[allowframebreaks]{Estadísticas}\n\t\t\\begin{tikzpicture}\n\t\t\\begin{axis}[ybar interval, xtick=empty,legend pos=outer north east,ymax=",resulttex);

    if(maxy<operatorCounter)
        maxy = operatorCounter;
    if(maxy<stringCounter)
        maxy = stringCounter;
    if(maxy<constantCounter)
        maxy = constantCounter;
    if(maxy<specialCounter)
        maxy = specialCounter;
    if(maxy<identCounter)
        maxy = identCounter;
    if(maxy<errorCounter)
        maxy = errorCounter;

    sprintf(workingString, "%d", maxy+5);
    fputs(workingString,resulttex);
    fputs(",ymin=0]\n\t\t",resulttex);


    sprintf(workingString, "\\addplot[style = {fill=Cyan}] coordinates { (1, %d)  (1.5, 4)};\n\t", keywordCounter);
    fputs(workingString,resulttex);
    sprintf(workingString, "\\addplot[style = {fill=LimeGreen}] coordinates { (1, %d)  (1.5, 4)};\n\t", operatorCounter);
    fputs(workingString,resulttex);
    sprintf(workingString, "\\addplot[style = {fill=gray}] coordinates { (1, %d)  (1.5, 4)};\n\t", stringCounter);
    fputs(workingString,resulttex);
    sprintf(workingString, "\\addplot[style = {fill=Yellow}] coordinates { (1, %d)  (1.5, 4)};\n\t", constantCounter);
    fputs(workingString,resulttex);
    sprintf(workingString, "\\addplot[style = {fill=teal}] coordinates { (1, %d)  (1.5, 4)};\n\t", specialCounter);
    fputs(workingString,resulttex);
    sprintf(workingString, "\\addplot[style = {fill=Violet}] coordinates { (1, %d)  (1.5, 4)};\n\t", identCounter);
    fputs(workingString,resulttex);
    sprintf(workingString, "\\addplot[style = {fill=red}] coordinates { (1, %d)  (1.5, 4)};\n\t", errorCounter);
    fputs(workingString,resulttex);


    fputs("\\legend{Keywords, Operator, String, Constant, Special character, Identifiers, Errors}  \\end{axis}\\end{tikzpicture}\n\t\\end{frame}\n",resulttex);







    fputs("\n\t\\begin{frame}[allowframebreaks]{Estadísticas}\n"
          "\t\t\\begin{tikzpicture}\n"
          "\t\t\\def\\printonlypositive#1{\\ifnum#1>0\n"
          "#1\n"
          "\\fi}\n"
          "\\pie [rotate = 90,\n"
          "text = legend,\n"
          "before number=\\printonlypositive,   \n"
          "sum=auto,\n"
          "every only number node/.style={text=white},\n"
          "color={Cyan,LimeGreen,gray,Yellow,teal,Violet,red}] {",resulttex);
    sprintf(workingString, "%d/Keywords,\n\t", keywordCounter);
    fputs(workingString,resulttex);
    sprintf(workingString, "%d/Operators,\n\t", operatorCounter);
        fputs(workingString,resulttex);
    sprintf(workingString, "%d/Strings,\n\t", stringCounter);
        fputs(workingString,resulttex);
    sprintf(workingString, "%d/Constants,\n\t", constantCounter);
        fputs(workingString,resulttex);
    sprintf(workingString, "%d/Special Characters,\n\t", specialCounter);
        fputs(workingString,resulttex);
    sprintf(workingString, "%d/Identifiers,\n\t", identCounter);
        fputs(workingString,resulttex);
    sprintf(workingString, "%d/Errors} \n\t\\end{tikzpicture}\n"
                           "\t\\end{frame}", errorCounter);
    fputs(workingString,resulttex);


    //printf("%d",tokencounter);

    fclose(resulttex);



}