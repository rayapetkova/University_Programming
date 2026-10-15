#include <stdio.h>

int main() {
    int arr[7];

    for (int j = 0; j < 7; j++) {
        printf("Enter number: ");
        scanf("%d", &arr[j]);
    }

    for (int i = 0; i < 7; i++) {
        printf("%d\n", arr[i]);
    }

    return 0;
}