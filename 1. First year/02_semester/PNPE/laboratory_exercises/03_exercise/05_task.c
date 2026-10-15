#include <stdio.h>

double sumNums(double a, double b, double c) {
    return a + b + c;
}

double maxNum(double a, double b, double c) {
    double biggestNum = a;

    if (b > biggestNum) {
        biggestNum = b;
    }

    if (c > biggestNum) {
        biggestNum = c;
    }

    return biggestNum;
}

double minNum(double a, double b, double c) {
    double smallestNum = a;

    if (b < smallestNum) {
        smallestNum = b;
    }

    if (c < smallestNum) {
        smallestNum = c;
    }

    return smallestNum;
}

double averageNums(double a, double b, double c) {
    return (a + b + c) / 3;
}

int main() {
    double x, y, z;

    double sum = sumNums(x, y, z);
    double maxNumber = maxNum(x, y, z);
    double minNumber = minNum(x, y, z);
    double averageNumbers = averageNums(x, y, z);

    printf("Sum of numbers: %.2lf", sum);
    printf("Max number: %.2lf", maxNumber);
    printf("Min number: %.2lf", minNumber);
    printf("Average of numbers: %.2lf", averageNumbers);

    return 0;
}
