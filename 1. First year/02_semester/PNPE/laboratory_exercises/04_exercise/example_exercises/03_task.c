#include <stdio.h>

int main() {
    int arr[] = { 10, 20, 30, 40, 50, 60 };
    int* ptr = arr;

    printf("Size of arr: %ld\n", sizeof(arr));
    printf("Size of pointer: %ld", sizeof(ptr));

    return 0;
}