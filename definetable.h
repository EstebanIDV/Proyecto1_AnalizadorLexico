//
// Created by diegomv on 23/04/22.
//

#ifndef PROYECTO1_ANALIZADORLEXICO_DEFINETABLE_H
#define PROYECTO1_ANALIZADORLEXICO_DEFINETABLE_H

#include <stdio.h>
typedef char string[500];
extern void insertDefine(string name, string value);
extern void printAll();
extern int len();
extern char * symbolByIndex(int index);

#endif //PROYECTO1_ANALIZADORLEXICO_DEFINETABLE_H
