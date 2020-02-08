/*We say that a natural number n with at least two digits is a palindrome if
the 1st digit of n is equal to its last digit,
the 2nd digit of n is equal to the penultimate digit,
and so on.
Examples:
567765 and 32423 are palindromes, while 567675 is not.
Given a natural number n, n ≥ 10, check if it is a palindrome.*/
#include <stdio.h>
#include <stdlib.h>


int main(void){
	int num, pal=0,cpnum;
	printf("Enter a number so that it can be said whether it is a palindrome or not: \n");
	scanf("%d",&num);
	cpnum=num;
	while(num){
		pal*=10;
		pal+=num%10;
		num/=10;
	};
	if(cpnum==pal) printf("The number %d is palindrome\n",cpnum);
	else printf("The number %d isn't palindrome\n",cpnum);
	system("Pause");
	return(0);
}