#include <stdio.h>
int main(){
	int firstnum;
	int secondnum;
	int thirdnum;
	printf("Enter three integers: ");
	scanf("%d", &firstnum);
	scanf("%d", &secondnum);
	scanf("%d", &thirdnum);
	if(firstnum > secondnum && firstnum > thirdnum)
	{
	  printf("%d is the largest number.\n", firstnum);
	}
	else if(secondnum > firstnum && secondnum > thirdnum)
	{
	  printf("%d is the largest number.\n",secondnum);
	}
	else if(thirdnum > firstnum &&  thirdnum > secondnum)
	{
	    printf("%d is the largest number.\n", thirdnum);
	}
	else{
		printf("The numbers are equal.\n");
	}
}
