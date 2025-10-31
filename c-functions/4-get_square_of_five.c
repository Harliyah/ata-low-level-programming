#include <stdio.h>
#include <math.h>
int get_square_of_five(){
	int square = (int)pow(5, 2);
	return square;
}
int main(void){
	int result = get_square_of_five();
	printf("Square of 5 is: %d\n", result);
}
