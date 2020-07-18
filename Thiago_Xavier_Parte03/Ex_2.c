#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float vetorx[10], vetory[10];
	int i;
	for (i=0; i<10; i++){
	printf ("Digite o %d valor ", i+1);
	scanf ("%f", &vetorx[i]);
	}
	for (i=0; i<10; i++){
    vetory[i]=vetorx[i];
    if (vetorx[i]<0)
	vetory[i]=1;
	printf ("\nPosição %d %f", i+1, vetory[i]);
	}
	
	return 0;
}
