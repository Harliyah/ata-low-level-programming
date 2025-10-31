#include <stdio.h>
int find_max(int a, int b){
	if(a>b){
		return a;
	}
	else if(b>a){
		return b;
	}
	else{ return a;}
}
int main(){
	int a, b, result;
	printf("Enter the first integer: ");
	scanf("%d", &a);
	printf("Enter the second integer: ");
	scanf("%d", &b);
	result = find_max(a, b);
	printf("Maximum number is: %d\n", result);
}
