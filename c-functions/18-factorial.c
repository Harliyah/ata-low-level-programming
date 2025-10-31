#include <stdio.h>
long long calculate_factorial(int n);
int main(){
	int num;
	long long result;
	printf("Enter a non-negative integer: \n");
	scanf("%d", &num);
	result= calculate_factorial(num);
	printf("Factorial of %d is: %lld\n", num, result);
}
long long calculate_factorial(int n){
	long long fact = 1;
	if(n == 0){
		return 1; 
	}
	else if(n<0){
		printf("The integer should be non-negative\n");
		return 0;
	}
	else{
	for(int i = 1; i <= n; i++){
		fact *= i;
	}
	return fact;
	}
}
