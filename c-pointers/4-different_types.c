#include <stdio.h>

int main() {
    char c = 'A';
    float f = 3.14;
    double d = 123.456;

    char *ptr_c = &c;
    float *ptr_f = &f;
    double *ptr_d = &d;

    printf("Character: %c, Address: %p, Value via pointer: %c\n", c, &c, *ptr_c);
    printf("Float: %f, Address: %p, Value via pointer: %f\n", f, &f, *ptr_f);
    printf("Double: %lf, Address: %p, Value via pointer: %lf\n", d, &d, *ptr_d);

    return 0;
}
