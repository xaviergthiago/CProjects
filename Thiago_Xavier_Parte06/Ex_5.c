#include <stdio.h>
#include <stdlib.h>

char situacao (float p1, float p2, float p3, int faltas, int aulas, float *media){
	char sit;
	*media=(p1+p2+p3)/3;
	printf ("\n%.2f", *media);
	
	if (faltas<=0.25*aulas){
		if ((*media)>=6){
		sit='A';
		printf ("\n%c", sit);}
		else{
		sit='R';
		printf ("\n%c", sit);}
	}
	else{
	sit='F';
	printf ("\n%c", sit);}
	
	return 0;
}

int main(int argc, char *argv[]) {
	float a1, a2, a3, m;
	int f, a;
	char st;
	
	printf ("Digite o valor da 1ª avaliação ");
	scanf ("%f", &a1);
	
	printf ("Digite o valor da 2ª avaliação ");
	scanf ("%f", &a2);
	
	printf ("Digite o valor da 3ª avaliação ");
	scanf ("%f", &a3);
	
	printf ("Digite o número de faltas ");
	scanf ("%d", &f);
	
	printf ("Digite o número de aulas ");
	scanf ("%d", &a);
	
	situacao (a1, a2, a3, f, a, &m);
	
	return 0;
}
