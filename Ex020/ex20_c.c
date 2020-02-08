//Given three numbers, print them in ascending order.
#include <stdio.h>
#include <stdlib.h>

int main(void){
	double n1,n2,n3;
	printf("Enter three numbers so that they are displayed in ascending order: \n");
	scanf("%lf %lf %lf",&n1,&n2,&n3);
	if((n1==n2)||(n1==n3)||(n2==n3)) printf("The same number.Try again with different numbers\n");
	else{
	if((n1>n2)&&(n1>n3)){
		if(n2>n3) printf("Ascending order is %lf > %lf > %lf \n",n1,n2,n3);
		else printf("Ascending order is %lf > %lf > %lf \n",n1,n3,n2);

	}
	else if((n2>n1)&&(n2>n3)){
		if(n1>n3) printf("Ascending order is %lf > %lf > %lf \n",n2,n1,n3);
		else printf("Ascending order is %lf > %lf > %lf \n",n2,n3,n1);
	}
	else{
		if(n1>n2) printf("Ascending order is %lf > %lf > %lf \n",n3,n1,n2);
		else printf("Ascending order is %lf > %lf > %lf \n",n3,n2,n1);
	};
};
	system("Pause");
	return(0);
}