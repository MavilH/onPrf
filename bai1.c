#include <stdio.h>
#include <math.h>
float area(float radius);
const float PI = 3.14159;
int main(){
	float radius;
	printf("\nEnter radius: ");
	scanf("%f", &radius);
	if(area(radius) == - 1){
		printf("\nInvalid radius!!");
	}else{
		printf("\nArea: %f", area(radius));
	}
}
float area(float radius){
	return radius >= 0? pow(radius, 2.0) * PI : -1;
}
