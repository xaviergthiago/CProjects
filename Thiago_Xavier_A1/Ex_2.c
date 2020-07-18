#include <stdio.h>
#include <stdlib.h>

double idade (double anos, double meses, double dias){
double dias_total, A, B;
A = (anos * 365.25);
B = (meses * 30.4375);
dias_total = (A + B + dias);
printf("A idade em dias e de: %.2lf ", dias_total);
return (anos, meses, dias);
}

int main() {
 double anos, meses, dias;
 
 printf("Digite quantos quantos anos voce tem:  ");
 scanf("%lf", &anos);

 printf ("Digite quantos meses, apos os anos, voce tem: " );
 scanf("%lf", &meses);

 printf("Digite quantos dias, apos os meses, voce tem: ");
 scanf("%lf", &dias);
 
 idade (anos, meses, dias);
 
 return 0;
}
