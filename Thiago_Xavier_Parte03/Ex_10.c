#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float mat[2][3];
	int l, c;
	float aux;
	aux=0;
		for (l=0; l<2; l++){
		for (c=0; c<3; c++){
			printf ("Digite o valor desesjado [%d, %d] ", l+1, c+1);
			scanf ("%f", &mat[l][c]);
		}
	}
	printf ("\n");
	for (l=0; l<2; l++){
		for (c=0; c<3; c++){
			printf ("%5.3f ", mat[l][c]);
			aux=aux+mat[l][c];		
		}
		printf ("\n");
	}
	
	printf ("A soma dos elementos da matriz é %f", aux);
	return 0;
}
