#include <stdio.h>

// Recursive function
int factorial(int n) {
    if (n == 0 || n == 1)
        return 1;
    else
        return n * factorial(n - 1);
}

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Factorial = %d\n", factorial(num));

    return 0;
}

Output:
Enter a number: 5
Factorial = 120
