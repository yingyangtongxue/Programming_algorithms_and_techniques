/*Given a positive integer n, find the reverse number of n.
Example: if n = 12345, then the number searched for is 54321.*/
#include <stdio.h>
#include <stdlib.h>

int main(void){
	int num,cpnum,pot=1,rev=0;
	printf("Enter an integer so that its reverse is displayed: \n");
	scanf("%d", &num);
	cpnum=num;
	while(num){
		rev*=10;
		rev+=(num%10);
		num/=10;
	};
	printf("The reverse of the number %d is %d\n",cpnum,rev);
	system("Pause");
	return(0);
}