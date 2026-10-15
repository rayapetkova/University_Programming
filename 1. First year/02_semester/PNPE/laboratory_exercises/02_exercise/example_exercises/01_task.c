#include <stdio.h>

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num > 7) {
        printf("The number is greater than 7");
    };

    return 0;
}