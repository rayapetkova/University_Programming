#include <stdio.h>
#include <stdbool.h>

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

    bool correct = false;
    for (int i = 1; i < n; i++) {
        int number = arr[i];

        if (n > i + 1) {
            if (i % 2 == 0) {
                if (number < arr[i - 1] && number < arr[i + 1]) {
                    correct = true;
                } else {
                    correct = false;
                }
            } else {
                if (number > arr[i - 1] && number > arr[i + 1]) {
                    correct = true;
                } else {
                    correct = false;
                }
            }
        }
    }

    if (correct) {
        printf("The sequence is correct.");
    } else {
        printf("The sequence is NOT correct.");
    }

    return 0;
}