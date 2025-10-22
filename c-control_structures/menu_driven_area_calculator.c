#include <stdio.h>
int main(){
	int choice;
	float radius;
	float area;
	float length;
	float width;
	printf("Menu: \n1. Calculate Area of Circle \n2. Calculate Area of Rectangle \n3. Calculate Area of Triangle \n4. Exit \n");
	printf("Enter your choice: ");
	scanf("%d", &choice);
	if( choice == 1){
		printf("Enter the radius of the circle: ");
		scanf("%f", &radius);
		area = 3.1416*radius *radius;
		printf("Area of Circle = %.2f \n", area);
	}
	else if(choice == 2){
		printf("Enter the length of the rectangle: ");
		scanf("%f", &length);
		printf("Enter the width of the rectangle: ");
		scanf("%f", &width);
		area = length * width;
		printf("Area of Rectangle = %.2f \n", area);
	}
	else if(choice == 3){
		printf("Enter the base length: ");
		scanf("%f", &width);
		printf("Enter the height: ");
		scanf("%f", &length);
		area = (width * length) /2;
		printf("Area of Triangle = %.2f \n", area);
	}
	else if(choice ==  4){

	}
	else{
		printf("Invalid option \n");
	}

}
