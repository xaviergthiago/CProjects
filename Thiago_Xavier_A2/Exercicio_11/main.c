#include<stdio.h>
#include<stdlib.h>

int main(void){
	double *p;
	double tam;
	int i;
	
	printf("Quantos numeros deseja armazenar(minimo 10):\t");
	scanf("%f",&tam);

	
	p = (double*)malloc(tam*sizeof(double));
	for(i=0;i<10;i++){
		p[i]= rand() % 100;
	}
	printf("\nOs 10 primeiros elemetos:");
	
	for(i=0;i<10;i++){
		printf("\n%.2f",p[i]);
	}
	
}
