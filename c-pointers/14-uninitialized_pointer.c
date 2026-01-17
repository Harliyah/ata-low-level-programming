#include <stdio.h>

int main() {
    int *uninitialized_ptr;

    printf("Value of uninitialized_ptr: %p\n", uninitialized_ptr);

    uninitialized_ptr = NULL;

    if (uninitialized_ptr == NULL) {
        printf("After initializing to NULL: uninitialized_ptr is NULL.\n");
    }

    /*
       Using an uninitialized pointer is dangerous because it may point to a random memory location.
       Dereferencing it can lead to undefined behavior, crashes, or segmentation faults.
       Always initialize pointers, either to a valid address or to NULL, before use.
    */

    return 0;
}
