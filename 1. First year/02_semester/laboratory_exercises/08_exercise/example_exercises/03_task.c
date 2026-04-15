#include <stdio.h>
#include <string.h>

struct Complex {
    int imag;
    float real;
};

struct NUmber {
    struct Complex comp;
    int integer;
} num1;

int main() {
    num1.comp.imag = 11;
    num1.comp.real = 5.25;
    num1.integer = 6;

    printf("Num1 imag: %d\n", num1.comp.imag);
    printf("Num1 real: %.2lf\n", num1.comp.real);
    printf("Num1 integer: %d\n", num1.integer);

    return 0;
}