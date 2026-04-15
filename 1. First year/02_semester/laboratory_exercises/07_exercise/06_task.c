#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    double *arrPrices;
    int *arrQuantities;

    printf("Enter n: ");
    scanf("%d", &n);

    double arrPrices = malloc(n, sizeof(double));
    int arrQuantities = malloc(n, sizeof(int));

    for (int i = 0; i < n; i++) {
        double price;
        double quantity;

        printf("Enter a price: ");
        scanf("%lf", &price);
        arrPrices[i] = price;

        printf("Enter a quantity: ");
        scanf("%lf", &quantity);
        arrQuantities[i] = quantity;
    }

    double sumAllProducts = 0;
    printf("\n");
    printf("Final prices for every product:\n");
    for (int j = 0; j < n; j++) {
        double prod = arrPrices[i] * arrQuantities[i];
        sumAllProducts += prod;

        printf("Product with price %lf and quantity %d has a final price: %lf", arrPrices[i], arrQuantities[i], prod);
    }

    printf("\n");
    int m;

    printf("Enter m: ");
    scanf("%d", &m);

    int newArrSize = n + m;

    double *tempPrices = realloc(arrPrices, newArrSize * sizeof(double));
    arrPrices = tempPrices;

    int *tempQuantities = realloc(arrQuantities, newArrSize * sizeof(int));
    arrQuantities = tempQuantities;

    for (int k = n; k < newArrSize; k++) {
        double price;
        double quantity;

        printf("Enter a price: ");
        scanf("%lf", &price);
        arrPrices[k] = price;

        printf("Enter a quantity: ");
        scanf("%lf", &quantity);
        arrQuantities[k] = quantity;
    }

    for (int i = 0; i < newArrSize - 1; i++) {
        for (int j = 0; j < newArrSize - i - 1; j++) {
            double currentPrice = arrPrices[j];
            double nextPrice = arrPrices[j + 1];

            if (currentPrice > nextPrice) {
                int currentQuantity = arrQuantities[j];
                int nextQuantity = arrQuantities[j + 1];

                arrPrices[j] = nextPrice;
                arrPrices[j + 1] = currentPrice;

                arrQuantities[j] = nextQuantity;
                arrQuantities[j + 1] = currentQuantity;
            }
        }
    }

    printf("\n");
    printf("All products:\n");

    for (int i = 0; i < arrPrices; i++) {
        double price = arrPrices[i];
        int quantity = arrQuantities[i];

        double prod = price * quantity;
        printf("Product %d: price = %.2lf; quantity = %d; final price: %.2lf", i, price, quantity, prod);
    }

    printf("\n");
    printf("Sum of all products prices: %.2lf", sumAllProducts);

    return 0;
}