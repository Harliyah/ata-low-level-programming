#include <stdio.h>
void greet_user(char *name);
int main(){
	char a[50];
	printf("Enter your name: ");
	scanf("%[^\n]", a);;
	greet_user(a);
}
void greet_user(char *name){
	printf("Hello, %s! Welcome to the program.\n", name);
}
