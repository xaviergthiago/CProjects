#include <stdio.h>
#include <stdlib.h>
int main(int argc, char** argv) {
	float a, r, v;
	printf ("Digite a altura da lata de �leo: ");
	scanf ("%f", &a);
	printf ("Digite o raio da lata de �leo: ");
	scanf ("%f", &r);
	v=3.1415*r*r*a;
	printf ("O volume da lata �: %f", v);
	return 0;
	
}
