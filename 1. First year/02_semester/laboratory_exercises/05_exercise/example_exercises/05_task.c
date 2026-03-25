#include <stdio.h>

int main() {
    int arr[3][2] = {
        {0, 1},
        {2, 3},
        {4, 5}
    };

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d\n", arr[i][j]);
        }
    }

    return 0;
}