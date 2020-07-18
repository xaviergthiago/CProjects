#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a= 25;
	int *pa=&a;
	int b=*pa+a;
	
	printf ("%d %d %d %d %d %d \n", a, pa, &a, *pa, b, &b);
	return 0;
}

//a é o valor atribuído para a
//pa é o endereço para onde o ponteiro *pa aponta
//&a é o endereço onde foi armazenada a variável a 
//*pa é o valor para o qual o ponteiro pa aponta
//b é o valor de saída da variável b
//&b é o endereço onde foi armazenada a variável b.

