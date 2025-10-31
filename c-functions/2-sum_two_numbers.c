#include <stdio.h>
void print_sum(int a, int b){
	printf("Sum: %d\n", a+b);
}
int main(){
	int a, b;
	printf("Enter the first integer: \n");
	scanf("%d", &a);
	printf("Enter the second integer: \n");
	scanf("%d", &b);
	print_sum(a, b);
}
