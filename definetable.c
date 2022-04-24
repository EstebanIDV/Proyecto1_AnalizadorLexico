//
// Created by diegomv on 23/04/22.
//

#include <stdio.h>
#include <stdlib.h>
#include "string.h"
#include "definetable.h"

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
void insertDefine(string  name, string value) {

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
    struct node *tmp = headNode;
    while (tmp != NULL) {
        printf("Name: %s - Value: %s \n", tmp->defineName, tmp->defineValue);
        tmp = (struct node *) tmp->next;
    }
}

struct define symbolByIndex(int index) {
    struct node *tmp = headNode;
    int tmpIndex = 0;
    struct define def;
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