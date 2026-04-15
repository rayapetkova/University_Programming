#include <stdio.h>

int main() {
    int n;

    printf("Enter n: ");
    scanf("%d", &n);

    int arr[n], resultSumsArr[n];
    for (int i = 0; i < n; i++) {
        int num;

        printf("Enter a 4-digits number: ");
        scanf("%d", &num);

        while (num < 1000 || num > 9999) {
            printf("Enter a new num. It needs to consist of 4 digits: ");
            scanf("%d", &num);
        }

        arr[i] = num;
    }

    for (int j = 0; j < n; j++) {
        int sumDigits = 0;
        int num = arr[j];

        while (num) {
            sumDigits += num % 10;
            num /= 10;
        }

        resultSumsArr[j] = sumDigits;
    }

    printf("Sums of the digits of every num are:\n");
    for (int k = 0; k < n; k++) {
        printf("%d\n", resultSumsArr[k]);
    }

    return 0;
}