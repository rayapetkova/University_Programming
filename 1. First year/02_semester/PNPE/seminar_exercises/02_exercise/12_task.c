#include <stdio.h>

int main() {
    int n;

    printf("n: ");
    scanf("%d", &n);

    int cols = 2 * n - 1;

    int rows = 2 * (n - 2) + 1;
    int atSignMiddle = rows / 2;
    int starsDashesNum = (cols - 3) / 2;

    for (int row = 0; row < rows; row++) {
        for (int star = 0; star < starsDashesNum; star++) {
            if (row == atSignMiddle) {
                printf(" ");
            } else {
                if (row % 2 != 0) {
                    printf("-");
                } else {
                    printf("*");
                }
            }
        }

        if (row == atSignMiddle) {
            printf(" @");
        } else if (row < atSignMiddle) {
            printf("\\ /");
        } else {
            printf("/ \\");
        }

        for (int star = 0; star < starsDashesNum; star++) {
            if (row == atSignMiddle) {
                printf(" ");
            } else {
                if (row % 2 != 0) {
                    printf("-");
                } else {
                    printf("*");
                }
            }
        }

        printf("\n");
    }

    return 0;
}