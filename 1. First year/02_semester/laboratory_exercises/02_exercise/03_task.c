#include <stdio.h>

int main() {
    double a;
    double b;
    double c;

    printf("Enter a: ");
    scanf("%lf", &a);

    printf("Enter b: ");
    scanf("%lf", &b);

    printf("Enter c: ");
    scanf("%lf", &c);

    double smallestNum = 0;

    if (a < b) {
        smallestNum = a;
    } else {
        smallestNum = b;
    };

    if (c < smallestNum) {
        smallestNum = c;
    };

    printf("Smallest number is: %.0lf", smallestNum);

    return 0;
}