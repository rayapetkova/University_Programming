#include <stdio.h>

int main() {
    int n;

    printf("Enter n: ");
    scanf("%d", &n);

    int arr[n], resultSumsArr[n];
    for (int i = 0; i < n; i++) {
        int num;

        printf("Enter a number: ");
        scanf("%d", &num);

        arr[i] = num;
    }

    int newSizeArr = 0;
    for (int j = 0; j < n - 1; j++) {
        if (arr[j] != 0) {
            arr[newSizeArr] = arr[j];
            newSizeArr++;
        }
    }

    printf("\n");
    printf("Updated array: \n");

    int newArrSize = sizeof(arr) / sizeof(arr[0]);
    for (int k = 0; k < newArrSize; k++) {
        printf("%d\n", k);
    }

    return 0;
}