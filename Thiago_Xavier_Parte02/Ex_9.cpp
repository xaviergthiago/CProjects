#include <stdio.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int n, i, maior;
	maior=0;
	for (i=1; i<=3; i++)
	{
	printf ("Escreve um n�mero ");
	scanf ("%d", &n);
	
	if (n>maior)
	maior=n;
	
		}	
	
	printf ("O maior n�mero � %d", maior);
	return 0;
}
