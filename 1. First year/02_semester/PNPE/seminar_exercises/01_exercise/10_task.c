#include <stdio.h>

int main() {
    double vegetables_price;
    double fruits_price;
    int vegetables_kg;
    int fruits_kg;

    printf("Enter vegetables price (BGN): ");
    scanf("%lf", &vegetables_price);

    printf("Enter fruits price (BGN): ");
    scanf("%lf", &fruits_price);

    printf("Enter vegetables kg: ");
    scanf("%d", &vegetables_kg);

    printf("Enter fruits kg: ");
    scanf("%d", &fruits_kg);

    vegetables_price = vegetables_price * 0.51;
    fruits_price = fruits_price * 0.51;

    double income = vegetables_kg * vegetables_price + fruits_kg * fruits_price;
    printf("Income: %.2lf", income);

    return 0;
}