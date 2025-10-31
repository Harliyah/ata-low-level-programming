#include <stdio.h>
void double_value(int *num);
int main(){
	int num;
	printf("Enter an integer: ");
	scanf("%d", &num);
	printf("Original value: %d\n", num);
	double_value(&num);
	printf("Doubled value: %d\n", num);

}
void double_value(int *num){
	*num = *num * 2;

}
