#include <stdio.h>
#include <stdlib.h>
int main(int argc, char** argv) {
	float salbrut, qsalmin;
	char nome[40];
	printf ("Digite o nome do funcion�rio: ");
	scanf ("%s", &nome[40]);
	printf ("Digite o valor do sal�rio bruto: ");
	scanf ("%f", &salbrut);
	qsalmin=salbrut/998;
	printf ("O funcion�rio recebe %f", qsalmin);
	printf ("sal�rios m�nimos");
	return 0;
	
}
