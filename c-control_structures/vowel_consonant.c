#include <stdio.h>
#include <ctype.h>
int main(){
	char letter;
	char letterl;
	printf("Enter a character: ");
	scanf(" %c", &letter);
	if(isdigit(letter)){
		printf("%c is not a letter \n", letter);
	}
	else{
		letterl = tolower(letter);
		if( letterl =='a' || letterl == 'e' || letterl == 'i'|| letterl == 'o' || letterl == 'u')
		{
			printf("'%c' is a vowel \n", letter);
		}
		else{
			printf("'%c' is a consonant \n", letter);
		}
	}
}
