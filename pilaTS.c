//
// Created by david on 27/05/22.
//
#include <limits.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "scanner.h"
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

int isEmpty(struct pilaSymTable* root)
{
    return !root;
}

// abrimos contexto
void pushpilaSymTable(struct pilaSymTable** root,char * name, char* tipo)
{
    struct pilaSymTable* pilaSymTable = newNode();
    pilaSymTable->next = *root;
    *root = pilaSymTable;
    //printf("%d pushed to stack\n", data);
}

// cerramos contexto
void poppilaSymTable(struct pilaSymTable** root)
{
    if (isEmpty(*root)) {
        return INT_MIN;
    }
    struct pilaSymTable* temp = *root;
    printAllSym(temp->symbolTable);
    *root = (*root)->next;
    free(temp);

}

void insert_TS(struct pilaSymTable* root, char *tkname, char *type){
    enter(root->symbolTable, tkname, type);
}

int lookup(struct pilaSymTable* root, char *tkname){
    lookup(root->symbolTable,tkname);
}

int toppilaSymTable(struct pilaSymTable* root)
{
    if (isEmpty(root))
        return INT_MIN;
    return root->registroSemantico->tipo;
}
