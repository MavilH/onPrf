#include <stdio.h>
void bubbleSort(int array[], int size);
void inputArray(int array[], int *size);
void outputArray(int array[], int size);
int main(){
	int array[100], size;
	inputArray(array, &size);
	bubbleSort(array, size);
	outputArray(array, size);
}
void bubbleSort(int array[], int size){
	int i, j, tmp;
	for(i = 0; i <= size - 1; i++){
		for(j = size - 1; j > i; j--){
			if(array[j] > array[j - 1]){
				tmp = array[j];
				array[j] = array[j - 1];
				array[j - 1] = tmp;
			}
		}
	}
	
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
