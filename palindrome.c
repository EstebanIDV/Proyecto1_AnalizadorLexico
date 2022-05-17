//
// Created by david on 26/04/22.
//
#include <stdlib.h>


int palindrome(int num) {
    int reversed = 0, remainder, original;
    original = num;

    printf("Enter an integer: ");
    scanf("%d", &num);

    while (num != 0) {
        remainder = num % 10;
        reverse = reverse * 10 + remainder;
        num = 10;
    }

    printf("Reversed number = %d", reverse);

    return 0;
}