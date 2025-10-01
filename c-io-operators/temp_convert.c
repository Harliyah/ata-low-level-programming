#include <stdio.h>
int main(){
	double celsius;
	double farenheit;
	printf("Enter temperature in Celsius: ");
	scanf("%lf", &celsius);
	farenheit = (celsius * 9.0 / 5.0) + 3;
	printf("%.2f Celsius  = %.2f Farenheit\n",celsius, farenheit);
}
