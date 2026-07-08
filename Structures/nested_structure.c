#include <stdio.h>

struct Address {
    char city[30];
    char state[30];
};

struct Student {
    int rollNo;
    char name[30];
    struct Address addr;
};

int main() {
    struct Student s;
    struct Student *ptr = &s;

    printf("Enter Roll Number: ");
    scanf("%d", &ptr->rollNo);

    printf("Enter Name: ");
    scanf("%s", ptr->name);

    printf("Enter City: ");
    scanf("%s", ptr->addr.city);

    printf("Enter State: ");
    scanf("%s", ptr->addr.state);

    printf("\n--- Student Details ---\n");
    printf("Roll Number : %d\n", ptr->rollNo);
    printf("Name        : %s\n", ptr->name);
    printf("City        : %s\n", ptr->addr.city);
    printf("State       : %s\n", ptr->addr.state);

    return 0;
}

Output:
Enter Roll Number: 102
Enter Name: Anjali
Enter City: Bangalore
Enter State: Karnataka

--- Student Details ---
Roll Number : 102
Name        : Anjali
City        : Bangalore
State       : Karnataka
