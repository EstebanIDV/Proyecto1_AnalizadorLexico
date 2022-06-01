//
// Created by david on 27/05/22.
//
#include <limits.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "symbols_table.h"
#include "pilaTS.h"
struct pilaSymTable* rootSymTable = NULL;

struct pilaSymTable {
    struct nodeSymTable* symbolTable;
    struct pilaSymTable* next;
};

struct pilaSymTable* newNode()
{
    struct pilaSymTable* registroNuevo =
            (struct pilaSymTable*)
                    malloc(sizeof(struct pilaSymTable));
    registroNuevo->symbolTable = NULL;
    registroNuevo->next = NULL;
    return registroNuevo;
}

int isEmptyTS(struct pilaSymTable* root)
{
    return !root;
}

// abrimos contexto
void pushpilaSymTable(struct pilaSymTable** root)
{
    struct pilaSymTable* pilaSymTable = newNode();
    pilaSymTable->next = *root;
    *root = pilaSymTable;
    //printf("%d pushed to stack\n", data);
}

// cerramos contexto
void poppilaSymTable(struct pilaSymTable** root)
{
    if (isEmptyTS(*root)) {
        printf("\n ERRROOOOOOOR: Se esta haciendo POP en la pila Sym table vacía\n");
        return;
    }
    struct pilaSymTable* temp = *root;
    printAllSym(temp->symbolTable);
    *root = (*root)->next;
    free(temp);
}

void insert_TS(char *tkname, char *type, int line){
    enter(&rootSymTable->symbolTable, tkname, type, line);
}
void insert_TSParametro(char *tkname, char *type, int line){
    struct pilaSymTable *tmp=rootSymTable->next;
    if(tmp!=NULL){
        enterParametro(&rootSymTable->symbolTable, tkname, type, line, &rootSymTable->next->symbolTable);
    } else{
        enterParametro(&rootSymTable->symbolTable, tkname, type, line,&tmp->symbolTable);
    }

}

void insert_TSFunction(char *tkname, char *type, int line){
    enterFunction(&rootSymTable->symbolTable, tkname, type, line);
}
int lookupPilaTS(char *tkname){
//    printf("entra lookup pila TS\n");
    struct pilaSymTable *tmp = rootSymTable;
    while (tmp!=NULL) {
//        printf("itera lookup pila TS\n");
        if (lookupST(tmp->symbolTable, tkname, 0)==1 || lookupST(tmp->symbolTable, tkname, 1)==1 ){
            return 1;
        }
        tmp = (struct pilaSymTable*) tmp->next;
    }
    return 0;
}

int lookupPilaTSFunction(char *tkname){
//    printf("entra lookup pila TS\n");
    struct pilaSymTable *tmp = rootSymTable;
    while (tmp!=NULL) {
//        printf("itera lookup pila TS\n");
        if (lookupSTFunction(tmp->symbolTable, tkname)==1){
            return 1;
        }
        tmp = (struct pilaSymTable*) tmp->next;
    }
    return 0;
}

struct pilaSymTable* toppilaSymTable(struct pilaSymTable* root)
{
    if (isEmptyTS(root))
        return root;
    return root;
}

void iniciarPilaTS() {
    pushpilaSymTable(&rootSymTable);
}
