#include <stdio.h>

int main() {
    double degrees_celsius;

    printf("Enter degrees: ");
    scanf("%lf", &degrees_celsius);

    double degrees_fahrenheit = degrees_celsius * 32;
    printf("%.4lf", degrees_fahrenheit);

    return 0;
}