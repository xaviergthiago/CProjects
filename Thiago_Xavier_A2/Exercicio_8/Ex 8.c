#include <stdlib.h>
#include <stdio.h>

void preenche_vetor(int *vet,int n);
void imprime_vetor(int *vet,int n);

int main() {
	int vet[10],n,x;
	printf("Digite um número inteiro: ");
	scanf("%d",&n);
	preenche_vetor(vet,n);
	imprime_vetor(vet,n);
	return 0;
}
void preenche_vetor(int *vet,int n)
{
	int x;
	for(x=0;x<=9;x++)
	{
		*vet=n;
		vet++;
	}
}
void imprime_vetor(int *vet,int n)
{
	int x;
	for(x=0;x<=9;x++)
	{
		printf("\n%d",*vet);
		vet++;
	}
}
