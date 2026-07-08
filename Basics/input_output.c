#include <stdio.h>

int main() {
    int age;
    float height;
    char grade;

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Enter your height (in meters): ");
    scanf("%f", &height);

    printf("Enter your grade: ");
    scanf(" %c", &grade);

    printf("\n----- Student Details -----\n");
    printf("Age    : %d\n", age);
    printf("Height : %.2f m\n", height);
    printf("Grade  : %c\n", grade);

    return 0;
}

Output:
Enter your age: 18
Enter your height (in meters): 165
Enter your grade: S

----- Student Details -----
Age    : 18
Height : 165.00 m
Grade  : S
