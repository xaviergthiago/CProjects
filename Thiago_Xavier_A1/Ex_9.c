#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i, j, veta[10], vetb[10];
	
	for (i=0; i<10; i++){
		printf ("Digite o %d valor ", i+1);
		scanf ("%d", &veta[i]);
		vetb[i]=1;
	    for (j=1; j<=veta[i]; j++){
	        vetb[i]=vetb[i]*j;
	    }
	}
		
	for (i=0; i<10; i++){
		printf ("\n Posição A%d %d", i+1, veta[i]);
		printf ("\n Posição B%d %d", i+1, vetb[i]);
	}
	
	return 0;
}
