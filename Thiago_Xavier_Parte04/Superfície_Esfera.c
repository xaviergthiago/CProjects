#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

float sup_esf (float r){
	float a;
	a=4*M_PI*r*r;
	printf ("%f", a);
	return (a);}
int main(int argc, char *argv[]) {
	float r;
	printf ("Digite o raio da esfera ");
	scanf ("%f", &r);
	sup_esf (r);
	
	return 0;
}
