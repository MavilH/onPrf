#include <stdio.h>
#include <math.h>
void inputArray(int array[], int *size);
void outputArray(int array[], int size);
void powArray(int array[], int size);
int main(){
	int array[100], size;
	inputArray(array, &size);
	powArray(array, size);
	outputArray(array, size);
}
void inputArray(int array[], int *size){
	printf("\nEnter size: ");
	scanf("%d", size);
	int i;
	for(i = 0; i <= *size - 1; i++){
		printf("\nInput array[%d]: ", i);
		scanf("%d", &array[i]);
	}
}
void outputArray(int array[], int size){
	int i;
	for(i = 0; i <= size - 1; i++){
		printf("%5d", array[i]);
	}
}
void powArray(int array[], int size){
	int i;
	for(i = 0; i <= size - 1; i++){
		array[i] = pow(array[i], 2);
	}
}
