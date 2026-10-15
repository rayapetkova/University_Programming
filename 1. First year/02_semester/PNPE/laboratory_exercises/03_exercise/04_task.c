#include <stdio.h>
#include <math.h>

int convertToBinary(int num) {
    int binaryNum = 0;
    int counter = 0;

    while (num != 0) {
        binaryNum += (num % 2) * pow(10, counter);
        counter++;
        num /= 2;
    }

    return binaryNum;
}

int main() {
    int number;

    scanf("%d", &number);

    int binaryNum = convertToBinary(number);
    printf("%d", binaryNum);

    return 0;
}
