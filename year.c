#include <stdio.h>
#include <time.h>
int main(){
	time_t t = time(&t);
	struct tm *current = localtime(&t);
	int year = current -> tm_year;
	printf("%d\n", year + 1900);
	return 0;

}
