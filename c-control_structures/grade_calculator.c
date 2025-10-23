#include <stdio.h>
int main(){
	int score;
	printf("Enter your score (0-100): ");
	scanf("%d", &score);
	if(score >= 0 && score <= 45){
		printf("Your grade is F \n");
	}
	else if(score >= 46 && score <= 60){
		printf("Your grade is D \n");
	}
	else if(score >= 61  && score <= 84){
		printf("Your grade is C \n");
	}
	else if(score >= 85 && score <= 94){
		printf("Your grade is B \n");
	}
	else if(score >= 95 && score <= 100){
		printf("Your grade is A \n");
	}
	else if(score > 100){
		printf("'Your grade is A' or other clear error handling for out-of-range input.\n");
	}
	else{
		printf("'Your grade is F' or other clear error handling for out-of-range input.\n");
	}
			        
}
