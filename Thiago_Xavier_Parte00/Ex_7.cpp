#include <stdio.h>
#include <stdlib.h>
int main(int argc, char** argv) {
	int a, b, c, d, r, s;
	printf ("Digite o valor de A: ");
	scanf ("%d", &a);
	printf ("Digite o valor de B: ");
	scanf ("%d", &b);
	printf ("Digite o valor de C: ");
	scanf ("%d", &c);
	r=(a+b)*(a+b);
	s=(b+c)*(b+c);
	d=(r+s)/2;
	printf ("O valor de D é: %d", d);
	return 0;
	
}
