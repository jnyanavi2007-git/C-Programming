#include <stdio.h>

int main() {
    int num = 10;
    int *ptr;

    ptr = &num;

    printf("Value of num = %d\n", num);
    printf("Address of num = %p\n", (void *)&num);
    printf("Value stored in ptr = %p\n", (void *)ptr);
    printf("Value pointed by ptr = %d\n", *ptr);

    return 0;
}

Output:
Value of num = 10
Address of num = 0x7ffd9c2e3f4c
Value stored in ptr = 0x7ffd9c2e3f4c
Value pointed by ptr = 10
