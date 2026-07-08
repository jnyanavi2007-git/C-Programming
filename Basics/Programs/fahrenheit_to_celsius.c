#include <stdio.h>

int main() {
    float f, c;

    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &f);

    c = (f - 32) * 5 / 9;

    printf("Temperature in Celsius = %.2f\n", c);

    return 0;
}

Output:
Enter temperature in Fahrenheit: 98.6
Temperature in Celsius = 37.00
