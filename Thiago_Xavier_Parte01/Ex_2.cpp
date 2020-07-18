#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	float quilos;
	int gramas, gramas2;
	printf ("Digite o valor de seu peso ");
	scanf ("%f", &quilos);
	gramas=quilos*1000;
	gramas2=1.08*gramas;
	printf ("Seu peso em gramas é %d e passará a ser %d , caso engorde oito por cento do seu peso atual. ", gramas, gramas2);
	return 0;
}
