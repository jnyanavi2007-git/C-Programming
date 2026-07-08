#include <stdio.h>

struct Employee {
    int empId;
    char name[50];
    float salary;
};

int main() {
    struct Employee emp;
    struct Employee *ptr = &emp;

    printf("Enter Employee ID: ");
    scanf("%d", &ptr->empId);

    printf("Enter Employee Name: ");
    scanf("%s", ptr->name);

    printf("Enter Salary: ");
    scanf("%f", &ptr->salary);

    printf("\n--- Employee Details ---\n");
    printf("Employee ID : %d\n", ptr->empId);
    printf("Name        : %s\n", ptr->name);
    printf("Salary      : %.2f\n", ptr->salary);

    return 0;
}

Output:
Enter Employee ID: 1001
Enter Employee Name: Ravi
Enter Salary: 45000

--- Employee Details ---
Employee ID : 1001
Name        : Ravi
Salary      : 45000.00
