#include <stdio.h>
int subtract(int a, int b){
	return a - b;
}
int main(){
	int a, b, result;
	printf("Enter the first integer: ");
	scanf("%d", &a);
	printf("Enter the second integer: ");
	scanf("%d", &b);
	result = subtract(a, b);
	printf("Result of subtraction: %d\n", result);
}
