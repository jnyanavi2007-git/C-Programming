/*
Program: bitwise_operators.c
Purpose: Demonstrate bitwise operators.
*/

#include <stdio.h>

int main() {
    int a = 5, b = 3;

    printf("a = %d\n", a);
    printf("b = %d\n\n", b);

    printf("a & b = %d\n", a & b);
    printf("a | b = %d\n", a | b);
    printf("a ^ b = %d\n", a ^ b);
    printf("~a = %d\n", ~a);
    printf("a << 1 = %d\n", a << 1);
    printf("a >> 1 = %d\n", a >> 1);

    return 0;
}

Output:
a = 5
b = 3

a & b = 1
a | b = 7
a ^ b = 6
~a = -6
a << 1 = 10
a >> 1 = 2
  
