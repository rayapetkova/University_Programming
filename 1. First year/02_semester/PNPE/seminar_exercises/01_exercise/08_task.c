#include <stdio.h>
#include <stdlib.h>

int main() {
    int x1;
    int y1;
    int x2;
    int y2;
    int x3;
    int y3;

    printf("x1: ");
    scanf("%d", &x1);

    printf("y1: ");
    scanf("%d", &y1);

    printf("x2: ");
    scanf("%d", &x2);

    printf("y2: ");
    scanf("%d", &y2);

    printf("x3: ");
    scanf("%d", &x3);

    printf("y3: ");
    scanf("%d", &y3);

    double area = 0.5 * (x1*(y2 - y3) + x2*(y3 - y1) + x3*(y1 - y2));
    printf("Area: %.2lf", area);

    return 0;
}