/* Given two positive integers n and k, find the k-th number of n, from right to left */
#include <stdio.h>
#include <stdlib.h>


int main(void){
	int n,k,rev=0,rest=0,i,count=0;
	printf("Enter a positive integer n to find your k-th from left to right: \n");
	scanf("%d", &n);
	printf("Enter a positive integer k: \n");
	scanf("%d", &k);
	while(n){
		count++;
		rev*=10;
		rev+=(n%10);
		n/=10;
	};
	if(k>count){
		printf("Error! Try with other numbers\n");
	}
	else{
		for(i=0;i<k;i++){
			rest=rev%10;
			rev/=10;
		};
		printf("The %dth term from left to right is %d \n", i,rest);
	}
	system("Pause");
	return(0);
}