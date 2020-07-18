#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	float quilos; 
	int gramas, gramas2; /* OBS Variáveis declaradas como inteiro*/
	printf ("Digite o valor de seu peso ");
	scanf ("%f", &quilos);
	gramas=quilos*1000; 
	gramas2=1.08*gramas;
	printf ("Seu peso em gramas é %d e passará a ser %d, caso engorde 8%% do seu peso atual. ", gramas, gramas2); /* OBS Variáveis lidas como inteiro*/
	return 0;
}
