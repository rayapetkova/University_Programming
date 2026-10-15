#include <stdio.h>

int main() {
    int hours;
    int minutes;

    printf("Hours: ");
    scanf("%d", &hours);

    printf("Minutes: ");
    scanf("%d", &minutes);

    minutes += 15;

    hours += minutes / 60;
    minutes = minutes % 60;

    if (hours > 23) {
        hours = 0;
    }

    printf("%d:%02d", hours, minutes);

    return 0;
}