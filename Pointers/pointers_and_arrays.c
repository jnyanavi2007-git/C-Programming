#include <stdio.h>

int main() {
    int arr[5] = {5, 10, 15, 20, 25};
    int *ptr = arr;
    int i;

    printf("Elements of the array:\n");

    for (i = 0; i < 5; i++) {
        printf("%d ", *(ptr + i));
    }

    return 0;
}

Output:
Elements of the array:
5 10 15 20 25
