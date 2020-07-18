#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float soma, mat[4][4];
	int l, c;
	soma=0;
	for (l=0; l<4; l++){
		for (c=0; c<4; c++){
		printf ("Digite o valor [%d, %d] ", l+1, c+1);
		scanf ("%f", &mat[l][c]);
		if (l>c)
		soma=soma+mat[l][c];
		}
	}
	for (l=0; l<4; l++){
		for (c=0; c<4; c++){
			printf ("\t%5.2f", mat[l][c]);
		}
		printf ("\n");
	}
	printf ("A soma dos elementos abaixo da diagonal principal é %5.2f ", soma);
	return 0;
	
}
