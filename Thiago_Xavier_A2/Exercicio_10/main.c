#include<stdio.h>
#include<stdlib.h>

int main(void){
	int *p;
	int i;
	
	p = (int*)calloc(1500,sizeof(int));
	
	for(i=0;i<1500;i++){
		if(p[i] != 0){
			printf("\n %d nao possui 0");
		}
		p[i]=i;
	}
	printf("\nOs 10 primeiros numeros:\n");
	for(i=0;i<10;i++){
		printf("\n%d",p[i]);
	}	
	printf("\nOs 10 ultimos numeros: \n");
	for(i=1490;i<1500;i++){
		printf("\n%d",p[i]);
	}
}
