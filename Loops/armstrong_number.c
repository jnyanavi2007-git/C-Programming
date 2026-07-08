#include <stdio.h>

int main() {
    int n, temp, rem, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    temp = n;

    while (temp != 0) {
        rem = temp % 10;
        sum += rem * rem * rem;
        temp /= 10;
    }

    if (sum == n)
        printf("%d is an Armstrong Number.\n", n);
    else
        printf("%d is not an Armstrong Number.\n", n);

    return 0;
}

Output:
Enter a number: 153
153 is an Armstrong Number.
