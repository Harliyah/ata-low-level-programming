#include <stdio.h>
int main(){
	char name[50];
	printf("Enter your name: ");
	fgets(name, sizeof(name), stdin);
	name[strcspn(name,"\n")] = '\0';
	printf("Hello, %s", name);
}
