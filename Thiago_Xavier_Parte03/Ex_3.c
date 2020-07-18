#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float s[20], p[20];
	float A;
	int i;
	for (i=0; i<20; i++){
	printf ("Digite o %d valor desejado ", i+1);	
	scanf ("%f", &s[i]);
	}
	
	printf ("Digite o valor que deseja multiplicar pelo vetor ");
	scanf ("%f", &A);
	
	for (i=0; i<20; i++){
	p[i]=A*s[i];
	printf ("\nO produro de A pelo vetor é %f ", p[i]);
	}

	return 0;
}
