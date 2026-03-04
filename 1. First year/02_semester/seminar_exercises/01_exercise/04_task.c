#include <stdio.h>

int main() {
    double degrees;

    printf("Enter degrees: ");
    scanf("%lf", &degrees);

    double radians = degrees * 0.0174533;
    printf("%.2lf", radians);

    return 0;
}