/*Develop an algorithm that from a given n, is able to obtain the nth values
Fibonacci Sequence. Below are the first terms of this sequence.
{1,1,2,3,5,8,13,21,34,55, ...}.*/
#include <stdio.h>
#include <stdlib.h>

int main(void){
	int n, a=0,b=1,aux;
	printf("Enter the number of the Fibonacci Sequence you want to view: \n");
	scanf("%d",&n);
	if(n>=0){
		if((n==0)||(n==1)) printf("The %dth term is equal 1\n",n);
		else{
			for(int i=2;i<=n;i++){
				aux = a+b;
				a=b;
				b=aux;
			};
			printf("The %dth term is equal %d\n",n,aux);
		};
	}
	else printf("Error!Enter a positive number...\n");
	system("Pause");
	return(0);
}