#include <stdio.h>
#include <stdlib.h>
int main(int argc, char** argv) {
	int n;
	printf ("Digite um número: ");
	scanf ("%d", &n);
	printf ("\n O antecessor é %d", n-1);
	printf ("\n O sucessor é %d", n+1);
	return 0;
	
}

