#include <stdio.h>
#include <math.h>

double circleArea(double r) {
    return 3.14 * pow(r, 2);
}

double circleLength(double r) {
    return 2 * 3.14 * r;
}

int main() {
    double r;

    scanf("%lf", &r);

    double area = circleArea(r);
    double length = circleLength(r);

    printf("Area: %lf\n", area);
    printf("Length: %lf", length);
}
