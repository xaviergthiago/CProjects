#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	float r1, r2, r3, rcinverso;
	printf ("Esreva o valor da primeira resit�ncia ");
	scanf ("%f", &r1);
	printf ("Esreva o valor da segunda resit�ncia ");
	scanf ("%f", &r2);
	printf ("Esreva o valor da terceira resit�ncia ");
	scanf ("%f", &r3);
	rcinverso=(1/r1)+(1/r2)+(1/r3);
	printf ("A resist�ncia equivalente do circuito � %f", 1/rcinverso);
	return 0;
}
