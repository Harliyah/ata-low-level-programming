#include <stdio.h>
int main(){
	int digit;
	int counter = 0;
	printf("Enter an integer: ");
	scanf("%d", &digit);
	if(digit < 0){
		digit = -digit;
	}
	do{
		digit /= 10;
		counter++;
	}
	while(digit != 0);
	printf("Number of digits: %d \n", counter);
}
