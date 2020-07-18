#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double Circulo (double raio){
  double a;
  a=(pow(raio, 2)*M_PI);
  printf ("A área do círculo é %lf", a);
  return (raio);
}

double Cilindro (double raio, double altura){
  double v;
  v=(pow(raio, 2)*M_PI*altura);
  printf ("O volume do cilindro é %lf", v);
  return (raio, altura);
}



int main() {
 double raio, altura;
 
 printf("Digite o raio:  ");
 scanf("%lf", &raio);

 printf ("Digite a altura: " );
 scanf("%lf", &altura);
 
 Circulo (raio);
 Cilindro (raio, altura);

 return 0;
}

