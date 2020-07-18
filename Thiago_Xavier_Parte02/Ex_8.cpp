#include <stdio.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	char nome[40];
	float n1, n2, n3, media;
	printf ("Digite o nome ");
	scanf ("%s", &nome);
	printf ("Digite a primeira nota ");
	scanf ("%f", &n1);
	printf ("Digite a segunda nota ");
	scanf ("%f", &n2);
	printf ("Digite a terceira nota ");
	scanf ("%f", &n3);
	
	media=(n1+n2+n3)/3;
	
	if (media>=7)
	printf ("O aluno %c foi aprovado com média %f ", nome, media);
	else
	printf ("O aluno %c não foi aprovado e sua média é %f ", nome, media);
	return 0;
}
