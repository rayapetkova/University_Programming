#include <stdio.h>

int main() {
    double beg;
    double end;
    double delta;
    double m;
    double a;
    double b;

    printf("Enter beg: ");
    scanf("%lf", &beg);

    printf("Enter end: ");
    scanf("%lf", &end);

    printf("Enter delta: ");
    scanf("%lf", &delta);

    printf("Enter m: ");
    scanf("%lf", &m);

    printf("Enter a: ");
    scanf("%lf", &a);

    printf("Enter b: ");
    scanf("%lf", &b);

    while (end < beg) {
        printf("Enter end: ");
        scanf("%lf", &end);
    }

    for (double num = beg; num <= end; num += delta) {
        if (num <= m) {
            double result = b + num;
            printf("%.2lf\n", result);
        } else {
            if (num == 4) {
                continue;
            }

            double result = (a * num) / (4 - num);
            printf("%.2lf\n", result);
        }
    }

    return 0;
}