/*
Program: assignment_operators.c
Purpose: Demonstrate assignment operators in C.
*/

#include <stdio.h>

int main() {
    int a = 10;
    printf("Initial value of a = %d\n\n", a);
    a += 5;
    printf("After a += 5 : %d\n", a);
    a -= 3;
    printf("After a -= 3 : %d\n", a);
    a *= 2;
    printf("After a *= 2 : %d\n", a);
    a /= 4;
    printf("After a /= 4 : %d\n", a)
    return 0;
}

Output:
Initial value of a = 10

After a += 5 : 15
After a -= 3 : 12
After a *= 2 : 24
After a /= 4 : 6
