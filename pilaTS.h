//
// Created by david on 27/05/22.
//

#ifndef PROYECTO3_SYMTABLE_PILATS_H
#define PROYECTO3_SYMTABLE_PILATS_H

extern struct pilaSymTable* rootSymTable;
struct pilaSymTable* newNode();
int isEmptyTS(struct pilaSymTable* root);
void pushpilaSymTable(struct pilaSymTable** root);
void poppilaSymTable(struct pilaSymTable** root);
void insert_TS(char *tkname, char *type, int line);
int lookupPilaTS(char *tkname);
void insert_TSFunction(char *tkname, char *type, int line);
int lookupPilaTSFunction(char *tkname);
//int toppilaSymTable(struct pilaSymTable* root);
void iniciarPilaTS();
void insert_TSParametro(char *tkname, char *type, int line);

#endif //PROYECTO3_SYMTABLE_PILATS_H
