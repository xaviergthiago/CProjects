#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
	float deposito, taxa_juros, rendimento, valor_total;
	int numero_meses;
	printf ("Informe valor depositado ");
	scanf ("%f", &deposito);
	printf ("Informe taxa de juros ");
	scanf ("%f", &taxa_juros);
	printf ("Informe tempo de investimento em meses ");
	scanf ("%d", &numero_meses);
	valor_total=deposito*(taxa_juros/100)*numero_meses;
	rendimento=valor_total-deposito;
	printf ("\nO rendimento � de %f", rendimento);
	printf ("\nO valor total atualizado � de %f", valor_total);
	
	return 0;
}
