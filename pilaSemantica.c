//
// Created by david on 25/05/22.
//

// C program for linked list implementation of stack
#include <limits.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "scanner.h"
#include "pilaTS.h"
#include "preprocessor.h"
#include "global.h"
#define MAXRSLEN 100

struct PilaSemantica* rootPS = NULL;
char *lastID;

enum tipoRegistroSemantico{
    TIPO = 1,
    ID = 2,
    FUNCTION = 3
};
typedef enum tipoRegistroSemantico tipoRegistroSemantico;

struct RegistroSemantico{
    tipoRegistroSemantico tipo;
    char *tokenType;
    int linea;
};

// A structure to represent a stack
struct PilaSemantica {
    struct RegistroSemantico* registroSemantico;
    struct PilaSemantica* next;
};

struct PilaSemantica* newNodePilaSemantica(char * token, enum tipoRegistroSemantico tipoRS, int line)
{
    struct PilaSemantica* registroNuevo =
            (struct PilaSemantica*)
                    malloc(sizeof(struct PilaSemantica));
    registroNuevo->registroSemantico = (struct RegistroSemantico*) malloc(sizeof (struct RegistroSemantico));
    registroNuevo->registroSemantico->tokenType = (char *) malloc(strlen(token)+1);
    strcpy(registroNuevo->registroSemantico->tokenType, token);
    registroNuevo->next = NULL;
    registroNuevo->registroSemantico->tipo = tipoRS;
    registroNuevo->registroSemantico->linea = line;

    return registroNuevo;
}

int isEmptyPS(struct PilaSemantica* root)
{
    return !root;
}

void pushPilaSemantica(struct PilaSemantica** root,char * curr_token, enum tipoRegistroSemantico RS, int line)
{
    struct PilaSemantica* PilaSemantica = newNodePilaSemantica(curr_token, RS, line);
    PilaSemantica->next = *root;
    *root = PilaSemantica;
    //printf("%d pushed to stack\n", data);
}

void popPilaSemantica(struct PilaSemantica** root)
{
    if (isEmptyPS(*root)) {
        return;
    }
    struct PilaSemantica* temp = *root;
    *root = (*root)->next;
    free(temp);
}

int topPilaSemantica(struct PilaSemantica* root)
{
    if (isEmptyPS(root))
        return INT_MIN;
    return 1;
}

//RETRIEVE:regresa puntero al primer RS del tipo indicado desde el TOP
//        de la pila
struct PilaSemantica* retrievePS(struct PilaSemantica* root, enum tipoRegistroSemantico tipoRS){
    //ToDo: crear retrieve bien
    struct PilaSemantica *tmp = root;

    while (tmp != NULL) {
        // strcmp(x, y) = 0 means both strings are the same
        if (tmp->registroSemantico->tipo == tipoRS) {
            return tmp;
        }
        tmp = tmp->next;
    }
    return tmp;
}
//DELETE:borra el primer RS del tipo indicado desde el TOP de la pila
struct PilaSemantica* deletePS(struct PilaSemantica* root, char* ripoRS){
    //ToDo: crear delete bien

    return root;
}
//UPDATE:actualiza algunos campos del primer RS del tipo indicado desde
//el TOP de la pila
struct PilaSemantica* updatePS(struct PilaSemantica* root, char* tipoRS){
    //ToDo: crear update bien
    printf("a");
    return root;
}

void guardarTipo(int linea){
//    printf("Guarda TIPO: %s\n", yyget_text());
    pushPilaSemantica(&rootPS, yyget_text(), TIPO, linea);
}

void guardarID(int linea){
//    printf("Guarda ID: %s\n", yyget_text());
    pushPilaSemantica(&rootPS, yyget_text(), ID, linea);
}

void guardarFuncion(int linea){
    pushPilaSemantica(&rootPS, yyget_text(), FUNCTION, linea);
}

// gancho de pasar a TS

void fin_declaracion(){
//    printf("Terminamos declaracion, se inserta en TS\n");
    struct PilaSemantica *tmp = retrievePS(rootPS, TIPO);
    if(strcmp(yyget_text(), "(") == 0){
        insert_TSFunction(rootPS->registroSemantico->tokenType, tmp->registroSemantico->tokenType, rootPS->registroSemantico->linea);
        popPilaSemantica(&rootPS);
    }else{
        while (rootPS->registroSemantico->tipo == ID){
            insert_TS(rootPS->registroSemantico->tokenType, tmp->registroSemantico->tokenType, rootPS->registroSemantico->linea);
            popPilaSemantica(&rootPS);
        }
    }

    popPilaSemantica(&rootPS);
}

void open_scope(){
//    printf("Abrimos SCOPE\n");
    pushpilaSymTable(&rootSymTable);
}

void close_scope(){
//    printf("Cerramos SCOPE\n");
    poppilaSymTable(&rootSymTable);
}

void ck_declaration(int line){

    if(strcmp(yyget_text(), "(") == 0){
        if (lookupPilaTSFunction(lastID)==0){
            fprintf(stderr,"Line %d ", line);
            fprintf (stderr, ": semantic error Function '%s' used but not defined.\n", lastID);
            synErrorFound = 1;
        }
    }else{
        if (lookupPilaTS(lastID)==0){
            fprintf(stderr,"Line %d ", line);
            fprintf (stderr, ": semantic error Variable '%s' used but not defined.\n", lastID);
            synErrorFound = 1;
        }
    }


}
/*int main()
{
    pushPilaSemantica(&rootPS, "10", TIPO);
    pushPilaSemantica(&rootPS, "20", TIPO);
    pushPilaSemantica(&rootPS, "30", TIPO);


    //printf("%d popPilaSemanticaped from stack\n", popPilaSemantica(&rootPS));

    printf("Top element is %d\n", topPilaSemantica(&rootPS));

    return 0;
}*/
