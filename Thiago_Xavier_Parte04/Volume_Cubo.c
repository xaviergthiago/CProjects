#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

	float vol_cubo (float a){
	float v;
	v=pow(a, 3);
	printf ("O volume do cubo é %f", v);
	return (v);}
int main(int argc, char *argv[]) {
	float a;
	printf ("Digite o valor da aresta ");
	scanf ("%f", &a);
	vol_cubo (a);
	return 0;
}
