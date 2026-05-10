#include <stdio.h>
#include <stdbool.h>

int main() {
    int n, m;
    int numsArr[n][m];

    printf("Enter n: ");
    scanf("%d", &n);

    printf("Enter m: ");
    scanf("%d", &m);

    for (int row = 0; row < n; row++) {
        printf("Enter numbers on row %d: \n", row);

        for (int col = 0; col < m; col++) {
            int num;
            scanf("%d", num);

            numsArr[row][col] = num;
        }
    }

    for (int row = 0; row < n; row++) {
        bool validRow = true;

        for (int col = 0; col < m - 1; col++) {
            if (numsArr[row][col] >= numsArr[row][col + 1]) {
                validRow = false;
                break;
            }
        }

        if (!validRow) {
            printf("The row is not valid.");
        }
    }

    for (int col = 0; col < m; col++) {
        bool validCol = true;

        for (int row = 0; row < n - 1; row++) {
            if (numsArr[row][col] <= numsArr[row + 1][col]) {
                validCol = false;
                break;
            }
        }

        if (!validCol) {
            printf("The col is not valid.");
        }
    }

    return 0;
}