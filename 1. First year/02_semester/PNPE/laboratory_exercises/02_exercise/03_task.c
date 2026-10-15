#include <stdio.h>

int main() {
    int a;
    int b;

    printf("Enter a: ");
    scanf("%d", &a);

    printf("Enter b: ");
    scanf("%d", &b);

    int evenNumsSum = 0;
    int oddNumsMultiplication = 1;
    for (int i = a + 1; i < b; i++) {
        if (i % 2 == 0) {
            evenNumsSum += i;
        } else {
            oddNumsMultiplication *= i;
        }
    }

    printf("Sum of even numbers: %d\n", evenNumsSum);
    printf("Multiplication of odd numbers: %d", oddNumsMultiplication);

    return 0;
}