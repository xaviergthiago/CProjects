#include <stdio.h>
#include <stdlib.h>

int i;

struct dados{
	char nome[40];
	int idade;
	float a1;
	float a2;
	float a3;
	float a4;
	float a5;
};

int main() {
	
	struct dados aluno[90];{
		for (i=0; i<90; i++){
		
		printf ("\nDigite o nome do aluno ");
		scanf ("%s", &aluno[i].nome);
		
		printf ("Digite a idade do aluno ");
		scanf ("%d", &aluno[i].idade);
		
		printf ("Digite a nota 1 ");
		scanf ("%f", &aluno[i].a1);
		
		printf ("Digite a nota 2 ");
		scanf ("%f", &aluno[i].a2);
		
		printf ("Digite a nota 3 ");
		scanf ("%f", &aluno[i].a3);
		
		printf ("Digite a nota 4 ");
		scanf ("%f", &aluno[i].a4);
		
		printf ("Digite a nota 5 ");
		scanf ("%f", &aluno[i].a5);
	}
	};
	
	for (i=0; i<90; i++){
	if ((aluno[i].a5>=5) && (aluno[i].a4>=5) && (aluno[i].a3>=5) && (aluno[i].a2>=5) && (aluno[i].a1>=5))
	printf ("\nAluno %s \tAprovado ", aluno[i].nome);
	else
	printf ("\nAluno %s \tReprovado ", aluno[i].nome);
}
	return 0;
}
