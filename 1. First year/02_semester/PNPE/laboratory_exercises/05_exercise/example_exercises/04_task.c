#include <stdio.h>

int main() {
    int arr[] = {10, 20, 30, 40, 50, 60};
    int *ptr = arr;

    printf("Value of first element: %d\n", arr[0]);
    printf("Value of first element (from pointer): %d\n", *ptr);
    printf("Address of first element: %p\n", ptr);

    printf("Value of third element: %d\n", arr[2]);
    printf("Value of third element (from pointer): %d\n", *(ptr + 2));
    printf("Address of third element: %p\n", (ptr + 2));

    return 0;
}