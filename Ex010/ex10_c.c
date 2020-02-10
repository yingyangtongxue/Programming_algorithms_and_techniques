/*Consider an integer p> 1, check if p is prime.*/
#include <stdio.h>
#include <stdlib.h>


int main(void){
	int num,count=0,i,lim;
	printf("Enter a positive number to find out if it's a prime number or not: \n");
	scanf("%d", &num);
	if(num>0){ 
		lim=num/2;
		for(i=2;i<=lim;i++){
			if(num%i==0){
				count++; 
				break;	
			} 
		};
		if(count!=0 || num==1) printf("The number %d isn't prime\n", num); 
		else printf("The number %d is prime\n", num);
	}
	else printf("Error!Only positive integers\n");
	system("Pause");
	return(0);
}