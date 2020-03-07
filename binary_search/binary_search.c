#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void Random_array(int *p, int length){
	srand(time(NULL));
	for(int i=0; i<length;i++){
		*(p+i)= rand()%1000;
	}
}
void Print_array(int *p, int length){
	for (int i = 0; i < length; ++i){
		printf(" %d \n", *(p+i));
	}
}

void Bubble_sort(int *p, int length){
	int i,j, aux;
	for (i = 0; i < length-1; i++){
		for (j=length-1; j>i; --j){
			if(*(p+j-1)>*(p+j)){
				aux=*(p+j-1);
				*(p+j-1)=*(p+j);
				*(p+j)=aux;	
			}
		}
	}
}


short int Binary_search(int *p, int length, int key){
	int i,begin, midle, end;
	begin=0;
	end=length-1;
	while(begin<=end){
		midle = (begin+end)/2;
		if(key<*(p+midle)){
			end=midle-1;
		}
		else{
			if(key>*(p+midle)){
				begin=midle+1;
			}
			else{
					return midle; 
			}	
		}
	}
	return -1;
}

int main(void){
	int array[100],teste,length,key;
	do{
		printf("Type the array's length between 1 and 100: \n");
		scanf("%d",&length);
	}while((length<0)&&(length>100));

	Random_array(array,length);
	printf("The array is: \n");
	Print_array(array,length);
	printf("The ordered array by Bubble Sort is: \n");
	Bubble_sort(array,length);
	Print_array(array,length);
	printf("Type a number for binary search: \n");
	scanf("%d",&key);
	if(key>0){
		teste=Binary_search(array,length,key);
		if(teste!=-1){
			printf("The number was founded\n");
		}
		else{
			printf("The number wasn't founded\n");
		}
	} 
	else printf("Try with another number\n");

}
