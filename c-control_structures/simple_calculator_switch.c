#include <stdio.h>
int main(){
	float firstnum;
	float secondnum;
	char operator;
	float result;
	printf("Enter two numbers: ");
	scanf("%f", &firstnum);
	scanf("%f", &secondnum);
	printf("Enter an operator (+,-,*,/): ");
	scanf(" %c", &operator); 
	switch(operator){
		case '+':
			result = firstnum + secondnum;
			printf("%.1f + %.1f = %.1f \n", firstnum, secondnum, result);
			break;
		case '-':
			result = firstnum - secondnum;             
			printf("%.1f - %.1f = %.1f \n", firstnum, secondnum, result);           
			break;
		case '*':                                 
			result = firstnum * secondnum;                             
			printf("%.1f * %.1f = %.1f \n", firstnum, secondnum, result);        
			break;
		case '/':                                  
			if(secondnum != 0)
			{
			result = firstnum / secondnum;             
			printf("%.1f /  %.1f = %.1f \n", firstnum, secondnum, result);       
			}
			else{
			printf("Error! Cannot be divided by 0 \n");
			}
			break;
	}
}
