#include <stdio.h>
#include <stdlib.h>

int main() {
    int x1;
    int y1;
    int x2;
    int y2;

    printf("x1: ");
    scanf("%d", &x1);

    printf("y1: ");
    scanf("%d", &y1);

    printf("x2: ");
    scanf("%d", &x2);

    printf("y2: ");
    scanf("%d", &y2);

    int area = abs(x1 - x2) * abs(y1 - y2);
    printf("Area: %d", area);

    return 0;
}