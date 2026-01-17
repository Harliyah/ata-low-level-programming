#include <stdio.h>
int main(){
	int num = 42;
	int *p = &num;
	printf("Value of myVar: %d\nAddress of myVar: %p\n", num, &p);
}
