#include <stdio.h>
#include <string.h>

void checkIfEqual(char first[], char second[]) {
    int charsEqual = 0;

    for (int i = 0; i < strlen(first); i++) {
        if (first[i] == second[i]) {
            charsEqual++;
        }
    }

    if (charsEqual < strlen(first)) {
        printf("not equal");
    } else {
        printf("equal");
    }
}

int main() {
    char first[30] = "first";
    char second[30] = "second";

    checkIfEqual(first, second);

    return 0;
}