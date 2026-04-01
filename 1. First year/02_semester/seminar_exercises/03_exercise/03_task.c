#include <stdio.h>
#include <stdbool.h>

int main() {
    int n;

    printf("Enter length of arr: ");
    scanf("%d", &n);

    int arr[n], reversedArr[n];

    for (int i = 0; i < n; i++) {
        int num;

        printf("Enter a number: ");
        scanf("%d", &num);

        arr[i] = num;
    }

    for (int j = 0; j < n; j++) {
        reversedArr[j] = arr[n - j - 1];
    }

    printf("Reversed array: \n");
    for (int k = 0; k < n; k++) {
        printf("%d\n", reversedArr[k]);
    }

    return 0;
}