#include <stdio.h>
#include <math.h>
int main(){
	double radius;
	double  area;
	printf("Input the radius of the circle: ");
	scanf("%lf", &radius);
	area = M_PI * radius * radius;
	printf("The area of the circle is: %.4f\n", area);
}
