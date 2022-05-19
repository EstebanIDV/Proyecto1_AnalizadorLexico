#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "global.h"
#include "preprocessor.h"
FILE *fptr;
char filename[MAXIDLEN];
char flexfile[MAXIDLEN];
char tempfile[MAXIDLEN];

int main(int argc, char** argv) {





    if (argc <= 1) {
        printf("Error, no program given to compile.\n");
        exit(1);
    } else if (argc > 2) {
        printf("Error, 2 or more program2 given to compile. Expected 1.\n");
        exit(1);
    }
    if (strlen(argv[1]) > MAXIDLEN) {
        printf("Error, the name of the file must be 32 characters long of lower.\n");
    }
    char temp[MAXIDLEN];
    char rawname[MAXIDLEN];
    strcpy(temp, argv[1]);
    int i = 0;
    while (i < strlen(temp)) {
        if (temp[i] == *"\0") {

            strcat(filename, &temp[i]);
        }
        i++;
    }

    strcpy(filename, temp);




    //rintf("%s", temp);
    /*
    if ((fptr= fopen(temp,"r")) == NULL){
        printf("Error! when opening file %s\n", argv[1]);
        // Program exits if the file pointer returns NULL.
        exit(1);
    }
    //system_goal();
    fclose(fptr);
     */

    // Calling system to translate and run nasm code

    //char command[200] = "nasm -f elf32 entrada.asm && gcc -m32 -static entrada.o -o entrada && ./entrada";
    strcpy(rawname,"");
    strcpy(rawname,filename);
    rawname[strlen(rawname)-1] = *"\0";
    strcpy(tempfile, rawname);
    tempfile[strlen(tempfile)-1] = *"\0";
    strcat(rawname, "lex");
    strcat(tempfile, "temp.c");
    //sprintf(command,"nasm -f elf32 %s && gcc -m32 -static %s.o -o %s && ./%s", filename, rawname, rawname,rawname);
    //system(command);

    if ((fptr= fopen(filename,"r")) == NULL){
        printf("Error! when opening file %s\n", argv[1]);
        // Program exits if the file pointer returns NULL.
        exit(1);
    }
    fclose(fptr);
    start();

    //system("pdflatex --interaction=nonstopmode result.tex ");
    //system("evince --fullscreen result.pdf");



    return 0;
}
