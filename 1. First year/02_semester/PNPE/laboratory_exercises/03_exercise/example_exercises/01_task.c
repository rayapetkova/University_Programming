#include <stdio.h>

double sumNumbers(double a, double b) {
    return a + b;
}

int main() {
    double x, y;

    scanf("%lf", &x);
    scanf("%lf", &y);

    double sum = sumNumbers(x, y);
    printf("%.2lf", sum);
}
