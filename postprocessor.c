//
// Created by esteban on 26/3/22.
//
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
#include "global.h"
#include "scanner.h"
int tokencounter = 0;

void generateSlides(){

    rewind(tempfptr);
    infile(tempfptr);
    while(GetToken().tokenCode != END_OF_FILE){
        tokencounter++;
        //printf("%d",tokencounter);
    }
    //printf("%d",tokencounter);





}