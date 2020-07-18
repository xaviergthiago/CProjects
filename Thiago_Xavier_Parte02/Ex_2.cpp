#include <stdio.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	float n1, n2, n3, media;
	printf ("Escreva a primeira nota ");
	scanf ("%f", &n1);
	printf ("Escreva a segunda nota ");
	scanf ("%f", &n2);
	printf ("Escreva a terceira nota ");
	scanf ("%f", &n3);
	media=(n1+n2+n3)/3;
	if (media>=6)
	printf ("Aprovado");
	else
	{if (media<6 && media>=4)
	printf ("Recuperação");
	else
	printf ("Reprovado");
	}
	return 0;
}
