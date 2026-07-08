/*
Program: increment_decrement.c
Purpose: Demonstrate increment and decrement operators.
*/

#include <stdio.h>

int main() {
    int a = 10;

    printf("Initial value: %d\n", a);

    printf("Post Increment : %d\n", a++);
    printf("Value after Post Increment : %d\n", a);

    printf("Pre Increment  : %d\n", ++a);

    printf("Post Decrement : %d\n", a--);
    printf("Value after Post Decrement : %d\n", a);

    printf("Pre Decrement  : %d\n", --a);

    return 0;
}

Output:
Initial value: 10
Post Increment : 10
Value after Post Increment : 11
Pre Increment  : 12
Post Decrement : 12
Value after Post Decrement : 11
Pre Decrement  : 10
