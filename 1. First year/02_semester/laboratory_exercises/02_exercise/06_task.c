#include <stdio.h>

int main() {
    for (int i = 1; i <= 10; i++) {
        if (i == 5) {
            continue;
        }

        printf("%d\n", i);
    }

    int j = 11;
    while (j <= 20) {
        printf("%d\n", j);
        j++;
    }

    return 0;
}