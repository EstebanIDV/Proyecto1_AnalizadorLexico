//
// Created by david on 27/05/22.
//

#ifndef PROYECTO3_SYMTABLE_PILATS_H
#define PROYECTO3_SYMTABLE_PILATS_H

struct pilaSymTable* rootSymTable;
struct pilaSymTable* newNode();
int isEmptyTS(struct pilaSymTable* root);
void pushpilaSymTable(struct pilaSymTable** root);
void poppilaSymTable(struct pilaSymTable** root);
void insert_TS(char *tkname, char *type);
int lookupPilaTS(struct pilaSymTable* root, char *tkname);
int toppilaSymTable(struct pilaSymTable* root);
void iniciarPilaTS();

#endif //PROYECTO3_SYMTABLE_PILATS_H
