#include <stdio.h>
#include <stdlib.h>

float compara (int n, float *pcomp);

int main (void){
	float num[10];
	float maior_menor;
	int i;
	
	for (i=0; i<10; i++){
	printf ("Digite o valor ");
	scanf ("%f", &num[i]);
	}
	
	maior_menor= compara (10, num);
	
	system ("pause");
	return 0;
}

float compara (int n, float *pcomp){
	int i; 
	float maior=0, menor=0;
	
	for (i=0; i<n; i++){
	if (pcomp[i]>maior)
	maior=pcomp[i];
	if (pcomp[i]<menor)
	menor=pcomp[i];
	}
	
	printf ("O maior valor é %.2f ", maior);
	printf ("O menor valor é %.2f ", menor);
	
	return 0;
}

