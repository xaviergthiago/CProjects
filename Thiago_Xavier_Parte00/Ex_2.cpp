#include <stdio.h>
#include <stdlib.h>
int main(int argc, char** argv) {
	int n;
	printf ("Digite um n�mero: ");
	scanf ("%d", &n);
	printf ("\n O antecessor � %d", n-1);
	printf ("\n O sucessor � %d", n+1);
	return 0;
	
}

