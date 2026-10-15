#include <stdio.h>
#include <string.h>

int findSumNums(int arr[7]) {
    int sum = 0;

    for (int i = 0; i < 7; i++) {
        sum += arr[i];
    }

    return sum;
}

int findMaxNum(int arr[7]) {
    int maxNum = arr[0];

    for (int i = 0; i < 7; i++) {
        if (arr[i] > maxNum) {
            maxNum = arr[i];
        }
    }

    return maxNum;
}

double findAverageNums(int arr[7]) {
    int sumNums = findSumNums(arr);
    double averageNums = sumNums / strlen(arr);

    return averageNums;
}

int findClosestToAverageNumIdx(int arr[7]) {
    double averageNums = findAverageNums(arr);
    double smallestDifference = 10;
    double smallestDifferenceNumIdx = 0;

    for (int i = 0; i < 7; i++) {
        if (averageNums - arr[i] < smallestDifference) {
            smallestDifference = arr[i];
            smallestDifferenceNumIdx = i;
        }
    }

    return smallestDifferenceNumIdx;
}

int main() {
    int arr[7];

    for (int i = 0; i < 7; i++) {
        int num;

        printf("Enter a number between -200 and 200: ");
        scanf("%d", &num);

        while (num < -200 || num > 200) {
            printf("Enter again: ");
            scanf("%d", &num);
        }

        arr[i] = num;
    }

    int sum = findSumNums(arr);
    int maxNum = findMaxNum(arr);
    double average = findAverageNums(arr);
    int closestNumIdxToAverage = findClosestToAverageNumIdx(arr);

    return 0;
}