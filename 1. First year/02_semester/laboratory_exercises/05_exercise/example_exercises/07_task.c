#include <stdio.h>

int main() {
    int n, m;

    printf("n: ");
    scanf("%d", &n);

    printf("m: ");
    scanf("%d", &m);

    int arr1[n][m];
    int arr2[n][m];
    int resultArr[n][m];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("Enter a number (for arr1): ");
            scanf("%d", &arr1[i][j]);
            printf("arr1[%d][%d]: %d\n", i, j, arr1[i][j]);

            printf("Enter a number (for arr2): ");
            scanf("%d", &arr2[i][j]);
            printf("arr2[%d][%d]: %d\n", i, j, arr2[i][j]);

            resultArr[i][j] = arr1[i][j] + arr2[i][j];
        }
    }

    for (int k = 0; k < n; k++) {
        for (int l = 0; l < m; l++) {
            printf("Sum of nums: %d\n", resultArr[k][l]);
        }
    }

    return 0;
}