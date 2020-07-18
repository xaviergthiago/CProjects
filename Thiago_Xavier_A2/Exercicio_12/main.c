#include<stdio.h>
#include<stdlib.h>

struct aluno{
	int matricula;
	char sobrenome[30];
	int anoNascimento;
};


int main(void){
	int tam,i;
	struct aluno *p;
	
	printf("Quantos alunos serao armazenados?\t");
	scanf("%d",&tam);
	
	p = (struct aluno*)malloc(tam * sizeof(struct aluno));
	
	for(i=0;i<tam;i++){
		printf("\nDigite a matricula:\t");
		scanf("%d",&p[i].matricula);
		printf("\nDigite o sobrenome:\t");
		scanf("%s",p[i].sobrenome);
		printf("\nDigite o ano de nascimento:\t");
		scanf("%d",&p[i].anoNascimento);
	}
	
	for(i=0;i<tam;i++){
		printf("\nMatricula: %d",p[i].matricula);
		printf("\nSobrenome: %s",p[i].sobrenome);
		printf("\nAno do nascimento: %d\n",p[i].anoNascimento);
	}
}
