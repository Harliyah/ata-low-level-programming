#include <stdio.h>
int main(){
	int num;

	int count = 0;

	printf("Enter a positive integer: ");

	scanf("%d", &num);

	for(int i = 1; i <= num; i++){

		count += i;
	}

	printf("Sum of natural numbers up to %d is: %d\n", num, count);
	return 0;
}

