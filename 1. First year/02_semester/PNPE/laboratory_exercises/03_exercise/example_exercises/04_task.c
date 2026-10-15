#include <stdio.h>

double multiplicationNums(double, double, double);

int main() {
    double x, y, z;

    scanf("%lf", &x);
    scanf("%lf", &y);
    scanf("%lf", &z);

    double result = multiplicationNums(x, y, z);

    printf("%.2lf", result);

    return 0;
}

double multiplicationNums(double a, double b, double c) {
    return a * b * c;
}

