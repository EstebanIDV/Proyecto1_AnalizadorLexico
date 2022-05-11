//
// Created by esteban on 26/3/22.
//

#ifndef PROYECTO1_ANALIZADORLEXICO_GLOBAL_H
#define PROYECTO1_ANALIZADORLEXICO_GLOBAL_H
#include <stddef.h>
#include <bits/types/FILE.h>
#include <stdbool.h>
typedef struct {
    FILE* *array;
    size_t used;
    size_t size;
} Array;

#define MAXIDLEN 33


extern FILE *fptr;
extern FILE *tempfptr;
extern FILE *tempfptr2;
typedef enum  directive_types{
    INCLUDE, DEFINE, NADA
} directive;
extern char filename[MAXIDLEN];
extern char tempfile[MAXIDLEN];
extern char flexfile[MAXIDLEN];

int yyparse();
int yylex (void);
void change_input(FILE *file);

#endif //PROYECTO1_ANALIZADORLEXICO_GLOBAL_H
