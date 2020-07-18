#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int i;
int main(void) {
	struct dados{
	char nome[40];
	int idade;
	};
	

struct dados registro[3];{
	for (i=0; i<3; i++){
	printf ("Digite o nome da pessoa ");
	scanf ("%s", &registro[i].nome);
	printf ("Digite a idade da pessoa ");
	scanf ("%d", &registro[i].idade);
}
};

	int maior_idade=0;
	char nome[40];
	for (i=0; i<3; i++){
		if (registro[i].idade>=maior_idade){
		maior_idade=registro[i].idade;
		strcpy (nome, registro[i].nome);
		}
	}
	
	printf ("A pessoa com mais idade é %s", nome);
	
	return 0;
}


