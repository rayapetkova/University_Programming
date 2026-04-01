#include <stdio.h>

int main() {
    int n;

    printf("Enter length of arr: ");
    scanf("%d", &n);

    int arr[n];

    for (int i = 0; i < n; i++) {
        int num;

        printf("Enter a number: ");
        scanf("%d", &num);

        arr[i] = num;
    }

    int k;

    printf("Enter k: ");
    scanf("%d", &k);

    int arr2[n];

    for (int i = 0; i < n; i++) {
        if (i + k > n - 1) {
            int position = i + k - n;
            arr2[position] = arr[i];
        }

        arr2[i + k] = arr[i];
    }

    printf("New array: \n");
    for (int j = 0; j < n; j++) {
        printf("%d\n", arr2[j]);
    }

    return 0;
}