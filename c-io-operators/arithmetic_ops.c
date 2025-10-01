#include <stdio.h>
int main(){
	int int1;
	int int2;
	printf("Enter two integers: " );
	scanf("%d", &int1);
	scanf("%d", &int2);
	int sum = int1 + int2;
	int diff = int1 - int2;
	int product = int1 * int2;
	double  quotient = int1 / int2;
	int remainder = int1 % int2;
	printf("Sum = %d\n", sum);
	printf("Difference = %d\n", diff);
	printf("Product = %d\n", product);
	printf("Quotient = %.2f\n", quotient);
	printf("Remainder = %d\n", remainder);
	
}
