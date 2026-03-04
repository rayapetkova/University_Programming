#include <stdio.h>

int main() {
    int a;
    int b;

    printf("Enter a: ");
    scanf("%d", &a);

    printf("Enter b: ");
    scanf("%d", &b);

    int sumNums = 0;
    for (int i = a + 1; i < b; i++) {
        sumNums += i;
    }

    printf("Sum of numbers: %d", sumNums);

    return 0;
}