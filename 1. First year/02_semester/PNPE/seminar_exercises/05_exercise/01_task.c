#include <stdio.h>

int main() {
    int guests;

    printf("Enter guests: ");
    scanf("%d", &guests);

    char command[30];
    printf("Enter product: ");
    scanf("%s", &command);

    double money = 0;
    int tableSeats, chairs, cups, dishes;

    while (command != "PARTY!") {
        if (command == "table") {
            money += 42;
            tableSeats += 8;
        } else if (command == "chair") {
            money += 13.99;
            chairs++;
        } else if (command == "cups") {
            money += 5.98;
            cups += 6;
        } else if (command == "dishes") {
            money += 21.02;
            dishes += 6;
        }
    }

    printf("Money spend: %.2lf", money);

    if (tableSeats < guests) {
        int tablesNeeded = (guests + 7) / 8;
        printf("%d tables needed", tablesNeeded);
    }

    if (chairs < guests) {
        int chairsNeeded = guests - chairs;
        printf("%d chairs needed", chairsNeeded);
    }

    if (cups < guests) {
        int cupsNeeded = guests - cups;
        printf("%d cups needed", cupsNeeded);
    }

    if (dishes < guests) {
        int dishesNeeded = guests - dishes;
        printf("%d dishes needed", dishesNeeded);
    }

    return 0;
}