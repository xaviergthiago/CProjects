#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void calcula_hexagono (float l, float *area, float *perimetro){
	*perimetro=6*l;
	*area=0.5*(3*(pow(l, 2))*(sqrt(3)));
	}

int main(int argc, char *argv[]) {
	float lado, A, P;
	
	printf ("Digite o valor de l do hex�gono ");
	scanf ("%f", &lado);
	
	calcula_hexagono (lado, &A, &P);
	
	printf ("O hex�gono tem �rea %.2f e per�metro %2.f ", A, P);
	return 0;
}
