#include <stdio.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int i, n, m;
	n=0;
	for (i = 197; i <= 457; i++)
	{
	printf ("%d ", i); /*Não é necessário exibir i*/
		
	if (i%6==0)
	n=n+i;
	
	}
	printf ("\nA soma dos múltiplos de 2 e 3 ao mesmo tempo entre 197 e 457 é %d ", n);
	return 0;
}
