#include <stdio.h>
#include <ctype.h>
int main(){
	long long int num;
	printf("Enter an integer: ");
	int result = scanf("%lld", &num);
	if(result == 1){
		if(num > 0){
			printf("%lld is a positive number.\n", num);
		}
		else if (num < 0){
			printf("%lld is a negative number.\n", num);
		}
 		else{
			printf("%lld is zero. \n", num);
		}
	}
	else{
		printf("This is not an integer.\n");
		return 1;
		        
	}
}
