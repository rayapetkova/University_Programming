#include <stdio.h>

int main() {
    int points;

    printf("Points: ");
    scanf("%d", &points);

    int bonus = 0;

    if (points > 1000) {
        bonus += 0.1 * points;
    } else if (points > 100) {
        bonus += 0.2 * points;
    } else {
        bonus += 5;
    }

    if (points % 2 == 0) {
        bonus += 1;
    }

    if (points % 10 == 5) {
        bonus += 2;
    }

    points += bonus;

    printf("Bonus: %d\n", bonus);
    printf("Points after bonus: %d", points);

    return 0;
}