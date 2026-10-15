#include <stdio.h>

int main() {
    int a = 5;
    int *pa = &a;
    int **ppa = &pa;

    printf("Value of a: %d\n", a);
    printf("Address of a (pa): %p\n", pa);
    printf("Value of a (ppa): %p\n", ppa);

    return 0;
}