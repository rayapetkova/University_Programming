#include <stdio.h>

int main() {
    int x = 10;
    int *p = &x;

    *p = 20;

    printf("Value of x: %d", x);

    return 0;
}