/*
Program: operators.c
Purpose: Demonstrate arithmetic operators in C.
*/

#include <stdio.h>

int main() {
    int a = 20, b = 5;

    printf("Value of a = %d\n", a);
    printf("Value of b = %d\n\n", b);

    printf("Addition       : %d\n", a + b);
    printf("Subtraction    : %d\n", a - b);
    printf("Multiplication : %d\n", a * b);
    printf("Division       : %d\n", a / b);
    printf("Modulus        : %d\n", a % b);

    return 0;
}

Output:
Value of a = 20
Value of b = 5

Addition       : 25
Subtraction    : 15
Multiplication : 100
Division       : 4
Modulus        : 0
