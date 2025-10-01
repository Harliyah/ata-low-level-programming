#include <stdio.h>
int main(){
	double principal;
	double rate;
	float time;
	double si;
	printf("Enter principal: ");
	scanf("%lf", &principal);
	printf("Enter rate: ");
	scanf("%lf", &rate);
	printf("Enter time (in years): ");
	scanf("%f", &time);
	si = (principal * rate * time)/100;
	printf("Simple Interest = %.2f \n", si);
}
