#include <stdio.h>
#include <stdlib.h>
int main(int argc, char** argv) {
	float prestacao, valor, taxa;
	int tempo;
	printf ("Informe o valor original da presta��o ");
	scanf ("%f", &valor);
	printf ("Informe a taxa de atraso ");
	scanf ("%f", &taxa);
	printf ("Informe tempo de atraso ");
	scanf ("%d", &tempo);
	prestacao=valor+((valor*taxa/100)*tempo);
	printf ("O valor atual da presta��o � %f", prestacao);
	return 0;
}
