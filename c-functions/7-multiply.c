#include <stdio.h>
int multiply(int a, int b){
	        return a * b;
}
int main(){
	        int a, b, result;
		printf("Enter the first integer: ");
		scanf("%d", &a);
		printf("Enter the second integer: ");
		scanf("%d", &b);
		result = multiply(a, b);
		printf("Result of multiplication: %d\n", result);
}
