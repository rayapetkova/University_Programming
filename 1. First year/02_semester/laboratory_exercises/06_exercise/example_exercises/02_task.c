#include <stdio.h>
#include <stdlib.h>

int main() {
    double *p;

    p = calloc(10, sizeof(double));

    for (int i = 0; i < 10; i++) {
        p[i] = i;
    }

    for (int j = 0; j < 10; j++) {
        printf("Number on position p[%d] is: %.2lf\n", j, p[j]);
    }

    free(p);

    printf("\n");

    p = calloc(4, sizeof(double));

    for (int i = 0; i < 4; i++) {
        p[i] = i * i;
    }

    for (int j = 0; j < 4; j++) {
        printf("Number on position p[%d] is: %.2lf\n", j, p[j]);
    }

    free(p);

    return 0;
}