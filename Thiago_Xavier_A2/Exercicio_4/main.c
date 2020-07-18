#include<stdio.h>

int imprime(int x,float vetor[]){
	int i;
	for(i=0;i<x;i++){
		printf("%.2f\t",vetor[i]);
	}
	return 0;
}

int inverso(int x, float vetor[]){
	int i;
	for(i=x-1;i>=0;i--){
	printf("%.2f\t",vetor[i]);
	}
	return 0;
}

float media(int x, float vetor[]){
	int i, acm=0;
	for(i=0;i<x;i++){
		acm= acm + vetor[i];
	}
	return acm/i;
}

int main(void){

	int x;	
	printf("Qual o tamanho do vetor?\t");
	scanf("%d",&x);
	float vetor[x];
	int i;
	
	
	
	for(i=0;i<x;i++){
		printf("\nDigite um numero:\t");
		scanf("%f",&vetor[i]);
	}
	
	printf("\n\n*********Impressao dos valores*****************\n\n");
	imprime(x,vetor);
	
	printf("\n\n*********Impressao dos valores invertidos*****************\n\n");
	inverso(x,vetor);
	
	printf("\n\n*********Impressao da Media dos valores*****************\n\n");
	printf("%.2f",media(x,vetor));
}
