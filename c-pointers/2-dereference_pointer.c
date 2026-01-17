#include <stdio.h>

int main() {
    int num = 50;
    int *p = &num;

    printf("Original value of x: %d\nValue accessed via pointer: %d\n", num, *p);

    return 0;
}
