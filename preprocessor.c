//
// Created by esteban on 26/3/22.
//
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
#include "global.h"
#include "preprocessor.h"
FILE *tempfptr;
char token_buffer[500];
Array Open_files;


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
    if (remove(filename) == 0)
        printf(".asm Deleted successfully!\n");
    else
        printf("Unable to delete the .asm file!\n");
    exit(1);
}

bool openFile(char *filename){
    FILE *newfile = fopen(filename,"r");
    if(newfile==NULL){
        printf("No se abrió welp");
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
    if (strlen(token_buffer)<MAXIDLEN)
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

void transportToFile(){
    for(int i=0; i<strlen(token_buffer);i++)
        fputc(token_buffer[i], tempfptr);
    clear_buffer();
};

void prescanner(){
    int in_char, c,endinclude;
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
            transportToFile();
            clear_buffer();
            continue;
        } else if (in_char=='/'){
            c=fgetc(Open_files.array[Open_files.used-1]);
            if(c=='/'){
                do
                    in_char = fgetc(Open_files.array[Open_files.used-1]);
                while (in_char!='\n');
            } else if(c=='*'){
                do {
                    in_char = fgetc(Open_files.array[Open_files.used-1]);
                    if(in_char=='*'){
                        in_char = fgetc(Open_files.array[Open_files.used-1]);
                        if(in_char=='/'){
                            break;

                        }
                    }
                }while (in_char!=EOF);
            }
            clear_buffer();
        } else if(in_char=='#'){
            clear_buffer();
            bool hasherror = false;
            for(c=fgetc(Open_files.array[Open_files.used-1]); isalnum(c) || c=='_';c=fgetc(Open_files.array[Open_files.used-1]))
                buffer_char(c);
            switch (check_directive()) {
                case DEFINE:
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
                        transportToFile();
                    }else{
                        openFile(token_buffer);
                    }

                    break;
                case NADA:
                    fputc('#', tempfptr);
                    buffer_line(c);
                    transportToFile();
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

void start(){
    tempfptr=tmpfile();
    initArray(&Open_files, 10);
    openFile(filename);
    prescanner();
    closeuserfile();


    rewind(tempfptr);

    while (!feof(tempfptr))
        putchar(fgetc(tempfptr));
}



