#include <stdio.h>

int main() {
    int x = 10;
    int *ptr = &x;

    printf("Initial address: %p\n", ptr);

    ptr++;

    printf("Address after increment: %p\n", ptr);

    return 0;
}
