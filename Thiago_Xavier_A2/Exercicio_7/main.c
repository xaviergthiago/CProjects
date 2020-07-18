#include <stdio.h>
#include <stdlib.h>

int main(void){
	int vetor[5];
	int p1,p2,p3, p4, p5, eq1, eq2, eq3, eq4, eq5;

	p1=(int*)malloc(sizeof(int));
	p2=(int*)malloc(sizeof(int));
	p3=(int*)malloc(sizeof(int));
	p4=(int*)malloc(sizeof(int));
	p5=(int*)malloc(sizeof(int));

	printf("\nDigite um numero: ");
	scanf("%d",&p1);
	printf("\nDigite um numero: ");
	scanf("%d",&p2);
	printf("\nDigite um numero: ");
	scanf("%d",&p3);
	printf("\nDigite um numero: ");
	scanf("%d",&p4);
	printf("\nDigite um numero: ");
	scanf("%d",&p5);
	
	eq1 = p1*2;
	eq2 = p2*2;
	eq3 = p3*2;
	eq4 = p4*2;
	eq5 = p5*2;
	
	
	printf("\n %d\n",eq1);
	printf("\n %d\n",eq2);
	printf("\n %d\n",eq3);
	printf("\n %d\n",eq4);
	printf("\n %d\n",eq5);
					

}
