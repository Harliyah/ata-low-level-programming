#include <stdio.h>
void swap_integers(int *a, int *b);
int main(){
	int a, b ;
	printf("Enter first number: \n");
	scanf("%d", &a);
	printf("Enter second number: \n");
	scanf("%d", &b);
	printf("Before swap: num1 = %d, num2 = %d\n", a, b);
	swap_integers(&a,&b);
	printf("After swap: num1 = %d, num2 = %d\n",a, b);
}
void swap_integers(int *a, int *b){
	int temp = *a;
	*a = *b;
	*b = temp;
}
