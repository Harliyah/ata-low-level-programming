#include <stdio.h>

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    int *ptr = arr;

    printf("Address of array[0]: %p\n", &arr[0]);
    printf("Address of array (array name): %p\n", arr);
    printf("Value of ptr (address of array[0]): %p\n", ptr);

    return 0;
}
