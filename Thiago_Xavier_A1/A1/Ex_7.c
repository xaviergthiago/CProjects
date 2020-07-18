#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
float triangulo (float b, float a){
	float area;
	area=(b*a)/2;
	printf ("A área do triângulo é %5.2f ", area);
	return (area);
}

int main(int argc, char *argv[]) {
	float a, b;
	setlocale (LC_ALL, "portuguese");
	printf ("Digite o valor da base ");
	scanf ("%f", &b);
	printf ("Digite o valor da altura ");
	scanf ("%f", &a);
	triangulo (a, b);
	return 0;
}
