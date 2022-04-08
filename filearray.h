//
// Created by esteban on 4/4/22.
//

#ifndef PROYECTO1_ANALIZADORLEXICO_FILEARRAY_H
#define PROYECTO1_ANALIZADORLEXICO_FILEARRAY_H
#include "global.h"

void initArray(Array *a, size_t initialSize);

void insertArray(Array *a, FILE* element);

void freeArray(Array *a);
#endif //PROYECTO1_ANALIZADORLEXICO_FILEARRAY_H
