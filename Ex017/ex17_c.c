/*Given a natural number in the binary base, transform it to the decimal base. Example:
Given 10010 the output will be 18, because 1.24 + 0.23 + 0.22 + 1.21 + 0.20 = 18.*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void){
	long long int bin,cpbin		;
	int i=0, dec=0;
	printf("Enter a binary number to display it in decimal form: \n");
	scanf("%lld",&bin);
	cpbin=bin;
	while(bin){
		dec+=(bin%10)*pow(2,i);
		bin/=10;
		i++;
	};
	printf("Binary number %lld corresponds to number %d in decimal\n",cpbin,dec);
	system("Pause");
	return(0);	
}


//For this code it is necessary to execute the following code: gcc ex17_c.c -o ex17_c -lm  