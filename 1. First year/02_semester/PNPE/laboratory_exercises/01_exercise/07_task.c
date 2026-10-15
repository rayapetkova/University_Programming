#include <stdio.h>

int main() {
    double a;
    double b;
    double h;

    printf("a = ");
    scanf("%lf", &a);

    printf("b = ");
    scanf("%lf", &b);

    printf("h = ");
    scanf("%lf", &h);

    double s = (2*a + 2*b) * h;
    printf("%.2lf\n", s);

    double volume = a * b * h;
    printf("%.2lf", volume);

    return 0;
}