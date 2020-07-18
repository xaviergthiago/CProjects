#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void calcula_hexagono (float l, float *area, float *perimetro){
	*perimetro=6*l;
	*area=0.5*(3*(pow(l, 2))*(sqrt(3)));
	}

int main(int argc, char *argv[]) {
	float lado, A, P;
	
	printf ("Digite o valor de l do hexágono ");
	scanf ("%f", &lado);
	
	calcula_hexagono (lado, &A, &P);
	
	printf ("O hexágono tem área %.2f e perímetro %2.f ", A, P);
	return 0;
}
