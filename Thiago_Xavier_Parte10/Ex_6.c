#include <stdio.h>
#include <stdlib.h>
int main (){
int *p;
int num;
printf("\nDigite o tamanho do vetor-->");
scanf("%d", &num); 
p=(int *)malloc(num*sizeof(int));
if (!p){
printf ("** \n\nErro: Memoria Insuficiente\n\n **");
exit;
}else{
printf ("** \n\nMemoria Alocada com Sucesso\n\n **");
}
return (0);
}

