/*Given a sequence of natural numbers where the last element is 0 (zero), print
your squares.*/
#include <stdio.h>
#include <stdlib.h>

int main(void){
	int num;
	do{
		printf("Enter a number to see its square(it will stop when the number is zero): \n");
		scanf("%d", &num);
		printf("The square is %d \n", num*num);
	}while(num!=0);
	printf("The last number is zero\n");
	system("Pause");
	return(0);
}