#include <stdio.h>
void print_number(int num){
	printf("The number is: %d\n",num );
}
int main(){
	int num;
	printf("Enter a number: ");
	scanf("%d", &num);
	print_number(num);
}
