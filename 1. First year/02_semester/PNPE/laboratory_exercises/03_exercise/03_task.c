#include <stdio.h>

void checkEvenOrOddNum(int a) {
    if (a % 2 == 0) {
        printf("The number is even.");
    } else {
        printf("The number is odd.");
    }
}

int main() {
    int number;

    printf("Enter number: ");
    scanf("%d", &number);

    checkEvenOrOddNum(number);

    return 0;
}
