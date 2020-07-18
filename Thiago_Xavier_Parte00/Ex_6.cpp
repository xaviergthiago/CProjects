#include <stdio.h>
#include <stdlib.h>
int main(int argc, char** argv) {
	float c;
	printf ("Digite a temperatura em Celsius: ");
	scanf ("%f", &c);
	printf ("A temperatura em Fahrenheit é: %f", (9*c+160)/5);
	return 0;
	
}
