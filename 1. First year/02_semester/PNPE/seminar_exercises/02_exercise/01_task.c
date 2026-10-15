#include <stdio.h>

int findMaxNum(int a, int b) {
    if (a > b) {
        return a;
    }

    return b;
}

int findMinNum(int a, int b) {
    if (a < b) {
        return a;
    }

    return b;
}

int main() {
    int num;
    scanf("%d", &num);

    int maxNum = num;
    int minNum = num;

    while (num != 0) {
        maxNum = findMaxNum(maxNum, num);
        minNum = findMinNum(minNum, num);

        scanf("%d", &num);
    }

    printf("Max num is: %d\n", maxNum);
    printf("Min num is: %d", minNum);

    return 0;
}