#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	float n;
	printf ("Escreva um número ");
	scanf ("%f", &n);
	
	if (n<=10)
	printf ("F1");
	else{
		if (n>10 && n<=100)
		printf ("F2");
		else
		printf ("F3");
	}
	
	return 0;
}
