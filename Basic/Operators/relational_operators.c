/*
Program: relational_operators.c
Purpose: Demonstrate relational operators in C.
*/

#include <stdio.h>

int main() {
    int a = 10, b = 20;

    printf("a = %d, b = %d\n\n", a, b);

    printf("a == b : %d\n", a == b);
    printf("a != b : %d\n", a != b);
    printf("a > b  : %d\n", a > b);
    printf("a < b  : %d\n", a < b);
    printf("a >= b : %d\n", a >= b);
    printf("a <= b : %d\n", a <= b);

    return 0;
}

Output:
a = 10, b = 20

a == b : 0
a != b : 1
a > b  : 0
a < b  : 1
a >= b : 0
a <= b : 1
