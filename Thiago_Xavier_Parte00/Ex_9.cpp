#include <stdio.h>
#include <stdlib.h>
int main(int argc, char** argv) {
	float n1, n2, n3, media;
	printf ("Digite o valor da primeira nota: ");
	scanf ("%f", &n1);
	printf ("Digite o valor da segunda nota: ");
	scanf ("%f", &n2);
	printf ("Digite o valor da terceira nota: ");
	scanf ("%f", &n3);
	media=(2*n1+3*n2+5*n3)/10;
	printf ("A média é: %f", media);
	return 0;
	
}
