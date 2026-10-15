#include <stdio.h>

int main() {
    double num1;
    double num2;

    printf("Enter num 1: ");
    scanf("%lf", &num1);

    printf("Enter num 2: ");
    scanf("%lf", &num2);

    for (double i = num1; i <= num2; i += 0.01) {
        double result = i * i - 4;
        printf("%.2lf\n", result);
    }

    return 0;
}