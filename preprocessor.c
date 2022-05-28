//
// Created by esteban on 26/3/22.
//
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
#include "global.h"
#include "preprocessor.h"
#include "parser.tab.h"
#include "scanner.h"

#include "definetable.h"
#include "pilaTS.h"

FILE *tempfptr;
FILE *tempfptr2;
char token_buffer[10000];
Array Open_files;

int synErrorFound = 0;

void clearString(char *string){
    int i=0;
    for(i=0;i<strlen(string);i++)
    {
        string[i] = 0;
    }
}

int is_equal(char* temp, char* token)
{
    int is_equal = 1; // True
    if (strlen(temp)!=strlen(token)){
        is_equal = 0; // False
        return is_equal;
    }
    for (int i = 0; i < strlen(token); i++)
    {
        if(tolower(temp[i]) != token[i])
        {
            is_equal = 0; // False
            break;
        }
    }
    return is_equal;
}


directive check_directive(void){
    char *definetext = "define";
    char *includetext  = "include";
    char *temp  =  token_buffer;

    if(is_equal(temp, definetext)){
        return DEFINE;
    } else if (is_equal(temp, includetext)){
        return INCLUDE;
    } else{
        return NADA;
    }
}


extern void clear_buffer(void){
    for (int i = strlen(token_buffer); i >= 0; --i) {
        token_buffer[i] = 0;
    }
}

void error(int in_char){
    fprintf(stderr, "Preprocessing Lexical Error located in: %c ", in_char);
//    if (remove(filename) == 0)
//        printf(".asm Deleted successfully!\n");
//    else
//        printf("Unable to delete the .asm file!\n");
    exit(1);
}

bool openFile(char *filename){
    FILE *newfile = fopen(filename,"r");
    if(newfile==NULL){
        //printf("No se abrió el archivo %s\n", filename);
        return false;
    }else{
        insertArray(&Open_files,newfile);
        return true;
    }
}
void closeuserfile(){
    if(Open_files.used>0){
        Open_files.used--;
        fclose(Open_files.array[Open_files.used]);
    }
}



 void buffer_char(int c){
    if (strlen(token_buffer)<10000)
        token_buffer[strlen(token_buffer)] = c;
    else{
        printf("ERROR! An ID or expression exceeds length limits!\n");
        error(c);
        exit(1);
    }
};

void buffer_line(char c){
    buffer_char(c);
    for(c=fgetc(Open_files.array[Open_files.used-1]); c!='\n'&&c!=EOF;c=fgetc(Open_files.array[Open_files.used-1]))
        buffer_char(c);

};



void transportToFile(FILE *fptr){
    for(int i=0; i<strlen(token_buffer);i++)
        fputc(token_buffer[i], fptr);
    clear_buffer();
};

