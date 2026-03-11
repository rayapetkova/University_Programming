#include <stdio.h>

void findMaxNum(int, int);


int main() {
    int a, b;

    scanf("%d %d", &a, &b);

    findMaxNum(a, b);

    return 0;
}

void findMaxNum(int a, int b) {
    if (a > b) {
        printf("%d", a);
    } else {
        printf("%d", b);
    }
}
