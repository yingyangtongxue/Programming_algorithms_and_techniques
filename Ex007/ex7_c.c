/*Given a sequence of n positive integers, determine the sum of the
even numbers, odd numbers and the respective quantities of each of the subsets.*/
#include <stdio.h>
#include <stdlib.h>

int main(void){
	int length,num,even=0,odd=0;
	printf("=============== Odd and Even numbers ===============\n");
	printf("Enter the number of numbers the sequence will have(positive integers): \n");
	scanf("%d",&length);
	for (int i = 1; i <= length; ++i){
		printf("Type the %dth element: \n", i);
		scanf("%d",&num);
		if(num>=0){
			if(num%2==0) even++;
			else odd++;
		}
		else printf("Error!Only positive numbers \n");
	};
	printf("The number of even numbers is %d and the number of odd numbers is %d \n", even,odd);
	system("Pause");
	return(0);
}