#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int perfeito (int num){
	int i, perfeito=0;
	for (i=1; i<num; i++){
		if (num%i==0){		
		perfeito=perfeito+i;
	}
}
		if (perfeito==num){
			return 1; //true
		}else{
			return 0; //false
		}
		
}
int main() {
	int num;
	setlocale (LC_ALL, "portuguese");
	printf ("Digite o valor desejado: ");
	scanf ("%d", &num);
	if (perfeito(num)==1){
		printf ("\nO n�mero %d � perfeito",num);
	}else{
		printf ("\n%d n�o � um n�mero perfeito",num);
	}
	
	return 0;
}
