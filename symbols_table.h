//
// Created by diegomv on 6/3/22.
//
#ifndef MICROCOMPILER_SYMBOLS_TABLE_H
#define MICROCOMPILER_SYMBOLS_TABLE_H
#include "definetable.h"
#include <string.h>
extern int lookup(string sym);
extern void enter(string sym);
extern void printAllSym();
extern int len();
//extern char * symbolByIndex(int index);

#endif //MICROCOMPILER_SYMBOLS_TABLE_H
