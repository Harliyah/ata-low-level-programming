#include <stdio.h>
int main(){
	int num = 100;
	int *p = &num;
	printf("Value of num: %d\nAddress of num: %p\nValue of ptr (address of num): %p\n", num, &num, p);
}
