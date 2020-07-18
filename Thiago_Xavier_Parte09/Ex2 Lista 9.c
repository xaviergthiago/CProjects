#include<iostream>
#include <stdio.h>
#include<stdlib.h>
#include <string.h>

#define TAM_MAX 40
#define BUSCA_OK  	 1
#define BUSCA_ERR 	-1
#define ERRO 		-1

void le_linha(char *linha);
void limpa_buffer();
void menu();
void insere();
void retira();
void altera();
void lista_tel();
int busca();

FILE *arq_dados;
int tambytes;

struct agenda{
	char nome(TAM_MAX);
	char tel[9];
}*ag1;

int main(){
	int c;
	tambytes = sizeof(struct agenda);
	ag1 = (struct agenda*) malloc(sizeof(struct agenda));
	if((arq_dados = fopen("dados","a+"))==NULL){
		puts("\nErro ao tentar Abrir Arquivo");
		exit(0);
	}
	
	do{
		menu();
		do{
			printf("Opcao?");
		}while((c=getchar()) < '1' || c > '5');
		getchar();
		switch(c){
			case'1':insere();
					break;
			case '2': retira();
					break;
			case '3': altera();
					break;
			case '4': lista_tel();
					break;
		}
		printf("Digite ENTER p/ continuar");
		getchar();
		system("cls");
	}while(c!= '5');
	fclose(arq_dados);
	return 0;
				
}

void le_linha(char *linha){
	int c;
	while((c = getchar()) != '\n' && c != '\r' && c != EOF)
	*linha++=c;
	*linha='\0';
}

void limpa_buffer()
{
	register int i;
	register char *ptr;
	ptr = (char*)ag1;
	for(i=0;i<tambytes;i++)
	*ptr++ =' ';
}

void menu(){
	printf("Opcaoes:\n");
	printf("1- Inserir\n");
	printf("2- Apagar\n");
	printf("3- Alterar\n");
	printf("4- Lista de Telefones\n");
	printf("5- Sair do Programa\n");
}

void insere()
{
	limpa_buffer();
	printf("Nome:");
	le_linha(ag1->nome);
	printf("Telefone:");
	le_linha(ag1->tel);
	fseek(arq_dados, 0L, 2);
	fwrite (ag1, sizeof(struct agenda),1,arq_dados);
	putchar('\n');
}

void retira(){
	limpa_buffer();
	if(busca() != BUSCA_ERR){
		limpa_buffer();
		fwrite(ag1,sizeof(struct agenda),1,arq_dados);
	}
	putchar('\n');
}

void altera(){
	if(busca() != BUSCA_ERR){
		printf("\nTelefone: %s",ag1->tel);
		printf("\nNovo Telefone:");
		le_linha(ag1->tel);
		fwrite(ag1,sizeof(struct agenda),1,arq_dados);
	}
	putchar('\n');
}

void list_tel(){
	if(busca() != BUSCA_ERR){
		printf("Telefone: %s",ag1->tel);
		putchar('\n');
	}
}

int busca(){
	char nome(TAM_MAX);
	int c;
	printf("Digite o nome:");
	le_linha(nome);
	fseek(arq_dados, 01, 0);
	do{
		c=fread(ag1,1,tambytes,arq_dados);
	}while(strcmp(nome,ag1->nome) != 0 && c != 0);
	if(c==0){
		puts("\nErro: nome inexistente\n\n");
		return (BUSCA_ERRO);
	}
	else{
		fseek(arq_dados, -((long) tambytes),1);
		return(BUSCA_OK);
	}
}


