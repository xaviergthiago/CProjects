#include <stdio.h>
#include <math.h>

double volumeCilindro(double raio, double altura){
	return (M_PI*pow(raio,2)*altura);
}
double areaCirculo(double raio){
	return (M_PI*pow(raio, 2));
}
int main () {
	double raio, altura;
	printf ("\nDigite o raio: ");
	scanf ("%lf", &raio);
	printf ("\nDigite a altura: ");
	scanf ("%lf", &altura);
	printf ("\nA área é:%.2lf", areaCirculo (raio));
	printf ("\nO volume é:%.2lf", volumeCilindro (raio, altura));
	return 0;
}
