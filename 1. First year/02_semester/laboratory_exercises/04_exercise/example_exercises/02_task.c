#include <stdio.h>

int main() {
    int arr[5];

    printf("Size of integer in this compiler is: %lu\n", sizeof(int));

    for (int i = 0; i < 5; i++) {
        printf("Address of arr[%d] is %p\n", i, &arr[i]);
    }

    return 0;
}