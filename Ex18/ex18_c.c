//Given a natural number in the decimal base, transform it to the binary base. Example: Given 18 the output should be 10010.
#include <stdio.h>
#include <stdlib.h>


int main(void){
	int dec,cpdec,bin=0,pot=1;
	printf("Enter a decimal number to see its binary form: \n");
	scanf("%d", &dec);
	cpdec=dec;
	while(dec){
		bin+=(dec%2)*pot;
		dec/=2;
		pot*=10;
	};
	printf("The binary form of number %d is equal %d \n",cpdec,bin);
	system("Pause");
	return(0);
}


