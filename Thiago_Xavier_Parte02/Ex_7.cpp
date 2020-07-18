#include <stdio.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	float x, somax, contax;
	somax=0;
	contax=0;
	do
	{
	printf ("Informe um número ");
	scanf ("%f", &x);

	somax=somax+x;
	contax=contax+1;
	}
	while (x!=9999);
	
	printf ("A soma dos números é %f ", somax);
	printf ("A média dos números é %f ", somax/contax);
	
	return 0;
}
