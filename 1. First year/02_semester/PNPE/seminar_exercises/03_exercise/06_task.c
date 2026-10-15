#include <stdio.h>

int main() {
    int arr[20] = { 1, 2, 3, 4, 5, 6, 1, 5, 8 };

    int ascNums[7];
    int counterBiggestAscNums = 0;
    int tempCounter = 1;
    for (int i = 0; i < 6; i++) {
        int num = arr[i];

        if (num < arr[i + 1]) {
            ascNums[counterBiggestAscNums] = num;
            tempCounter++;
        } else {
            if (tempCounter > counterBiggestAscNums) {
                counterBiggestAscNums = tempCounter;
            }
            tempCounter = 1;
        }
    }

    if (tempCounter > counterBiggestAscNums) {
        counterBiggestAscNums = tempCounter;
    }

    printf("%d", counterBiggestAscNums);

    return 0;
}