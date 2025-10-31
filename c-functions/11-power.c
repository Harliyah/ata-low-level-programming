#include <stdio.h>
#include <math.h>
int calculate_power(int base, int exponent){
	if(exponent >=  0){
		int result = pow(base, exponent);
		return result;
	}
	else{
		printf("Exponent must be non-negative.\n");
	}
}
int main(){
	int a, b, result;
	printf("Enter base: ");
	scanf("%d", &a);
	printf("Enter exponent: ");
	scanf("%d", &b);
	result = calculate_power(a, b);
	printf("%d to the power of %d is: %d\n",a,b, result);
}
