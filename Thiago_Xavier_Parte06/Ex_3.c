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

//a � o valor atribu�do para a
//pa � o endere�o para onde o ponteiro *pa aponta
//&a � o endere�o onde foi armazenada a vari�vel a 
//*pa � o valor para o qual o ponteiro pa aponta
//b � o valor de sa�da da vari�vel b
//&b � o endere�o onde foi armazenada a vari�vel b.

