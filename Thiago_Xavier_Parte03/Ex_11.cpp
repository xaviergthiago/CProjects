#include <stdio.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int mat[5][10];
	int l, c, maior, menor;
	for (l=0; l<5; l++){
		for (c=0; c<10; c++){
			printf ("Escreva o valor [%d, %d] ", l+1, c+1);
			scanf ("%d", &mat[l][c]);

			if (mat[l][c]>=maior)
			maior=mat[l][c];
      		if (mat[l][c]<=menor)
      menor=mat[l][c];

      }
		}
	
  for (l=0; l<5; l++){
		for (c=0; c<10; c++){
			printf ("%5.2d", mat[l][c]);
		}
		printf ("\n");
	}
	
	printf ("O maior elemento é %d e o menor é %d ", maior, menor);
	return 0;
}
