#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int v[16];
	int i;
	
	for (i=0; i<16; i++){
	printf ("Digite o %d valor ", i+1);
	scanf ("\n%d", &v[i]);}
	
	for (i=8; i<16; i++)
	printf ("\n%d", v[i]);

	for (i=0; i<8; i++)
	printf ("\n%d", v[i]);
	
	return 0;
}
