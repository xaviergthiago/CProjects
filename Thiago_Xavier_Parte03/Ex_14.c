#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float mat[3][3], vet[3];
	int l, c, i;
	for (l=0; l<3; l++){
		for (c=0; c<3; c++){
			printf ("Digite o valor [%d, %d]: ", l+1, c+1);
			scanf ("%f", &mat[l][c]);
			{for (i=0; i<3; i++)
			if (l==c)
			vet[i]=mat[l][c];
			}
		}
	}
	printf ("\n");
	for (l=0; l<3; l++){
		for (c=0; c<3; c++){
			printf ("%5.2f\t", mat[l][c]);
		}
		printf ("\n");
	}
	printf ("\n");
	for (i=0; i<3; i++)
	printf ("%5.2f\t", vet[i]);
	return 0;
}
