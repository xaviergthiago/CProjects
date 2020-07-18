#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main(void) {
	struct aluno{
		char nome[40];
		float nota;
	};
	
	struct aluno resultado[100];
	int i;
	for (i=0; i<100; i++){
	printf ("\nNome do aluno \n");
	fflush (stdin);
	fgets (resultado[i].nome, 40, stdin);
	printf ("Nota do aluno \n");
	scanf ("%f", &resultado[i].nota);
}

	printf ("\nOs alunos que obtiveram nota maior ou igual a 5.0 foram\n");
	
	for (i=0; i<100; i++){
		if (resultado[i].nota>=5){
	printf ("\nAluno %s", resultado[i].nome);
	printf ("Nota %.2f \n", resultado[i].nota);
	}
}
	getch();
	return 0;
}


