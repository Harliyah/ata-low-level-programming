#include <stdio.h>
int main(){
	int num;
	int result;
	printf("Enter an integer: ");
	scanf("%d", &num);
	printf("Multiplication table of %d \n", num);
	for(int i = 1; i <= 10; i++){
		result = num * i;
		printf("%d x %d = %d \n", num, i, result);
	}

}
