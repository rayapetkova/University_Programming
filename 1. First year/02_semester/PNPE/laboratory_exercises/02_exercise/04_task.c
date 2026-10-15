#include <stdio.h>

int main() {
    int n;
    int k;

    printf("Enter N: ");
    scanf("%d", &n);

    printf("Enter K: ");
    scanf("%d", &n);

    int allNumsCount = 0;

    for (int i = 1; i <= n; i++) {
        int number;

        printf("Enter number: ");
        scanf("%d", number);

        if (number > k && number % 3 == 0) {
            allNumsCount++;
        }
    }

    printf("All numbers count: %d", allNumsCount);

    return 0;
}