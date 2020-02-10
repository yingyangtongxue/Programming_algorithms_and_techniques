/*Find all prime numbers between 2 and 20,000.*/
#include <stdio.h>
#include <stdlib.h>
#define LIM 20000

short int Prime(int *p){
	int lim,j,flag=1;
	lim=*p/2;
	for(j=2;j<=lim;j++){
		if(*p%j==0){
			flag=0; 
			break;
		}  
	}
	return flag;
}

int main(void){
	int i,flag,count=0;
	printf("Find all prime numbers between 2 and 20,000: \n");
	printf("The prime numbers are: \n");
	for(i=2;i<=LIM;i++){
		flag=Prime(&i);
		if(flag==1){
			printf("%d \n", i);
			count++;
		} 
		if(count==10){
			system("Pause");
			count=0;
		} 
	}
	system("Pause");
	return(0);
}