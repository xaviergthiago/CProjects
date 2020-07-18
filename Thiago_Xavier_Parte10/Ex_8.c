#include <stdio.h>
#include <stdlib.h>
int main(void) {
int *p;
int i,k,n;
printf ("\nDigite a quantidade de números :");
fflush(stdin);
scanf ("%d",&i);
p=(int*)malloc(i*sizeof(int));
if (p==NULL)
{
printf ("\nERRO.MEMORIA INSUFICIENTE");
exit(1);
}
for (k=0;k<i;k++) {
printf ("\nDigite o %do valor do vetor: ",k+1);
fflush(stdin);
scanf ("%d",&p[k]);
}
printf ("\n\nVETOR.\n");
for (k=0;k<i;k++) {
printf ("%d\t",p[k]); }
printf ("\n\nSeu vetor possui %d elementos.",i);
printf ("\nDigite um valor positivo para aumentar ao vetor.");
printf ("\nDigite um valor negativo para diminuir do vetor.");
printf ("\n\n-->");
fflush(stdin);
scanf ("%d",&n);
if (!(i+n)) {
printf ("\nSeu vetor possui 0 elementos.\n\n");
free(p);
return 0;
system("pause");
}
else if ((i+n)<0)
{
printf ("\nSeu vetor possui qtd negativa de elementos.\n\nIMPOSSIVEL ALOCAR MEMORIA.\n\n");
free(p);
return 0;
system("pause");
}
p=(int*)(realloc(p,(i+n)*sizeof(int)));
if (p==NULL) {
printf ("\nERRO DE RE-ALOCACAO.MEMORIA INSUFICIENTE");
exit(1);
}
for (k=0;k<(n+i);k++) {
printf ("\nDigite o %do valor do vetor: ",k+1);
fflush(stdin);
scanf ("%d",&p[k]);
}
printf ("\n\nVETOR.\n");
for (k=0;k<(n+i);k++)
printf ("%d\t",p[k]);
free(p); // libera a memória alocada
return 0;
system("pause");
}
