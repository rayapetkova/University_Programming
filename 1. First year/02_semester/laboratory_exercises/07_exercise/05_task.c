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

    int sumSpecificNums = 0;
    int countSpecificNums = 0;
    for (int r = 0; r < rows; r++) {
        for (int c = 0; c < cols; c++) {
            int num = arr[r][c];

            if (num % (r + c) == 0) {
                sumSpecificNums += num;
                countSpecificNums++;
            }
        }
    }

    double average = sumSpecificNums / countSpecificNums;
    printf("Average of needed nums is: %.2lf", average);

    return 0;
}