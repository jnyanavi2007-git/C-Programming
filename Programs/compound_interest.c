#include <stdio.h>
#include <math.h>

int main() {
    float p, r, t, ci;

    printf("Enter Principal, Rate and Time: ");
    scanf("%f %f %f", &p, &r, &t);

    ci = p * pow((1 + r / 100), t) - p;

    printf("Compound Interest = %.2f\n", ci);

    return 0;
}

Output:
Enter Principal, Rate and Time: 10000 5 2
Compound Interest = 1025.00
