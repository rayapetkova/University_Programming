#include <stdio.h>
#include <stdlib.h>

int main() {
    int p;
    double *arrP;

    printf("Enter p: ");
    scanf("%d", &p);

    arrP = calloc(p, sizeof(double));
    for (int i = 0; i < p; i++) {
        double num;

        printf("Enter number: ");
        scanf("%lf", &num);

        arrP[i] = num;
    }

    double sumNums = 0;
    for (int i = 0; i < p; i++) {
        sumNums += arrP[i];
    }

    printf("Sum of numbers (arr 1): %.2lf\n", sumNums);

    int q;

    printf("Enter q: ");
    scanf("%d", &q);

    double *temp = realloc(arrP, q * sizeof(double));
    arrP = temp;
    for (int j = p; j < q; j++) {
        double num;

        printf("Enter number: ");
        scanf("%lf", &num);

        arrP[j] = num;
    }

    double sumNewArrNums = 0;
    double maxNum = arrP[0];
    for (int j = 0; j < q; j++) {
        sumNewArrNums += arrP[j];

        if (arrP[j] > maxNum) {
            maxNum = arrP[j];
        }
    }

    printf("Sum of numbers (arr 2): %.2lf\n", sumNewArrNums);
    printf("Max num (arr 2): %.2lf\n", maxNum);

    for (int i = 0; i < q - 1; i++) {
        for (int j = 0; j < q - i - 1; j++) {
            double currentNumTemp = arrP[j];
            double nextNum = arrP[j + 1];

            if (currentNumTemp > nextNum) {
                arrP[j] = nextNum;
                arrP[j + 1] = currentNumTemp;
            }
        }
    }

    printf("Sorted arr: \n");
    for (int i = 0; i < q; i++) {
        printf("%.2lf\n", arrP[i]);
    }

    return 0;
}