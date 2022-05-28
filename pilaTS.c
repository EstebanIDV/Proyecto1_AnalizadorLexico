//
// Created by david on 27/05/22.
//
#include <limits.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "symbols_table.h"
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

void insert_TS(char *tkname, char *type){
    enter(&rootSymTable->symbolTable, tkname, type);
}

int lookupPilaTS(struct pilaSymTable* root, char *tkname){
    return lookupST(root->symbolTable,tkname);
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
