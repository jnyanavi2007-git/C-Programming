#include <stdio.h>

struct Student {
    int rollNo;
    char name[50];
    float marks;
};

int main() {
    struct Student s;
    struct Student *ptr = &s;

    printf("Enter Roll Number: ");
    scanf("%d", &ptr->rollNo);

    printf("Enter Name: ");
    scanf("%s", ptr->name);

    printf("Enter Marks: ");
    scanf("%f", &ptr->marks);

    printf("\n--- Student Details ---\n");
    printf("Roll Number : %d\n", ptr->rollNo);
    printf("Name        : %s\n", ptr->name);
    printf("Marks       : %.2f\n", ptr->marks);

    return 0;
}

Output:
Enter Roll Number: 101
Enter Name: Rahul
Enter Marks: 89.5

--- Student Details ---
Roll Number : 101
Name        : Rahul
Marks       : 89.50
