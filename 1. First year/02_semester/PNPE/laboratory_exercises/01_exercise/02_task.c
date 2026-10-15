#include <stdio.h>

int main() {
    int a;
    int b;

    printf("a = ");
    scanf("%d", &a);

    printf("b = ");
    scanf("%d", &b);

    int nums_sum = a + b;
    printf("Sum: %d", nums_sum);

    int nums_substract = a - b;
    printf("Substraction: %d", nums_substract);

    int nums_division_remainder = a % b;
    printf("Division - remainder: %d", nums_division_remainder);

    a -= 2;
    b /= 2;
    a *= 2;
    a++;
    b--;

    return 0;
}