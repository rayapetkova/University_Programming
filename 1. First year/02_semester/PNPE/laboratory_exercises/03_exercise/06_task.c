#include <stdio.h>
#include <math.h>

void findSquareRoot(double a, double b, double c) {
    double d = pow(d, 2) - 4 * a * c;

    double firstRoot = (-b + sqrt(d)) / (2 * a * c);
    double secondRoot = (-b - sqrt(d)) / (2 * a * c);

    printf("First root: %.2lf", firstRoot);
    printf("Second root: %.2lf", secondRoot);
}

int main() {
    double x, y, z;

    scanf("%lf", &x);
    scanf("%lf", &y);
    scanf("%lf", &z);

    findSquareRoot(x, y, z);

    return 0;
}
