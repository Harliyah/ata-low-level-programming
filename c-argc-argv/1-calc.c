#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argc, char *argv[]){
	char op = argv[2][0];
	if(strlen(argv[2]) != 1){
			printf("Error: Invalid operator. Use '+' or '-'.\n");
	}
	else if(argc != 4){
		printf("Usage: ./calc <number1> <operator> <number2>\n");
		return 1;
	}
	else{
		if(op != '+' && op != '-'){
			    printf("Error: Invalid operator. Use '+' or '-'.\n");
			    return 1;
		}
		else{
			int num1 = atoi(argv[1]);
			int num2 = atoi(argv[3]);
			int result;
			switch(argv[2][0]){
				case '+':
					result = num1+  num2;
					printf("Result: %d\n", result);
					break;
				case '-':
					result = num1- num2;
					printf("Result: %d\n", result);
					break;
			}
		}
	}
}
