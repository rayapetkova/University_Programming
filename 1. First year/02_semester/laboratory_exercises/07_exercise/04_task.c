#include <stdio.h>

int main() {
    int rows, cols;

    printf("Enter rows: ");
    scanf("%d", &rows);

    printf("Enter cols: ");
    scanf("%d", &cols);

    int arr[rows][cols];

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            int num;

            printf("Enter number for position row: [%d]; col: [%d]: ", i, j);
            scanf("%d", &num);

            arr[i][j] = num;
        }
    }

    int newArr[];
    int countNegatives = 0;
    for (int r = 0; r < rows; r++) {
        for (int c = 0; c < cols; c++) {
            if (arr[r][c] < 0) {
                newArr[countNegatives] = arr[r][c];
                countNegatives++;
            }
        }
    }

    printf("Negative numbers:\n");
    for (int k = 0; k < countNegatives; k++) {
        printf("%d\n", newArr[k]);
    }

    return 0;
}