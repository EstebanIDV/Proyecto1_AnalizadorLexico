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
    struct nodeSymTable *next;
};
typedef char string[10000];
extern int lookup(struct nodeSymTable* root, char* sym);
extern void enter(struct nodeSymTable* root, char* nameVar, char* symType);
extern void printAllSym(struct nodeSymTable* root);
//extern int len();
//extern char * symbolByIndex(int index);

#endif //MICROCOMPILER_SYMBOLS_TABLE_H
