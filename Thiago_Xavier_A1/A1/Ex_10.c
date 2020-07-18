#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int x; 
	double vet1[10], vet2[10], vet3[10];
	
	for (x = 0; x < 10; x++ ){
		printf("\n Vetor 1 na posicao %i = ", x + 1);
		scanf("%d", &vet1[x]);
	}
		
	for (x = 0; x < 10; x++ ){
		printf("\n Vetor 2 na posicao %i = ", x + 1);
		scanf("%d", &vet2[x]);		
	}
	
	for (x = 0; x < 10; x++){
		vet3[x] = vet2[x] + vet1[x];
		printf("\n Posicao %i = Vet1 %d   Vet2 %d   Vet3 %d  ", x + 1, vet1[x], vet2[x], vet3[x]);
		
	}
	
	return 0;
}
