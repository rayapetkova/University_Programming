#include <stdio.h>

int main() {
    int a, *pa;
    int b, *pb;

    printf("Enter a: ");
    scanf("%d", &a);

    printf("Enter b: ");
    scanf("%d", &b);

    pa = &a;
    pb = &b;

    int sumNums = *pa + *pb;
    printf("Sum: %d\n", sumNums);

    int subtractNums = *pa - *pb;
    printf("Subtraction: %d\n", subtractNums);

    int multiplicationNums = *pa * *pb;
    printf("Multiplication: %d\n", multiplicationNums);

    if (*pb != 0) {
        int divisionNums = *pa / *pb;
        printf("Division: %d", divisionNums);
    } else {
        printf("Cannot divide by zero.")
    }


    return 0;
}