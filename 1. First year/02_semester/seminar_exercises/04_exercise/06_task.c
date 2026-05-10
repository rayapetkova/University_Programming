#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int isPrime(int num) {
    int counter = 0;

    for (int i = 2; i < num; i++) {
        if (num % i == 0) {
            counter++;
        }
    }

    if (counter > 1) {
        return false;
    }

    return true;
}

int main() {
    int *numbers, n, *primeNumbers;

    printf("Enter n: ");
    scanf("%d", &n);

    numbers = malloc(n * sizeof(int));

    for (int i = 0; i < n; i++) {
        int num;

        printf("Enter a number: ");
        scanf("%d", &num);

        numbers[i] = num;
    }

    primeNumbers = malloc(n * sizeof(int));

    int newSize = 0;
    int counterPrimeNums = 0;
    for (int i = 0; i < n; i++) {
        if (!isPrime(numbers[i])) {
            numbers[newSize] = numbers[i];
            newSize++;
        } else {
            primeNumbers[i] = numbers[i];
            counterPrimeNums++;
        }
    }

    printf("First array with non-prime numbers: \n");
    for (int i = 0; i < n; i++) {
        printf("%d ", numbers[i]);
    }

    printf("\n");
    printf("Second array with prime numbers: \n");

    for (int i = 0; i < counterPrimeNums; i++) {
        printf("%d ", primeNumbers[i]);
    }

    free(numbers);
    free(primeNumbers);

    return 0;
}