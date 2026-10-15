#include <stdio.h>

int main() {
    int a;
    int b;
    int c;

    printf("a: ");
    scanf("%d", &a);

    printf("b: ");
    scanf("%d", &b);

    printf("c: ");
    scanf("%d", &c);

    if (a == b && b == c && b == c) {
        printf("yes");
    } else {
        printf("no");
    }

    return 0;
}