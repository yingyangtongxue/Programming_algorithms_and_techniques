/*Given a sequence of n any integers that represent the temperatures
daily averages in a given period, determine the arithmetic average of the temperature in the
same period.*/
#include <stdio.h>
#include <stdlib.h>



int main(void){
	int count=0;
	float temp, average=0.0,sum=0.0;
	printf("Enter the number of terms that will be used for computing the arithmetic average: \n");
	scanf("%d",&count);
	for (int i = 1; i <= count; ++i){
		printf("Enter the %dth temperature: \n",i);
		scanf("%f",&temp);
		sum+=temp; 
	};
	average=sum/(float)count;
	printf("sum equal %.2f \n",sum);
	printf("The arithmetic average is equal %.2f \n",average);
	system("Pause");
	return(0);
}