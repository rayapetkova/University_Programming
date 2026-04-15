#include <stdio.h>

int main() {
    int n;

    printf("Enter n: ");
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++) {
        int num;

        printf("Enter a number: ");
        scanf("%d", &num);

        arr[i] = num;
    }

    int evenNumsOnOddPos = 0;
    for (int j = 0; j < n; j++) {
        if (j % 2 != 0 && arr[j] % 2 == 0 && j != 0) {
            evenNumsOnOddPos++;
        }
    }

    printf("All even nums on odd positions are: %d", evenNumsOnOddPos);

    return 0;
}
