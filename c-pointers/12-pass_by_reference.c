#include <stdio.h>

void increment(int *num_ptr) {
    (*num_ptr)++;
}

int main() {
    int num = 5;

    printf("Value before function call: %d\n", num);

    increment(&num);

    printf("Value after function call: %d\n", num);

    return 0;
}
