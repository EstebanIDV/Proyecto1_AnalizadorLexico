//
// Created by david on 26/04/22.
//
#include <stdlib.h>


int palindrome(int num) {
    int reversed = 0, remainder, original;
    original = num;

// reversed integer is stored in reversed variable
    while (num != 0) {
        remainder = num % 10;
        reversed = reversed * 10 + remainder;
        num /= 10;
    }

// palindrome if orignal and reversed are equal
    if (original == reversed)
        printf("%d is a palindrome.", original);
    else
        printf("%d is not a palindrome.", original);

    return 0;
}

void mi_prueba(){
    palindrome(PI2);
    reverseNumber(PI);
}