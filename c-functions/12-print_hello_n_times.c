#include <stdio.h>
void print_message_n_times(int n){
	if(n <0){
		printf("Values has to be positive\n");
	}
	else{
	for(int i = 1; i<=n; i++){
		printf("Hello from function!\n");
	}
	}
}
int main(){
	int a;
	printf("Enter a number of times: ");
	scanf("%d", &a);
	print_message_n_times(a);
}
