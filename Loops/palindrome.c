#include <stdio.h>

int main() {
    int n, temp, rev = 0, rem;

    printf("Enter a number: ");
    scanf("%d", &n);

    temp = n;

    while (temp != 0) {
        rem = temp % 10;
        rev = rev * 10 + rem;
        temp /= 10;
    }

    if (n == rev)
        printf("%d is a Palindrome.\n", n);
    else
        printf("%d is not a Palindrome.\n", n);

    return 0;
}

Output:
Enter a number: 121
121 is a Palindrome.
