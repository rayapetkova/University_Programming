#include <stdio.h>
#include <string.h>

int main() {
    char text[30] = "raya";
    char symbol[] = "a";

    int occurences = 0;

    for (int i = 0; i < strlen(text); i++) {
        if (text[i] == symbol) {
            occurences++;
        }
    }

    printf("Occurences of %c: %d", symbol, occurences);

    return 0;
}