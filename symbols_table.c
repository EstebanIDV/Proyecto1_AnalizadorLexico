//
// Created by diegomv on 6/3/22.
//

#include "symbols_table.h"
#include <stdio.h>
#include <stdlib.h>
#include "preprocessor.h"
//#include "definetable.h"

// A simple node to use a linked symbol list as a symbol table, not another info needed

// Function to check if the given symbol exists into the symbol table
// The function returns 1 if the symbol already exits or 0 if not
int lookupST(struct nodeSymTable* root, char* sym) {
    struct nodeSymTable *tmp = root;

    while (tmp != NULL) {
        // strcmp(x, y) = 0 means both strings are the same
        if (strcmp(tmp->name, sym) == 0 && tmp->symType == 0) {
            return 1;
        }
        tmp = tmp->next;
    }
//    printf("%s", #include "symbols_table.c"s);
    return 0;
}

int lookupSTFunction(struct nodeSymTable* root, char* sym) {
    struct nodeSymTable *tmp = root;

    while (tmp != NULL) {
        // strcmp(x, y) = 0 means both strings are the same
        if (strcmp(tmp->name, sym) == 0 && tmp->symType == 1) {
            return 1;
        }
        tmp = tmp->next;
    }
//    printf("%s", #include "symbols_table.c"s);
    return 0;
}

// Function to insert a new symbol into the table giving the symbol to insert, should execute after lookup
void enter(struct nodeSymTable** root, char* nameVar, char* symType, int linea) {
    if (lookupST(*root, nameVar)==1){
        fprintf(stderr,"Line %d ", linea);
        fprintf (stderr, ": semantic error multiple definitions for variable: %s\n", nameVar);
        synErrorFound = 1;
        return;
    }
    struct nodeSymTable *newSymNode = malloc(sizeof(struct nodeSymTable));
    newSymNode->name = strdup(nameVar);
    newSymNode->type = strdup(symType);
    newSymNode->linea = linea;
    newSymNode->symType = 0; // 0 means variable
    newSymNode->next = *root;
    *root = newSymNode;
}

// Function to insert a new symbol into the table giving the symbol to insert, should execute after lookup
void enterFunction(struct nodeSymTable** root, char* nameVar, char* symType, int linea) {
    if (lookupSTFunction(*root, nameVar)==1){
        fprintf(stderr,"Line %d ", linea);
        fprintf (stderr, ": semantic error multiple definitions for function: %s\n", nameVar);
        synErrorFound = 1;
        return;
    }
    struct nodeSymTable *newSymNode = malloc(sizeof(struct nodeSymTable));
    newSymNode->name = strdup(nameVar);
    newSymNode->type = strdup(symType);
    newSymNode->symType = 1; // 1 means function
    newSymNode->linea = linea;
    newSymNode->next = *root;

    *root = newSymNode;
}

void printAllSym(struct nodeSymTable* root) {
    struct nodeSymTable *tmp = root;
    printf("\n*************************** Nueva Tabla de Simbolos***************************\n");
    while (tmp != NULL) {
        if (tmp->symType == 0){
            printf("Variable Name: %s, Type: %s\n", tmp->name, tmp->type);
        }else{
            printf("Function Name: %s, Return Type: %s\n", tmp->name, tmp->type);
        }

        tmp = (struct nodeSymTable *) tmp->next;
    }
}

//char *symbolByIndex(int index) {
//    struct node *tmp = symHeadNode;
//    int tmpIndex = 0;
//    while (tmp != NULL) {
//        if (tmpIndex == index) {
//            return tmp->name;
//        }
//        tmp = tmp->next;
//        tmpIndex++;
//    }
//    return NULL;
//}

//int len() {
//    return symListLen + 1;
//}

//int main() {
//    string var = "hola";
//    enter(var);
//    enter(strcat(var, "1"));
//    enter(strcat(var, "2"));
//    enter(strcat(var, "3"));
//
//    if (lookup(var) == 0) {
//        enter(var);
//    }
//
////    printf("\n");
////    string var1 = "hol";
////    printf("Exists: %d \n", lookup(var1));
////    printf("Len: %d \n", len());
////    printf("By index: %s", symbolByIndex(3));
//
////    printAll();
////    lookup(var);
//
////    printf("section .data");
////    printf("\n");
////    for (int i = 0; i < len(); ++i) {
////        printf("%s: dd 0 \n", symbolByIndex(i));
////    }
//
//string file = "out.txt";
////declare data section
//    FILE *fileOutput;
//    fileOutput = fopen (file, "w");
//    if(fileOutput==NULL){
//        printf("Error opening file. Start in translator.c");
//        exit(1);
//    }
//
//    // Creating data section
//    fputs("section .data \n", fileOutput);
//
//    // Writing each variable to data section an initializing each with 0
//    for (int i = 0; i < len(); ++i) {
//        fputs(symbolByIndex(i), fileOutput);
//        fputs(": dd 0 \n", fileOutput);
//    }
//    fclose(fileOutput);
//    return 0;
//}