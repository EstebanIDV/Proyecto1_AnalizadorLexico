//
// Created by diegomv on 6/3/22.
//
#ifndef MICROCOMPILER_SYMBOLS_TABLE_H
#define MICROCOMPILER_SYMBOLS_TABLE_H
#include "definetable.h"
#include <string.h>
struct nodeSymTable {
    char* name;
    char* type;
    int linea;
    int symType;
    struct nodeSymTable *next;
};
typedef char string[10000];
extern int lookupST(struct nodeSymTable* root, char* sym, int flag);
extern void enter(struct nodeSymTable** root, char* nameVar, char* symType, int linea);
extern void enterFunction(struct nodeSymTable** root, char* nameVar, char* symType, int linea);
extern int lookupSTFunction(struct nodeSymTable* root, char* sym);
extern void printAllSym(struct nodeSymTable* root);
extern void enterParametro(struct nodeSymTable** root, char* nameVar, char* symType, int linea, struct nodeSymTable** root2);
//extern int len();
//extern char * symbolByIndex(int index);

#endif //MICROCOMPILER_SYMBOLS_TABLE_H
