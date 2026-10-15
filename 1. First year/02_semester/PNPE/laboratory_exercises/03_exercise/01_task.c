#include <stdio.h>
#include <math.h>

void squareArea(double a) {
    double result = a * a;

    printf("Square Area: %.2lf", result);
}

void rectangleArea(double a, double b) {
    double result = a * b;

    printf("Rectangle Area: %.2lf", result);
}

void triangleArea(double a, double b) {
    double result = (a * b) / 2;

    printf("Triangle Area: %.2lf", result);
}

void circleArea(double r) {
    double result = 3.14 * pow(r, 2);

    printf("Circle Area: %.2lf", result);
}

int main() {
    int num;

    scanf("%d", &num);

    if (num == 1) {
        double a, b;

        scanf("Enter a: %lf", &a);
        scanf("Enter b: %lf", &b);

        squareArea(a, b);
    } else if (num == 2) {
        double a, b;

        scanf("Enter a: %lf", &a);
        scanf("Enter b: %lf", &b);

        rectangleArea(a, b);
    } else if (num == 3) {
        double a, b;

        scanf("Enter a: %lf", &a);
        scanf("Enter b: %lf", &b);

        triangleArea(a, b);
    } else if (num == 4) {
        double r;

        scanf("Enter r: %lf", &r);

        circleArea(r);
    }

    return 0;
}
