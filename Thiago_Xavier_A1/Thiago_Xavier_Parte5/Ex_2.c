#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void opera (float a, float b, float c, float *d, float *e){
	(*d) = a + b + c;
	(*e) = a * b * c;
}

int main(int argc, char *argv[]) {
	float m, n, p, x, y;
	printf ("Digite o primeiro valor ");
	scanf ("%f", &m);
	printf ("Digite o segundo valor ");
	scanf ("%f", &n);
	printf ("Digite o terceiro valor ");
	scanf ("%f", &p);
	
	opera (m, n, p, &x, &y);
	
	printf ("A soma é %f ", x);
	printf ("O produto é %f ", y);
	
	return 0;
}
