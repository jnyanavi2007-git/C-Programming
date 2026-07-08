/*
Program: logical_operators.c
Purpose: Demonstrate logical operators in C.
*/

#include <stdio.h>

int main() {
    int a = 10, b = 20;

    printf("a = %d, b = %d\n\n", a, b);

    printf("(a < b) && (a != 0) : %d\n", (a < b) && (a != 0));
    printf("(a > b) || (b > 0)  : %d\n", (a > b) || (b > 0));
    printf("!(a == b)           : %d\n", !(a == b));

    return 0;
}

Output:
a = 10, b = 20

(a < b) && (a != 0) : 1
(a > b) || (b > 0)  : 1
!(a == b)           : 1
