#include <stdio.h>
int main(){
	int choice;
	float radius;
	float area;
	float length;
	float width;
	float base;
	float height;
	do{
		printf("Menu:\n1. Calculate Area of Circle\n2. Calculate Area of Rectangle\n3. Calculate Area of Triangle\n4. Exit\n");
		printf("Enter your choice: ");
		scanf("%d", &choice);
		if( choice == 1){
			//Circle
			while(1){
				printf("Enter the radius of the circle: ");
				scanf("%f", &radius);
				if(radius < 0){
				printf("Radius cannot be negative. Please enter a positive value.\n");
				continue;
				}
				else{
				area = 3.1416*radius *radius;
				printf("Area of Circle = %.2f\n", area);
				break;
				}
			}
		}
		else if(choice == 2){
			//Rectangle
			while(1){
				printf("Enter the length of the rectangle: ");
				scanf("%f", &length);
				if(length <= 0){
				printf("Dimensions cannot be zero or negative. Please enter positive values.\n");
				continue;
				}
				while(1){
					printf("Enter the width of the rectangle: ");
					scanf("%f", &width);
					if( width <= 0){
					printf("Dimensions cannot be zero or negative. Please enter positive values.\n");
					continue;
					}
					 else{                                                                                                        break;                                                                                       }
				}
				area = length * width;
				printf("Area of Rectangle = %.2f\n", area);
				break;
			}
		}
		else if(choice == 3){
			//Triangle
			while(1){
				printf("Enter the base of the triangle: ");
				scanf("%f", &base);
				if(base<= 0){
				printf("Dimensions cannot be zero or negative. Please enter positive values.\n");
				continue;
				}
				while(1){
					printf("Enter the height of the triangle: ");
					scanf("%f", &height);
			        	if(height <= 0){
					printf("Dimensions cannot be zero or negative. Please enter positive values.\n");
					continue;
					}
					else{
						break;
					}
				}
					area = (base * height) /2;
					printf("Area of Triangle = %.2f\n", area);
					break;		
			}
		}
		else if(choice ==  4){
			//Exit
			printf("Exiting program.\n");

		}
		else{
			printf("Invalid choice. Please enter a number between 1 and 4.\n");
		}
	}
	while(choice != 4);
}
