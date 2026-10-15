#include <stdio.h>

int main() {
    int num;
    int *p;

    printf("Enter num: ");
    scanf("%d", &num);

    p = &num;

    printf("Address of num: %p\n", p);
    printf("Value of num (from pointer): %d", *p);

    return 0;
}