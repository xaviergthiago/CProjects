#include <stdio.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int i, n, m;
	n=0;
	for (i = 197; i <= 457; i++)
	{
	printf ("%d ", i); /*N�o � necess�rio exibir i*/
		
	if (i%6==0)
	n=n+i;
	
	}
	printf ("\nA soma dos m�ltiplos de 2 e 3 ao mesmo tempo entre 197 e 457 � %d ", n);
	return 0;
}
