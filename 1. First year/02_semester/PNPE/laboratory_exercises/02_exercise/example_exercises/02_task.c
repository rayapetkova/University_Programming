#include <stdio.h>

int main() {
    int num;

    printf("Въведете число: ");
    scanf("%d", &num);

    if (num % 8 == 4) {
        printf("Остатъкът при деление на 8 е 4.");
    } else {
        printf("Остатъкът при деление на 8 НЕ е 4.");
    };

    return 0;
}