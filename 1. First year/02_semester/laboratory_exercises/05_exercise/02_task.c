#include <stdio.h>
#include <stdbool.h>

int main() {
    int square[3][2] = {
        {2, 3},
        {4, 5},
        {5, 6}
    };

    int sumRowCol = NULL;
    bool isMagic = false;

    for (int row = 0; row < 3; row++) {
        int sumRow = 0;

        for (int col = 0; col < 2; col++) {
            sumRow += square[row][col];
        }

        if (sumRowCol == NULL) {
            isMagic = true;
            sumRowCol = sumRow;
        } else if (sumRowCol != sumRow) {
            isMagic = false;
            printf("The square is not magic");
        }
    }

    if (isMagic) {
        for (int col = 0; col < 2; col++) {
            int sumCol = 0;

            for (int row = 0; row < 3; row++) {
                sumCol += square[row][col];
            }

            if (sumRowCol != sumCol) {
                isMagic = false;
                printf("The square is not magic.");
            } else {
                isMagic = true;
            }
        }
    }

    if (isMagic) {
        printf("The square is magic.");
    }

    return 0;
}