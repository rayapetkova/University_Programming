#include <stdio.h>

int main() {
    int a;
    double b;
    char c;

    printf("a = ");
    scanf("%d", &a);
    printf("%d\n", a);

    printf("b = ");
    scanf("%lf", &b);
    printf("%lf\n", b);

    printf("c = ");
    scanf(" %c", &c);
    printf("%c\n", c);

    return 0;
}