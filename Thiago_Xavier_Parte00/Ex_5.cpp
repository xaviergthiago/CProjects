#include <stdio.h>
#include <stdlib.h>
int main(int argc, char** argv) {
	int a, b, c;
	printf ("Digite o primeiro número: ");
	scanf ("%d", &a);
	printf ("Digite o segundo número: ");
	scanf ("%d", &b);
	printf ("Digite o terceiro número: ");
	scanf ("%d", &c);
	printf ("\nA soma dos números é %d", a+b+c);
	printf ("\nO produto dos números é %d", a*b*c);
	printf ("\nA média dos números é %d", (a+b+c)/3);
	return 0;
	
}
