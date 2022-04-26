//
// Created by diegomv on 23/04/22.
//

#include <stdio.h>
#include <stdlib.h>
#include "string.h"
#include "definetable.h"
#include "ctype.h"

string newDefineValue = "";
int replaceCounter = 0;

// A simple node to use a linked symbol list as a symbol table, not another info needed
struct node {
    string defineName;
    string defineValue;
    struct node *next;
};

struct node *headNode = NULL;
struct node *actualNode = NULL;
int listLen = -1;

// Function to check if the given symbol exists into the symbol table
// The function returns 1 if the symbol already exits or 0 if not
//int lookup(char* sym) {
//    struct node *tmp = headNode;
//
//    while (tmp != NULL) {
//        // strcmp(x, y) = 0 means both Strings are the same
//        if (strcmp(tmp->name, sym) == 0) {
//            return 1;
//        }
//        tmp = tmp->next;
//    }
////    printf("%s", #include "symbols_table.c"s);
//    return 0;
//}

// Function to insert a new define into the table giving define name and its value, should execute after lookup
void insertDefine(string name, string value) {

    struct node *newSymNode = malloc(sizeof(struct node));
    strcpy(newSymNode->defineName, name);
    strcpy(newSymNode->defineValue, value);
    newSymNode->next = NULL;

    // This is the first insertion where list if full empty
    if (headNode == NULL) {
        headNode = newSymNode;
        actualNode = newSymNode;
    } else {
        // When the list is not empty just update the last pointer to point to the new node and update the actual node
        actualNode->next = newSymNode;
        actualNode = newSymNode;
    }
    listLen++;
}

void printAll() {
    printf("_______________________________________\n");
    struct node *tmp = headNode;
    while (tmp != NULL) {
        printf("Name: %s - Value: %s \n", tmp->defineName, tmp->defineValue);
        tmp = (struct node *) tmp->next;
    }
    printf("_______________________________________\n");
}

struct define symbolByIndex(int index) {
    struct node *tmp = headNode;
    int tmpIndex = 0;
    struct define def = {"", ""};
    while (tmp != NULL) {
        if (tmpIndex == index) {
            strcpy(def.defineName, tmp->defineName);
            strcpy(def.defineValue, tmp->defineValue);
            return def;
        }
        tmp = tmp->next;
        tmpIndex++;
    }
    return def;
}

int len() {
    return listLen + 1;
}


void expandDefine() {
//    printAll();
    // Getting each define from define table
    struct node *tmp = headNode;

    while (tmp != NULL) {
        // Flag to know when end define expansion for the current define
        int stopExpansion = 0;
        //Temporal string to hold define value while it expands
//        newDefineValue = "";
        strcpy(newDefineValue, "");

        while (stopExpansion == 0) {
            // Cleaning the buffer
            clear_buffer();

            char currentChar = ' ';
            int checkExpansion = 0;
            replaceCounter = 0;

            for (int j = 0; j < strlen(tmp->defineValue); ++j) {

                currentChar = tmp->defineValue[j];

                char tmpStr[2] = {' ', '\0'};
                tmpStr[0] = currentChar;
                // If buffers is empty that means we are stating to read a token
                // If current token is alpha, save into bufferS

                if (isalpha(currentChar) && checkExpansion == 0) {
                    buffer_char(currentChar);
                } else if ((isdigit((int) currentChar) || currentChar == '_') && strlen(token_buffer) > 0) {
                    buffer_char(currentChar);

                } else if ((isdigit((int) currentChar) || currentChar == '_') && strlen(token_buffer) == 0) {
                    strcat(newDefineValue, tmpStr);
                    checkExpansion = 1;
                } else {
                    replaceDefineValue(tmp->defineName);
                    strcat(newDefineValue, tmpStr);
                    checkExpansion = 0;

                }

//                printf("Buffer : %s \n", token_buffer);

                // If we read all the value, that means no need more expansions on value
//                printf("El indice acutal es: %d", j);
//                printf("El largo acutal es: %lu", strlen(tmp->defineValue));
                if (j + 1 == strlen(tmp->defineValue)) {


                    replaceDefineValue(tmp->defineName);
                    if (replaceCounter == 0) {
                        stopExpansion = 1;
                    }
//                        struct define def = getDefineValue(token_buffer);
//                        if (strcmp(def.defineValue, "") != 0){
//                            strcat(newDefineValue, def.defineValue);
//                        }else
//                        {
//                            strcat(newDefineValue, token_buffer);
//                        }
//                        printf("Voy a revisar para reemplazo 1 con -> %s \n", def.defineValue);
//                        printf("El new values es: %s \n", newDefineValue);

                }
            }
            strcpy(tmp->defineValue, newDefineValue);
            strcpy(newDefineValue, "");

            clear_buffer();
//            printf("###########################\n");


        }
        tmp = tmp->next;
    }

//    printAll();
}

struct define checkDefineExists(string defineName) {
    struct node *tmp = headNode;
    struct define def = {"", ""};
    while (tmp != NULL) {
        if (strcmp(tmp->defineName, defineName) == 0) {
            strcpy(def.defineName, tmp->defineName);
            strcpy(def.defineValue, tmp->defineValue);
            return def;
        }
        tmp = tmp->next;
    }
    return def;
}

void replaceDefineValue(string defineName) {
    struct define def = getDefineValue(token_buffer);
    if (strcmp(def.defineValue, "") != 0 && strcmp(defineName, def.defineName)!= 0) {
        strcat(newDefineValue, def.defineValue);
        replaceCounter++;
    } else {
        strcat(newDefineValue, token_buffer);
    }


//    printf("El new values es: %s \n", newDefineValue);
//    printf("Voy a revisar para reemplazo 2 con -> %s \n", def.defineValue);

    clear_buffer();
}

struct define getDefineValue(string name) {
    struct node *tmp = headNode;
    struct define def = {"", ""};

    while (tmp != NULL) {
        if (strcmp(tmp->defineName, name) == 0) {

            strcpy(def.defineName, tmp->defineName);
            strcpy(def.defineValue, tmp->defineValue);
            return def;
        }
        tmp = tmp->next;
    }
    return def;
}

//int main() {
//    string name = "abc";
//    string value = "diego";
//
////    insertDefine(name, value);
//
//    string name2 = "abcd";
//    string value2 = "diegod";
//
////    insertDefine(name2, value2);
//
//    for (int i = 0; i < listLen+1; ++i) {
//        struct define tmp = symbolByIndex(i);
//        printf("Name: %s \n", tmp.defineName);
//        printf("Value: %s \n", tmp.defineValue);
//    }
//}