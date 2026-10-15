#include <stdio.h>

int main() {
    int a;
    int b;
    int c;

    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);

    int sum = a + b + c;

    int minutes = sum / 60;
    int seconds = sum % 60;

    printf("%d:%02d", minutes, seconds);

    return 0;
}