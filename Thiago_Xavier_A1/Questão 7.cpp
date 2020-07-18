#include <stdio.h>

int main () {
	int v1[50];
	int v2[50];
	int mat[2][2];
	int pares_v1=0, impares_v1=0;
	int pares_v2=0, impares_v2=0;
	for (int i=0; i<3; i++){
		printf("Valor da posição [%d] do vetor 1: ", i+1);
		scanf ("%d", &v1[i]);
		printf ("Valor da posição [%d] do vetor 2: ", i+1);
		scanf ("%d", &v2[i]);
		if (v1[i]%2==0) pares_v1++;
		else impares_v1++;
		if (v2[i]%2==0) pares_v2++;
		else impares_v2++;
	}
	mat[0][0]=pares_v1;
	mat[0][1]=impares_v1;
	mat[1][0]=pares_v2;
	mat[1][1]=impares_v2;
	for (int i=0; i<2; i++){
		printf("\n");
		for (int j=0; j<2; j++){
			printf ("\t%d", mat[i][j]);
		}
	}
}
