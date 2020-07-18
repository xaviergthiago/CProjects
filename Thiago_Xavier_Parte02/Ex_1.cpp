#include <stdio.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	float x1, x2, y1, y2, area;
	printf ("Escreva o valor de x1 ");
	scanf ("%f", &x1);
	printf ("Escreva o valor de x2 ");
	scanf ("%f", &x2);
	printf ("Escreva o valor de y1 ");
	scanf ("%f", &y1);
	printf ("Escreva o valor de y2 ");
	scanf ("%f", &y2);
	area=(y2-y1)*(x2-x1);
	area=abs(area);
	printf ("A área do retângulo é %f ", area);
	return 0;
}
