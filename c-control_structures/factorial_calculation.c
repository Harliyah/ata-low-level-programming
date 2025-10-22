#include <stdio.h>
int main(){
	int num;
	int fact = 1;
	printf("Enter a non-negative integer: ");
	scanf("%d", &num);
	int number = num;
	while(num > 0){
		fact *= num;
		num--;
	} 
	printf("Factorial of %d is: %d \n", number, fact);
}
