//
// Created by david on 26/04/22.
//

#include "prueba2.h"
#define number1 "12703"
#define number 12703
#include <stdio.h>

int reverseNumber(int num) {

    int reverse = 0, remainder;

    printf("Enter an integer: ");
    scanf("%d", &num);

    while (num != 0) {
        remainder = num % 10;
        reverse = reverse * 10 + remainder;
        num /= 10;
    }

    printf("Reversed number = %d", reverse);

    return 0;
}