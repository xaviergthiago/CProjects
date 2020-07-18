
#include <stdio.h>
#include <stdlib.h>

double media (double n1, double n2){
	double med;
	med = (n1 + n2)/2;
	printf ("\n%2.1f\n", med);
	if ( med >= 0, med <= 4.9){
	printf ("Sua media e %.2lf e seu conceito e D.", med);
	}
	else if ( med >= 5, med <= 6.9) {
	printf("Sua media e %.2lf e seu conceito e C.", med);
	}
	else if ( med >= 7, med <= 8.9){
	printf ("Sua media e %.2lf e seu conceito e B.", med);
	}
	else if ( med >= 9, med <= 10){
	printf ("Sua media e %.2lf e seu conceito e A.", med);
	}
	else{
	printf ("Valores digitados invalidos");
	}
	return (med);
}


int main() {
double n1 = 0, n2 = 0;

printf("Digite a primeira nota: ");
scanf("%lf", &n1);

printf("Digite a segunda nota: ");
scanf ("%lf", &n2);

media (n1, n2);

return 0;
}
