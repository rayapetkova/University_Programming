#include <stdio.h>
#include <math.h>

int main() {
    int a;
    int b;
    int c;

    printf("a = ");
    scanf("%d", &a);

    printf("b = ");
    scanf("%d", &b);

    printf("c = ");
    scanf("%d", &c);

    int y = 4*a + 5*pow((b + 4*c), 2);
    printf("%d", y);

    return 0;
}