#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argc, char *argv[]){
	char op;
	int num1, num2, result;
	if(argc != 4){
		printf("Usage: ./calc <number1> <operator> <number2>\n");
		return 1;
	}
	op = argv[2][0];
	if(strlen(argv[2]) != 1){
		printf("Error: Invalid operator. Use '+' or '-'.\n");
		return 1;
	}
	if(op != '+' && op != '-'){
		printf("Error: Invalid operator. Use '+' or '-'.\n");
		return 1;
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	switch(op){
		case '+':
			result = num1+  num2;
			break;
		case '-':
			result = num1- num2;
			break;
		}
	printf("Result: %d\n", result);
	return 0;
}
