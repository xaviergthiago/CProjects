#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	float A, B, C;
	printf ("Digite um valor para A ");
	scanf ("%f", &A);
	printf ("Digite um valor para B ");
	scanf ("%f", &B);
	C=A;
	A=B;
	B=C;
	printf ("O valor de A é %f e o valor de B é %f ", A, B);
	return 0;
}
