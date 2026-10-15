#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct Medicine {
    char name[31];
    char expireDate[8];
    long long medicineCode;
    double price;
    int quantity;
} medicine;

medicine* invalidMedicines(medicine medicinesArr[], int sizeMedicinesArr, char date[]) {
    int dateMonth, dateYear;
    sscanf(date, "%d.%d", &dateMonth, &dateYear);

    medicine *expiredMedicines = malloc(sizeMedicinesArr * sizeof(medicine));
    int expiredMedicinesCount = 0;

    for (int i = 0; i < sizeMedicinesArr; i++) {
        int medicineMonth, medicineYear;
        medicine medicineRecord = medicinesArr[i];

        sscanf(medicineRecord.expireDate, "%d.%d", &medicineMonth, &medicineYear);

        if (medicineYear < dateYear) {
            expiredMedicines[expiredMedicinesCount] = medicineRecord;
            expiredMedicinesCount++;
        } else if (medicineYear == dateYear) {
            if (medicineMonth < dateMonth) {
                expiredMedicines[expiredMedicinesCount] = medicineRecord;
                expiredMedicinesCount++;
            }
        }
    }

    if (expiredMedicinesCount == 0) {
        return NULL;
    }

    return expiredMedicines;
}

int priceRangeMedicines(medicine medicinesArr[], int sizeMedicinesArr, double minPrice, double maxPrice) {
    FILE *txtFile = fopen("offer.txt", "w");

    if (txtFile == NULL) {
        printf("Could not open file.\n");
        return 0;
    }

    int medicinesInPriceRangeCount = 0;

    for (int i = 0; i < sizeMedicinesArr; i++) {
        medicine medicineRecord = medicinesArr[i];

        if (medicineRecord.price >= minPrice && medicineRecord.price <= maxPrice) {
            fprintf(txtFile, "%s\n", medicineRecord.name);
            fprintf(txtFile, "%s\n", medicineRecord.expireDate);
            fprintf(txtFile, "%lld\n", medicineRecord.medicineCode);
            fprintf(txtFile, "%.2lf leva\n", medicineRecord.price);

            fprintf(txtFile, "\n");

            medicinesInPriceRangeCount++;
        }
    }

    fclose(txtFile);
    return medicinesInPriceRangeCount;
}

void deleteMedicine(medicine medicinesArr[], int sizeMedicinesArr, char name[], char date[]) {
    bool foundMedicine = false;

    for (int i = 0; i < sizeMedicinesArr; i++) {
        medicine medicineRecord = medicinesArr[i];

        if (strcmp(medicineRecord.name, name) == 0 && strcmp(medicineRecord.expireDate, date) == 0) {
            for (int j = i; j < sizeMedicinesArr - 1; j++) {
                medicinesArr[j] = medicinesArr[j + 1];
            }

            foundMedicine = true;
            break;
        }
    }

    if (foundMedicine) {
        printf("Medicine is successfully deleted.");
    } else {
        printf("Medicine could not be found.");
    }
}

int main() {
    FILE *file = fopen("medicines.bin", "rb");

    if (file == NULL) {
        printf("Could not open file.\n");
        return 0;
    }

    fseek(file, 0, SEEK_END);
    long fileSize = ftell(file);
    rewind(file);

    int medicinesCount = fileSize / sizeof(medicine);
    medicine *medicines = malloc(medicinesCount * sizeof(medicine));

    if (medicines == NULL) {
        printf("Medicines is empty.");

        fclose(file);
        free(medicines);

        return 0;
    }

    size_t readCount = fread(medicines, sizeof(medicine), medicinesCount, file);

    if (readCount != medicinesCount) {
        printf("Read count is not the same as real medicines count.");
    } else {
        for (int i = 0; i < medicinesCount; i++) {
            printf("Medicine %d:\n", i);
            printf("Name: %s\n", medicines[i].name);
            printf("Expire date: %s\n", medicines[i].expireDate);
            printf("Medicine code: %lld\n", medicines[i].medicineCode);
            printf("Price: %.2lf\n", medicines[i].price);
            printf("Quantity: %d\n", medicines[i].quantity);
            printf("\n");
        }
    }

    fclose(file);
    free(medicines);

    return 0;
}