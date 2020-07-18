#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int func (int n){
	int i, div=0;
	for (i = 1; i <= n; i++){
		if (n % i==0){
		div++;	
		}
	}
	if (div == 2){
		return 1;
	  }
	  else {
	    return 0;
	  }
}

int main (){
	int num;
	setlocale (LC_ALL, "portuguese");
	printf ("Informe um valor: ");
	scanf ("%d", &num);
	if (num<0){
		printf ("Número negativo. Informe um valor positivo.");
	}
	else {
		if (func(num)==1){
			printf ("\nnúmero primo");
		}
		else {
			printf ("Não é primo");
		}
	}
}
