#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int i;
int main(void) {

	{struct homem{
		char nome[40];
		int idade;
	};
	
	struct homem dadosh[50];{
		for (i=0; i<50; i++){
			printf ("\nDigite o nome masculino ");
			scanf ("%s", &dadosh[i].nome);
			printf ("Digite a idade ");
			scanf ("%d", &dadosh[i].idade);
		}
}
	printf ("\nOs homens com idade compreendida entre 20 e 40 anos são\n");
	
	for (i=0; i<50; i++){
		if (dadosh[i].idade>=20 && dadosh[i].idade<=40){
			printf ("\nNome %s", dadosh[i].nome);
			printf ("\nIdade %d", dadosh[i].idade);
		}
	}
	
	printf("\n\n---------------------\n\n");
	
}
	{struct mulher{
		char nome[40];
		int idade;
	};
	
	struct mulher dadosm[50];{
		for (i=0; i<50; i++){
		printf ("\nDigite o nome feminino ");
		scanf ("%s", &dadosm[i].nome);
		printf ("Digite a idade ");
		scanf ("%d", &dadosm[i].idade);
	}
}
	printf ("\nAs mulheres com idade compreendida entre 20 e 40 anos são\n");
	
	for (i=0; i<50; i++){
		if (dadosm[i].idade>=20 && dadosm[i].idade<=40){
			printf ("\nNome %s", dadosm[i].nome);
			printf ("\nIdade %d\n", dadosm[i].idade);
		}
}
}
	getch ();
	return 0;
}

