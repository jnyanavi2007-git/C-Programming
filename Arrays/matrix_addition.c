#include <stdio.h>

int main() {
    int a[2][2], b[2][2], sum[2][2];
    int i, j;

    printf("Enter first matrix:\n");
    for (i = 0; i < 2; i++)
        for (j = 0; j < 2; j++)
            scanf("%d", &a[i][j]);

    printf("Enter second matrix:\n");
    for (i = 0; i < 2; i++)
        for (j = 0; j < 2; j++)
            scanf("%d", &b[i][j]);

    printf("Sum of matrices:\n");

    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            sum[i][j] = a[i][j] + b[i][j];
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }

    return 0;
}

Output:
Enter first matrix:
1 2
3 4
Enter second matrix:
5 6
7 8
Sum of matrices:
6 8
10 12
