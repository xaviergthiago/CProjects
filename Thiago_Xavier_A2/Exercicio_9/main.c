#include<stdio.h>
#include<stdlib.h>

int main(void){
	int *p;
	int i;
	
	p=(int *)malloc(5*sizeof(int));// letra a
	
	for(i=0;i<5;i++){
		printf("\nDigite o %d numero:\t",i+1); // letra b
		scanf("%d",&p[i]);
	}
	
	for(i=0;i<5;i++){
		printf("\n %d",p[i]); // letra c
	}
	
	free(p); // letra d
}
