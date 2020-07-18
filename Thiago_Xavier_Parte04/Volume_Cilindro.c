#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

	float volume (float h, float r){
	float v;
	v=M_PI*h*r*r;
	printf ("O volume do cilindro é %f ", v);
	return (v);
	}
int main(int argc, char *argv[]) {
	float h, r;
	printf ("Digite o raio ");
	scanf ("%f", &r);
	printf ("Digite a altura ");
	scanf ("%f", &h);
	volume (h, r);
	return 0;
}
