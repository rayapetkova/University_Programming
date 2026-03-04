#include <stdio.h>

int main() {
    double a;
    double b;
    double h;

    printf("Enter a: ");
    scanf("%lf", &a);

    printf("Enter b: ");
    scanf("%lf", &b);

    printf("Enter h: ");
    scanf("%lf", &h);

    double area = (a + b)*2 / h;
    printf("Area: %.2lf", area);

    return 0;
}