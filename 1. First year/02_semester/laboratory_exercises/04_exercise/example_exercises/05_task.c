#include <stdio.h>

int main() {
    double arr[5];

    for (int j = 0; j < 5; j++) {
        printf("Enter number: ");
        scanf("%lf", &arr[j]);
    }

    for (int i = 0; i < 5; i++) {
        printf("%.2lf\n", arr[i]);
    }

    return 0;
}