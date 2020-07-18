#include <stdio.h>
#include <stdlib.h>
int main(int argc, char** argv) {
	float salbrut, qsalmin;
	char nome[40];
	printf ("Digite o nome do funcionário: ");
	scanf ("%s", &nome[40]);
	printf ("Digite o valor do salário bruto: ");
	scanf ("%f", &salbrut);
	qsalmin=salbrut/998;
	printf ("O funcionário recebe %f", qsalmin);
	printf ("salários mínimos");
	return 0;
	
}
