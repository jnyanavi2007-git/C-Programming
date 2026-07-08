#include <stdio.h>

int main() {
    int arr[5], i;

    printf("Enter 5 elements:\n");

    for (i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Array elements are:\n");

    for (i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}

Output:
Enter 5 elements:
10 20 30 40 50
Array elements are:
10 20 30 40 50
