#include <stdio.h>
#include <stdlib.h>

int main() {
	int *p;
	p = (int *) malloc (50*sizeof(int));
	if (p==NULL){
		printf ("Erro: mem�ria insuficiente! \n");
	}
	
	int *p1;
	p1 = (int *) calloc (50, sizeof(int));
	if (p1==NULL){
		printf ("Erro: mem�ria insuficiente! \n");
	}
	
	return 0;
}

