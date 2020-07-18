#include <stdio.h>
#include <stdlib.h>
int main(int argc, char** argv) {
	float vm, tempo, distancia, litros;
	printf ("Informe tempo de viagem em horas ");
	scanf ("%f", &tempo);
	printf ("Informe velocidade média em km/h ");
	scanf ("%f", &vm);
	distancia=vm*tempo;
	litros=distancia/12;
	printf ("\nA velocidade média em km/h foi %f", vm);
	printf ("\nO tempo de viagem em horas foi %f", tempo);
	printf ("\nA distância percorrida em km foi %f", distancia);
	printf ("\nA quantidade de litros utilizada foi %f", litros);
	
}
	
