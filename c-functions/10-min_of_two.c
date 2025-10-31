#include <stdio.h>
int find_min(int a, int b){
	if(a<b){
		return a;
	}
	if( b<a){
		return b;
	}
	else{return a;}
}
int main(){
	int a, b, result;
	printf("Enter the first integer: \n");
	scanf("%d", &a);
	printf("Enter the second integer: \n");
	scanf("%d", &b);
	result = find_min(a, b);
	printf("Minimum number is: %d\n", result);
}
