//
// Created by david on 25/05/22.
//

// C program for linked list implementation of stack
#include <limits.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "scanner.h"
#define MAXRSLEN 100

struct PilaSemantica* rootPS = NULL;


enum tipoRegistroSemantico{
    TIPO = 1,
    ID = 2,
    FUNCTION = 3
};
typedef enum tipoRegistroSemantico tipoRegistroSemantico;

struct RegistroSemantico{
    tipoRegistroSemantico tipo;
    char *tokenType;
};

// A structure to represent a stack
struct PilaSemantica {
    struct RegistroSemantico* registroSemantico;
    struct PilaSemantica* next;
};

struct PilaSemantica* newNodePilaSemantica(char * token, enum tipoRegistroSemantico tipoRS)
{
    struct PilaSemantica* registroNuevo =
            (struct PilaSemantica*)
                    malloc(sizeof(struct PilaSemantica));
    registroNuevo->registroSemantico = (struct RegistroSemantico*) malloc(sizeof (struct RegistroSemantico));
    registroNuevo->registroSemantico->tokenType = (char *) malloc(strlen(token)+1);
    strcpy(registroNuevo->registroSemantico->tokenType, token);
    registroNuevo->next = NULL;
    registroNuevo->registroSemantico->tipo = tipoRS;

    return registroNuevo;
}

int isEmptyPS(struct PilaSemantica* root)
{
    return !root;
}

void pushPilaSemantica(struct PilaSemantica** root,char * curr_token, enum tipoRegistroSemantico RS)
{
    struct PilaSemantica* PilaSemantica = newNodePilaSemantica(curr_token, RS);
    PilaSemantica->next = *root;
    *root = PilaSemantica;
    //printf("%d pushed to stack\n", data);
}

int popPilaSemantica(struct PilaSemantica** root)
{
    if (isEmptyPS(*root)) {
        return INT_MIN;
    }
    struct PilaSemantica* temp = *root;
    *root = (*root)->next;
    int popped = temp->registroSemantico->tipo;
    free(temp);

    return popped;
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

void guardarTipo(){
    printf("Guarda TIPO: %s\n", yyget_text());
    pushPilaSemantica(&rootPS, yyget_text(), TIPO);

}

void guardarID(){
    printf("Guarda ID: %s\n", yyget_text());
    pushPilaSemantica(&rootPS, yyget_text(), ID);

}

void guardarFuncion(){
    printf("Guarda FUNCTION: %s\n", yyget_text());
    pushPilaSemantica(&rootPS, yyget_text(), FUNCTION);

}

void fin_declaracion(){
    printf("Terminamos declaracion, se inserta en TS\n");
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
