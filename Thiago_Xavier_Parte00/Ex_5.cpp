#include <stdio.h>
#include <stdlib.h>
int main(int argc, char** argv) {
	int a, b, c;
	printf ("Digite o primeiro n�mero: ");
	scanf ("%d", &a);
	printf ("Digite o segundo n�mero: ");
	scanf ("%d", &b);
	printf ("Digite o terceiro n�mero: ");
	scanf ("%d", &c);
	printf ("\nA soma dos n�meros � %d", a+b+c);
	printf ("\nO produto dos n�meros � %d", a*b*c);
	printf ("\nA m�dia dos n�meros � %d", (a+b+c)/3);
	return 0;
	
}
