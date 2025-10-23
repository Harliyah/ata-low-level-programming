#include <stdio.h>
int main(){
	int firstnum;
	int secondnum;
	int thirdnum;
	printf("Enter three integers: ");
	scanf("%d %d %d", &firstnum, &secondnum, &thirdnum);
	if(firstnum == secondnum && secondnum == thirdnum){
	  printf("The numbers are equal.\n");
	}
	else if(firstnum >= secondnum && firstnum >= thirdnum)
	{
	  printf("%d is the largest number.\n", firstnum);
	}
	else if(secondnum >= firstnum && secondnum >= thirdnum)
	{
	  printf("%d is the largest number.\n",secondnum);
	}
	else
	{
	    printf("%d is the largest number.\n", thirdnum);
	}

}
