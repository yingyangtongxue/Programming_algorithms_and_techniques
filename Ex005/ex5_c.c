/*Consider x integer and natural n, calculate power x^n.*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void){
	int n;
	float x;
	printf("Enter an integer for the base: \n");
	scanf("%f",&x);
	printf("Enter a natural number for the exponent: \n");
	scanf("%d",&n);
	printf("The result of %4.f^%d is %f \n",x,n,pow(x,n));
	system("Pause");
	return(0);
}

//For this code it is necessary to execute the following code: gcc ex5_c.c -o ex5_c -lm  