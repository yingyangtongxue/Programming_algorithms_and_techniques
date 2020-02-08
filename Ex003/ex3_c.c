/*Given n, print the first n odd numbers.*/
#include <stdio.h>
#include <stdlib.h>

int main(void){
	int n;
	printf("Enter an n to print the first n odd numbers: \n");
	scanf("%d",&n);
	for (int i = 0; i < n; ++i){
		if(i%2!=0) printf("Number %d \n", i);
	};
	system("Pause");
	return(0);
}