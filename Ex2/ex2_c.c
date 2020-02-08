/*Given n, calculate the sum of the first n natural numbers.*/
#include <stdio.h>
#include <stdlib.h>

int main(void){
	int sum=0, n;
	printf("Enter an n to calculate the sum of the n natural numbers: \n");
	scanf("%d", &n);
	for(int i=0;i<n;i++){
		sum+=i;
	};
	printf("The sum of the %d is %d \n",n,sum);
	system("Pause");
	return(0);
}