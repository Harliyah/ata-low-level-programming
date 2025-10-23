#include <stdio.h>
int main(){
	int leap;
	printf("Enter a year: ");
	scanf("%d", &leap);
	if( leap == 0){
		printf("Year 0 is not a leap year.\n");
	}
	else if( leap % 4 == 0 && ( leap % 100 != 0 || leap % 400 ==0))
	{
		printf("%d is a leap year.\n", leap);
	}
	else{
		printf("%d is not a leap year.\n", leap);
	}


}
