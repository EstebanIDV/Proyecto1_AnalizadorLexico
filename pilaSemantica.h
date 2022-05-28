//
// Created by david on 26/05/22.
//

#ifndef PROYECTO3_SYMTABLE_PILASEMANTICA_H
#define PROYECTO3_SYMTABLE_PILASEMANTICA_H

enum tipoRegistroSemantico{
    TIPO = 1,
    ID = 2,
    FUNCTION = 3
};
typedef enum tipoRegistroSemantico tipoRegistroSemantico;

struct RegistroSemantico{
    enum tipoRegistroSemantico tipo;
    char* tokenType;
};

// A structure to represent a stack
struct PilaSemantica {
    struct RegistroSemantico* registroSemantico;
    struct PilaSemantica* next;
};


struct PilaSemantica* newNode(char * token, enum tipoRegistroSemantico tipoRS);
int isEmpty(struct PilaSemantica* root);
void pushPilaSemantica(struct PilaSemantica** root,char * curr_token, enum tipoRegistroSemantico RS);
int topPilaSemantica(struct PilaSemantica* root);
int topPilaSemantica(struct PilaSemantica* root);
struct PilaSemantica* retrievePS(struct PilaSemantica* root, char* tipoRS);
struct PilaSemantica* deletePS(struct PilaSemantica* root, char* ripoRS);
struct PilaSemantica* updatePS(struct PilaSemantica* root, char* tipoRS);

void guardarTipo();
void guardarID();
void guardarFuncion();

#endif //PROYECTO3_SYMTABLE_PILASEMANTICA_H
