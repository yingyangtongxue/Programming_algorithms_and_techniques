/*Given three natural numbers, check that they form the sides of a right triangle.*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main(void){
	int a, b, c, side;
	printf("============= The Pythagorean Theorem =============\n");
	printf("Type the three sides of the triangle to find out if it forms a right triangle or not: \n");
	scanf("%d",&a); scanf("%d",&b); scanf("%d",&c);
	//scanf(" %d %d %d ", &a, &b, &c);
	printf("%d %d %d \n",a,b,c );
	if((a<0)||(b<0)||(c<0)){
		printf("Error!Only positive intengers\n");
	}
	else if((a==b)||(a==c)||(b==c)){
			printf("It's not a right triangle\n");
	}
	else {
		side=sqrt((a*a)+(b*b));
		if(side==c) printf("It's a right triangle\n");
		else printf("It's not a right triangle\n");
	}
	system("Pause");
	return(0);
}