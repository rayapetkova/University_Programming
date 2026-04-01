#include <stdio.h>

int main() {
    int n, k;

    printf("Enter length of arr: ");
    scanf("%d", &n);

    printf("Enter k: ");
    scanf("%d", &k);

    int arr[n];

    for (int i = 0; i < n; i++) {
        int num;

        printf("Enter a number: ");
        scanf("%d", &num);

        arr[i] = num;
    }

    for (int m = 0; m < n -1; m++) {
        for (int p = m + 1; p < n; p++) {
            if (arr[m] < arr[p]) {
                int temp = arr[m];
                arr[m] = arr[p];
                arr[p] = temp;
            }
        }
    }

    int searchedNum = arr[0];
    int counter = 1;
    int found = 0;
    for (int j = 0; j < n; j++) {
        if (arr[j] < searchedNum) {
            searchedNum = arr[j];
            counter++;
        }

        if (counter == k) {
            found = 1;
            break;
        }
    }

    if (found) {
        printf("The %d biggest number is: %d", k, searchedNum);
    }

    return 0;
}