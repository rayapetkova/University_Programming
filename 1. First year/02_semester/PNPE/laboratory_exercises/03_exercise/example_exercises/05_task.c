#include <stdio.h>

double additionToNum(double a) {
    return a + 5;
};

int main() {
    double x;

    scanf("%lf", &x);

    double result = additionToNum(x);

    printf("%.2lf", result);

    return 0;
}

