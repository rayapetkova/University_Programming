#include <stdio.h>

int main() {
    double a;
    double b;

    printf("a = ");
    scanf("%lf", &a);

    printf("b = ");
    scanf("%lf", &b);

    double s = a * b;
    printf("%lf", s);

    return 0;
}