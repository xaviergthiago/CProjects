#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

 float triangulo (float a, float b, float c){
 	if (a==b && b==c)
 	printf ("O tri�ngulo � equil�tero");
 	if ((a==b && b!=c) || (a!=b && b==c) || (a==c && b!=c) || (a!=c && b==c))
 	printf ("O tri�ngulo � is�sceles");
 	if (a!=b && b!=c && c!=a)
 	printf ("O tri�ngulo � escaleno");
 	return (a, b, c);
 	
 }

int main(int argc, char *argv[]) {
	float a, b, c;
	setlocale (LC_ALL, "portuguese");
	printf ("Digite o valor de a ");
 	scanf ("%f", &a);
 	printf ("Digite o valor de b ");
 	scanf ("%f", &b);
 	printf ("Digite o valor de c ");
 	scanf ("%f", &c);
 	triangulo (a, b, c); 	
	return 0;
}
