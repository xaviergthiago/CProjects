#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float mat[5][5];
	float somal3, somac3, dp, ds, somatot;
	int l, c;
	somal3=0;
	somac3=0;
	dp=0;
	ds=0;
	somatot=0;
	for (l=0; l<5; l++){
		for (c=0; c<5; c++){
			printf ("Digite o valor [%d, %d]: ", l+1, c+1);
			scanf ("%f", &mat[l][c]);
			if (l==2){
			somal3=somal3+mat[l][c];				
			}
			if (c==3){
			somac3=somac3+mat[l][c];
			}
			if (l==c){
			dp=dp+mat[l][c];
			}
			
			if (l+c==4){
				ds=ds+mat[l][c];
			}
			
			somatot=somatot+mat[l][c];
		}
	}
	for (l=0; l<5; l++){
		for (c=0; c<5; c++){
			printf ("%5.2f", mat[l][c]);
		}
		printf ("\n");
	}
	printf ("\nSoma da linha 3 %5.2f: ", somal3);
	printf ("\nSoma da coluna 4 %5.2f: ", somac3);
	printf ("\nSoma da diagonal principal %5.2f: ", dp);
	printf ("\nSoma da diagonal secundária %5.2f: ", ds);
	printf ("\nSoma de todos os elementos %5.2f: ", somatot);
	return 0;
}
