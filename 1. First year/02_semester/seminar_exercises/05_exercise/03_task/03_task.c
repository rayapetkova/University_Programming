#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    FILE *file;
    char word[100], **wordsArr;

    file = fopen("03_task.txt", "r");
    wordsArr = malloc(10 * sizeof(char*));

    if (file == NULL) {
        printf("Could not open file.\n");
        return 0;
    }

    char lastChar;
    int idx = 0;
    while (fscanf(file, "%s", word) == 1) {
        if (idx == 0) {
            wordsArr[idx] = malloc(strlen(word) + 1);
            strcpy(wordsArr[idx], word);
            lastChar = word[strlen(word) - 1];

            idx++;
        } else {
            char firstChar = word[0];

            if (firstChar == lastChar) {
                wordsArr[idx] = malloc(strlen(word) + 1);
                strcpy(wordsArr[idx], word);
                lastChar = word[strlen(word) - 1];
                idx++;
            }
        }
    }

    for (int i = 0; i < 10; i++) {
        printf("%s\n", wordsArr[i]);
    }

    free(wordsArr);
    fclose(file);

    return 0;
}