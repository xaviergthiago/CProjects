#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int i;
int main(void) {
	struct dados{
	char nome[40];
	int idade;
	};
	

struct dados registro[100];{
	for (i=0; i<100; i++){
	printf ("Digite o nome da pessoa ");
	scanf ("%s", &registro[i].nome);
	printf ("Digite a idade da pessoa ");
	scanf ("%d", &registro[i].idade);
}
};

	int maior_idade=0;
	int menor_idade=0;
	char mais_velho[40];
	char mais_novo[40];
	for (i=0; i<100; i++){
		if (registro[i].idade>=maior_idade){
		maior_idade=registro[i].idade;
		strcpy (mais_velho, registro[i].nome);
		}
		
		if (registro[i].idade<=menor_idade){
		menor_idade=registro[i].idade;
		strcpy (mais_novo, registro[i].nome);
		}
	}
	
	printf ("\nA pessoa com menos idade é %s", mais_novo);
	printf ("\nA pessoa com mais idade é %s", mais_velho);
	
	
	return 0;
}


