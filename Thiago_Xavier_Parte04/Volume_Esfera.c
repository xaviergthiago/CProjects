#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

	float vol_esf (float r){
	float v;
	v=pow(r, 3)*4/3*M_PI;
	printf ("O volume da esfera é %f", v);
	return (v);
	}
int main(int argc, char *argv[]) {
	float r;
	printf ("Digite o raio da esfera ");
	scanf ("%f", &r);
	vol_esf (r);
	return 0;
}
