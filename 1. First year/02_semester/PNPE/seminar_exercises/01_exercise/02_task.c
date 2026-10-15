#include <stdio.h>

int main() {
    double inches;

    printf("Enter inches: ");
    scanf("%lf", &inches);

    double mm = inches * 25.4;
    double cm = inches * 2.54;
    double dm = inches * 0.254;
    double m = inches * 0.0254;

    printf("mm: %lf\n", mm);
    printf("cm: %lf\n", cm);
    printf("dm: %lf\n", dm);
    printf("m: %lf", m);

    return 0;
}
