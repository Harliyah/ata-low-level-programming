#include <stdio.h>

int main() {
    int norm_arr[5] = {5, 10, 15, 20, 25};
    int *ptr = norm_arr;

    for (int i = 0; i < 5; i++) {
        printf("Element %d (Value: %d, Address: %#lx)\n", i, *(ptr + i), (unsigned long)(ptr + i));
    }

    return 0;
}
