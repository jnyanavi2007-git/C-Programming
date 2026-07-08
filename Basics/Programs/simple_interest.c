/*
Program: simple_interest.c
Purpose: Calculate Simple Interest.
*/

#include <stdio.h>

int main() {
    float principal, rate, time, simple_interest;

    printf("Enter the principal amount: ");
    scanf("%f", &principal);

    printf("Enter the rate of interest: ");
    scanf("%f", &rate);

    printf("Enter the time (in years): ");
    scanf("%f", &time);

    simple_interest = (principal * rate * time) / 100;

    printf("\nSimple Interest = %.2f\n", simple_interest);

    return 0;
}

Output:
Enter the principal amount: 10000
Enter the rate of interest: 5
Enter the time (in years): 2

Simple Interest = 1000.00
