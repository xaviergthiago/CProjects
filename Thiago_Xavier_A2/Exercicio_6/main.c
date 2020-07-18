#include<stdio.h>

int main(void){
	float vet[10];
	int i;
	
	for(i=0;i<10;i++){
		vet[i]= i*2;
		printf("Enderco %d = %u\n",(i+1),vet[i]);
	}
}
