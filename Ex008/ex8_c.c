//Given a positive integer n, determine the factorial of n, which we denote by n! 
#include <stdio.h>
#include <stdlib.h>

int main(void){
	int n,i,fact=1;
	printf("Enter a number to calculate your factorial: \n");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		fact*=i;
	};
	printf("The factorial of %d is equal %d\n",n,fact);
	system("Pause");
	return(0);
}