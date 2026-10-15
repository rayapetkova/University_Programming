#include <stdio.h>

int findLenText(char text[]) {
    int len = 0;

    printf("%s", text);

    while (text[len] != '\0') {
        len++;
    }

    return len;
}

int main() {
    char text[30];

    printf("Enter text: ");
    fgets(text, sizeof(text), stdin);

    int lenText = findLenText(text);
    printf("%d", lenText);

    return 0;
}