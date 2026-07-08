#include <stdio.h>

int main() {
    float c, f;

    printf("Enter temperature in Celsius: ");
    scanf("%f", &c);

    f = (c * 9 / 5) + 32;

    printf("Temperature in Fahrenheit = %.2f\n", f);

    return 0;
}

Output:
Enter temperature in Celsius: 37
Temperature in Fahrenheit = 98.60
