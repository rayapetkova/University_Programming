#include <stdio.h>

int main() {
    double bgn;

    printf("Enter money (BGN): ");
    scanf("%lf", &bgn);

    double dollars = bgn * 0.60;
    double euros = bgn * 0.511292;
    double pounds = bgn * 0.45;

    printf("Dollars: %.4lf\n", dollars);
    printf("Euros: %.4lf\n", euros);
    printf("Pounds: %.4lf\n", pounds);

    return 0;
}