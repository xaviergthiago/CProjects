#include <stdio.h>
#include <stdlib.h>
void ajuste (float atual, float percentual, float *ajustado){
	*ajustado = atual + ((atual) * ((percentual)/100));
//	printf ("O valor ajustado � %f", *ajustado);
}
int main (){
float a, p, aj;
printf ("Digite o valor do sal�rio atual ");
scanf ("%f", &a);
printf ("Digite o percentual de ajuste ");
scanf ("%f", &p);

ajuste (a, p, &aj);

printf ("O valor ajustado � %f", aj);

return (0);
}
