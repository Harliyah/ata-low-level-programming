#include <stdio.h>
#include <math.h>
int calculate_power(int base, int exponent){
	if(exponent >=  0){
		int result = 1;
		for (int i = 0; i < exponent; i++) {
		result *= base;                                                                             }
		return result;
	}
	else{
		printf("Exponent must be non-negative.\n");
		return 0;
	}
}
int main(){
	int a, b, result;
	printf("Enter base: \n");
	scanf("%d", &a);
	printf("Enter exponent: \n");
	scanf("%d", &b);
	result = calculate_power(a, b);
	printf("%d to the power of %d is: %d\n",a,b, result);
}	

