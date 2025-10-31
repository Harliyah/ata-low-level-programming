#include <stdio.h>
int divide(int a, int b){
	if(b == 0){
		return 0;
	}
	else{
	        return a / b;
	}
}
int main(){
	int a, b, result;
	printf("Enter the first integer: ");
	scanf("%d", &a);
	printf("Enter the second integer: ");
	scanf("%d", &b);
	result = divide(a, b);
	printf("Result of division: %d\n", result);
}
