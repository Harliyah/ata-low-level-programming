#include <stdio.h>
int main(){
	FILE *file;
	file = fopen("quote.txt", "w");
	fputs( "The journey of a thousand miles begins with a single step.\n", file);
	fclose(file);
}
