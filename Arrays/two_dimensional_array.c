#include <stdio.h>

int main() {
    int a[2][2], i, j;

    printf("Enter 4 elements:\n");

    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Matrix is:\n");

    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    return 0;
}

Output:
Enter 4 elements:
1 2 3 4 
Matrix is :
1 2
3 4
