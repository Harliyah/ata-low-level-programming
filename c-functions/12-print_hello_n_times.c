#include <stdio.h>
void print_message_n_times(int n){
	if(n > 0){
	for(int i = 1; i<=n; i++){
		printf("Hello from function!\n");
	}
	}
}
int main(){
	int a;
	printf("Enter a number of times: \n");
	scanf("%d", &a);
	print_message_n_times(a);
}
