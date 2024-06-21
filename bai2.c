#include <stdio.h>
#include <math.h>
int checkSquare(int n);
int main(){
	int n;
	printf("\nEnter n: ");
	scanf("%d", &n);
	if(checkSquare(n)){
		printf("\n%d is square", n);
	}else{
		printf("\n%d is not square", n);
	}
}
int checkSquare(int n){
	return (int)sqrt(n) - sqrt(n) == 0 ? 1 : 0; 
}
