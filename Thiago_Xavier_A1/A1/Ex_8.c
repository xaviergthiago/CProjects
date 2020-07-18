#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <ctype.h>

float novoSalario(float nS, char cat){
	if (cat=='A'){
		return (nS*0.1)+nS;
	}else if(cat=='B'){
		return (nS*0.12)+nS;
	}else if(cat=='C'){
		return (nS*0.13)+nS;
	}else if(cat=='D'){
		return (nS*0.15)+nS;
	}
}

int main() {
	setlocale(LC_ALL,"portuguese");
	float salario, novo_salario;
	char categoria;
	printf("Digite o salario: ");
	scanf("%f", &salario);
	printf ("Digite a categoria do aumento: ");
	scanf ("%s",&categoria);
	categoria=toupper(categoria);
	switch (categoria){
		case 'A':{
			printf ("\nSal�rio antigo: %.2f",salario);
			printf ("\nNovo sal�rio: %.2f",novoSalario(salario,categoria));
			break;
			}
		case 'B':{
			printf ("\nSal�rio antigo: %.2f",salario);
			printf ("\nNovo sal�rio: %.2f",novoSalario(salario,categoria));
			break;
		}
		case 'C':{
			printf ("\nSal�rio antigo: %.2f",salario);
			printf ("\nNovo sal�rio: %.2f",novoSalario(salario,categoria));
			break;
		}
		case 'D':{
			printf ("\nSal�rio antigo: %.2f",salario);
			printf ("\nNovo sal�rio: %.2f",novoSalario(salario,categoria));
			break;
		} default:
			printf ("\nOp��o inv�lida.");			
	}
	return 0;
}
