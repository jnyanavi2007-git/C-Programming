#include <stdio.h>

// Function declaration
void add(int a, int b);

int main() {
    int x, y;

    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);

    add(x, y);

    return 0;
}

// Function definition
void add(int a, int b) {
    printf("Sum = %d\n", a + b);
}

Output:
Enter two numbers: 15 20
Sum = 35