void prescanner(){
    int in_char, c,endinclude, findFile;
    char path[100000];
    clear_buffer();
    if( Open_files.used==0){
        return;
    }
    while((in_char=fgetc(Open_files.array[Open_files.used-1]))!=EOF){
        clear_buffer();
        if(isalpha(in_char)){
            buffer_char(in_char);
            for(c=fgetc(Open_files.array[Open_files.used-1]);  isalnum(c) || c == '_';c=fgetc(Open_files.array[Open_files.used-1]))
                buffer_char(c);
            ungetc(c,Open_files.array[Open_files.used-1]);
            transportToFile(tempfptr);
            clear_buffer();
            continue;
        }
        else if (in_char=='/') {
            c = fgetc(Open_files.array[Open_files.used - 1]);
            if (c == '/') {
                do
                    in_char = fgetc(Open_files.array[Open_files.used - 1]);
                while (in_char != '\n');
            } else if (c == '*') {
                do {
                    in_char = fgetc(Open_files.array[Open_files.used - 1]);
                    if (in_char == '*') {
                        in_char = fgetc(Open_files.array[Open_files.used - 1]);
                        if (in_char == '/') {

                            break;

                        }
                    }
                } while (in_char != EOF);

            }else{
                fputc('/', tempfptr);
                fputc(c, tempfptr);
            }
            clear_buffer();
            continue;
        } else if (in_char == '"'){
            buffer_char(in_char);
            for (c = fgetc(Open_files.array[Open_files.used - 1]); c != '"' ; c = fgetc(Open_files.array[Open_files.used - 1]))
                buffer_char(c);
//            ungetc(c, Open_files.array[Open_files.used - 1]);
            transportToFile(tempfptr);
        }else if (in_char== 39) {
            buffer_char(in_char);
            for (c = fgetc(Open_files.array[Open_files.used - 1]); c != 39 ; c = fgetc(Open_files.array[Open_files.used - 1]))
                buffer_char(c);
            transportToFile(tempfptr);

        }else if(in_char=='#'){
            clear_buffer();
            bool hasherror = false;
            for(c=fgetc(Open_files.array[Open_files.used-1]); isalnum(c) || c=='_';c=fgetc(Open_files.array[Open_files.used-1]))
                buffer_char(c);
            switch (check_directive()) {

                // Define directive
                case DEFINE:

                    // Clearing the buffer to avoid memory issues
                    clear_buffer();

                    // Getting define name
                    for(c=fgetc(Open_files.array[Open_files.used-1]);  isalnum(c) || c == '_';c=fgetc(Open_files.array[Open_files.used-1]))
                    {
                        if(c=='\t' && !isalnum(c)){
                            break;
                        }
//                        printf("El char name es: %c \n", c);
                        buffer_char(c);
                    }
                    char defineName[10000];
                    strcpy(defineName, token_buffer);

                    clear_buffer();

                    // Getting define value
                    // ToDo: Mejorar la captura del value
                    c=fgetc(Open_files.array[Open_files.used-1]);
                    buffer_line(c);
//                    for(c=fgetc(Open_files.array[Open_files.used-1]);  isalnum(c) || c == '_' || || c == '"';;c=fgetc(Open_files.array[Open_files.used-1]))
//                    {
//                        if(c=='\n' && !isalnum(c)){
//                            break;
//                        }
////                        printf("El char value es: %c \n", c);
//                        buffer_char(c);
//                    }

//                    printf("%s", defineName);
                    insertDefine(defineName, token_buffer);
//                    printAll();
                    clear_buffer();

                    break;
                case INCLUDE:
                    clear_buffer();
                    for(c=fgetc(Open_files.array[Open_files.used-1]); (isspace(c) || c=='\t')&&c!='\n';c=fgetc(Open_files.array[Open_files.used-1]))
                        in_char=c;
                    if(c=='"' || c=='<'){
                        if(c=='<'){
                            endinclude='>';
                        }else{
                            endinclude='"';
                        }

                        for(c=fgetc(Open_files.array[Open_files.used-1]); c!=endinclude;c=fgetc(Open_files.array[Open_files.used-1])) {

                            if (c == '\n' || c == EOF) {
                                hasherror = true;
                                break;
                            } else
                                buffer_char(c);

                        }
                    }else{
                        hasherror = true;
                    }
                    if(hasherror){

                        fputc('#', tempfptr);
                        buffer_line(c);
                        // ToDo: colocar el error o warning de no existente
                    }else{
                        findFile = 0;

                        if (endinclude=='"'){
                            printf("%s\n", token_buffer);
                            clearString(path);
//                            strcat(path, "/");
                            strcat(path, token_buffer);
                            if(openFile(path)==true){
                                findFile = 1;
                            }
                        }
                        if (findFile == 0) {
                            clearString(path);
                            strcat(path, "/usr/lib/gcc/x86_64-linux-gnu/9/include/");
                            strcat(path, token_buffer);
                            if (openFile(path) == false) {
                                clearString(path);
                                strcat(path, "/usr/local/include/");
                                strcat(path, token_buffer);
                                if (openFile(path) == false) {
                                    clearString(path);
                                    strcat(path, "/usr/include/x86_64-linux-gnu/");
                                    strcat(path, token_buffer);
                                    if (openFile(path) == false) {
                                        clearString(path);
                                        strcat(path, "/usr/include/");
                                        strcat(path, token_buffer);
                                        if (openFile(path) == false) {
                                            clearString(path);
                                            strcat(path, "/usr/linux/");
                                            strcat(path, token_buffer);
                                            if (openFile(path) == false) {
                                                printf("Failed to find file: %s\n", token_buffer);
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }

                    break;
                case NADA:
                    fputc('#', tempfptr);
                    buffer_line(c);
                    transportToFile(tempfptr);
                    break;

            }
            clear_buffer();
            continue;
        }
        fputc(in_char, tempfptr);
    }
    clear_buffer();
    closeuserfile();
    prescanner();

}
void replaceDefine() {
    int in_char, c;
    clear_buffer();

    while ((in_char = fgetc(tempfptr)) != EOF) {
        struct define defAux = {"", ""};
        clear_buffer();
        if (isalpha(in_char)) {
            buffer_char(in_char);
            for (c = fgetc(tempfptr); isalnum(c) || c == '_' ; c = fgetc(tempfptr))
                buffer_char(c);
            ungetc(c, tempfptr);
            defAux = checkDefineExists(token_buffer);
//            printf("Revisando el string: %s \n", token_buffer);
//            printf("El valor del define es: %s \n\n", defAux.defineValue);

            if (lookup(token_buffer)==1 && (strcmp(defAux.defineValue, ""))!=0){
                // ToDo: Mostrar error que hay una variable con el nombre de un define
                printf("\nERROR: e ha encontrado la variable: %s con el mismo nombre de un DEFINE\n.", token_buffer);
            }
            else {
                if ((strcmp(defAux.defineValue, ""))!=0)
                {
                    clear_buffer();
                    strcpy(token_buffer, defAux.defineValue);
                }

            }

            transportToFile(tempfptr2);
            clear_buffer();
            continue;
        }else if (in_char == '"'){
            buffer_char(in_char);
            do {
                in_char = fgetc(tempfptr);
                buffer_char(in_char);
            }
            while (in_char != '"');
            transportToFile(tempfptr2);
            clear_buffer();
        }else if (in_char== 39) {
            buffer_char(in_char);
            do {
                in_char = fgetc(tempfptr);
                buffer_char(in_char);
            }
            while (in_char != 39);
            transportToFile(tempfptr2);
            clear_buffer();
        }
        else {
            buffer_char(in_char);
            transportToFile(tempfptr2);
            clear_buffer();
        }
    }
};


void start(){
    tempfptr=fopen("tempprueba1.txt","w+");
    initArray(&Open_files, 10);
    openFile(filename);
    prescanner();
    // Call the function to expand the defines in case is necessary
    expandDefine();

    rewind(tempfptr);
    tempfptr2 = fopen("tempprueba2.txt","w+");
    replaceDefine();
    closeuserfile();
    iniciarPilaTS();

    rewind(tempfptr2);
    infile(tempfptr2);
    printf("*---------------------------------*\n");
    //grammar based of http://www.quut.com/c/ANSI-C-grammar-y.html
    if(yyparse()==0 && synErrorFound == 0){
        printf("COMPILADO \n");
    }else{
        printf("NO COMPILADO \n");
    }

    finish();
    //generateSlides();

}



