#include <stdio.h>

int main() {
    int n, m;

    printf("n: ");
    scanf("%d", &n);

    printf("m: ");
    scanf("%d", &m);

    int arr[n][m];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("Enter a number (for arr[%d][%d]): ", i, j);
            scanf("%d", &arr[i][j]);
            printf("arr[%d][%d]: %d\n", i, j, arr[i][j]);
        }
    }

    printf("\n");

    printf("First diagonal: \n");
    for (int i = 0; i < n; i++) {
        printf("%d\n", arr[i][i]);
    }

    printf("\n");

    printf("Second diagonal: \n");
    for (int i = 0; i < n; i++) {
        printf("%d\n", arr[i][n - 1 - i]);
    }

    printf("\n");

    printf("Above second diagonal: \n");
    for (int k = 0; k < n; k++) {
        for (int l = 0; l < m; l++) {
            if (l > k) {
                printf("arr[%d][%d]: %d\n", k, l, arr[k][l]);
            }
        }
    }

    printf("\n");

    printf("Below second diagonal: \n");
    for (int k = 0; k < n; k++) {
        for (int l = 0; l < m; l++) {
            if (k > l) {
                printf("arr[%d][%d]: %d\n", k, l, arr[k][l]);
            }
        }
    }

    return 0;
}