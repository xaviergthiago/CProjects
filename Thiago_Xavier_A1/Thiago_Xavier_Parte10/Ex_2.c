#include <stdio.h>
#include <stdlib.h>

int main() {
	int *p;
	p = (int *) malloc (5*sizeof(int));
	if (p==NULL){
		printf ("Erro: mem�ria insuficiente! \n");
		system ("pause");
		exit (1);
	}
	int i;
	for (i=0; i<5; i++){
		printf ("Digite o valor da posi��o %d ", i);
		scanf ("%d", &p[i]);
	}
	return 0;
}
