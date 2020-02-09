/*Given a sequence of any n integers. Find the biggest and the smallest
value of that sequence.*/
#include <stdio.h>
#include <stdlib.h>


int main(void){
	int length,i,seq[50]={NULL},biggest,smallest; 
	printf("================== Find the biggest and the smallest value ==================\n");
	printf("Enter the number of terms you want to add to the sequence (the limit is 50): \n");
	scanf("%d",&length);
	for(i=1;i<=length;i++){
		printf("Enter the %dth number for the sequence: \n",i);
		scanf("%d",&seq[i-1]);
	};
	biggest=smallest=seq[0];
	for(i=0;i<length;i++){
		if(biggest<seq[i]) biggest=seq[i];
		if(smallest>seq[i]) smallest=seq[i];
	};
	printf("The smallest is %d and th biggest is %d \n",smallest,biggest);
	system("Pause");
	return(0);
}