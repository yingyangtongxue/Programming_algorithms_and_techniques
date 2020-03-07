#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void Random_array(int *p, int size){
	srand(time(NULL));
	for (int i = 0; i < size-1; ++i){
		*(p+i)=rand()%100;
	}
}

void Print_array(int *p, int size){
	for (int i = 0; i < size-1; ++i){
		printf("%d\n",*(p+i));
	}
}

void Bubble_sort(int *p, int size){
	int i,j,aux;
	for(i=0;i<size-1;i++){
		for(j=size-1;j>i;j--){
			if(*(p+j-1)>*(p+j)){
				aux=*(p+j-1);
				*(p+j-1)=*(p+j);
				*(p+j)=aux;
			}
		}
	}
}

int main(void){
	int array[100],size;
	do{
		printf("Type the array's size between 1 and 100:\n");
		scanf("%d",&size);
	}while((size<0)&&(size>100));
	printf("The array is: \n");
	Random_array(array,size);
	Print_array(array,size);
	printf("The ordered array by Bubble Sort is: \n");
	Bubble_sort(array,size);
	Print_array(array,size);
	system("Pause");
	return(0);
}