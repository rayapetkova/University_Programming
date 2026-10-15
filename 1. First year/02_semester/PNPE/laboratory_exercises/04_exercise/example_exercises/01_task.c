#include <stdio.h>

int main() {
    int n[10];

    for (int i = 1; i < 11; i++) {
        n[i - 1] = i * 2;
    }

    for (int j = 0; j < 10; j++) {
        printf("%d\n", n[j]);
    }

    return 0;
}