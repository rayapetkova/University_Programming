#include <stdio.h>

void changeNumbers(double a, double b) {
    double c = a;
    a = b;
    b = c;

    printf("Number a is: %.2lf", a);
    printf("Number b is: %.2lf", b);
}

int main() {
    double x, y;

    scanf("%lf", &x);
    scanf("%lf", &y);

    changeNumbers(x, y);

    return 0;
}
