#include <stdio.h>

int main() {
    int choice;

    printf("1. Sunday\n");
    printf("2. Monday\n");
    printf("3. Tuesday\n");
    printf("4. Wednesday\n");
    printf("5. Thursday\n");
    printf("6. Friday\n");
    printf("7. Saturday\n");

    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch(choice) {
        case 1: printf("Sunday\n"); break;
        case 2: printf("Monday\n"); break;
        case 3: printf("Tuesday\n"); break;
        case 4: printf("Wednesday\n"); break;
        case 5: printf("Thursday\n"); break;
        case 6: printf("Friday\n"); break;
        case 7: printf("Saturday\n"); break;
        default: printf("Invalid Choice\n");
    }

    return 0;
}

Output:
1. Sunday
2. Monday
3. Tuesday
4. Wednesday
5. Thursday
6. Friday
7. Saturday
Enter your choice: 5
Thursday
