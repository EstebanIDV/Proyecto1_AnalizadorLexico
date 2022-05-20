//
// Created by esteban on 2/4/22.
//

#ifndef PROYECTO1_ANALIZADORLEXICO_PREPROCESSOR_H
#define PROYECTO1_ANALIZADORLEXICO_PREPROCESSOR_H

#include "filearray.h"

extern char token_buffer[10000];
extern int synErrorFound;


int is_equal(char* temp, char* token);
directive check_directive(void);
 void clear_buffer(void);
void error(int in_char);
bool openFile(char *filename);
void buffer_char(int c);
void buffer_line(char c);
void prescanner();
void transportToFile();
void start();
void closeuserfile();


#endif //PROYECTO1_ANALIZADORLEXICO_PREPROCESSOR_H
