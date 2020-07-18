#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	float real, dolar, cd;
	printf ("Escreva o valor em reais e pressione ENTER ");
	scanf ("%f", &real);
	printf ("Escreva a cotação do dólar e pressione ENTER ");
	scanf ("%f", &cd);
	dolar=real/cd;
	printf ("O valor em dólar é de %.2f", dolar);
	return 0;
}
