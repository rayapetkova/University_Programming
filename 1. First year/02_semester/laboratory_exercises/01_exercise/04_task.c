#include <stdio.h>

int main() {
    double d;

    printf("d = ");
    scanf("%lf", &d);

    double s = d * 3.14;
    printf("%lf", s);

    return 0;
}