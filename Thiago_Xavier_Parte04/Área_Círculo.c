#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

float area (float r){
	float a;
	a=M_PI*r*r;
	printf ("%f", a);
	return (a);
	}

int main(int argc, char** argv) {
	float r;
	printf ("Digite o valor do raio ");
	scanf ("%f", &r);
	area (r);
	
	return 0;
}
