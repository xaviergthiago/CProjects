#include <stdio.h>
#include<stdlib.h>


struct Vetor{
	float x;
	float y;
	float z;
};


void soma(struct Vetor* v1, struct Vetor* v2, struct Vetor* res){
	res->x = v1->x + v2->x;
	res->y = v1->y + v2->y;
	res->z = v1->z + v2->z;
}


int main (void){
	struct Vetor *v1;
	struct Vetor *v2;
	struct Vetor *res;
	v1 = (struct Vetor*)malloc(sizeof(struct Vetor));
	v2 = (struct Vetor*)malloc(sizeof(struct Vetor));
	res = (struct Vetor*)malloc(sizeof(struct Vetor));
	
	printf("\nDigite o valor de x1:\t");
	scanf("%f",&v1->x);
	printf("\nDigite o valor de y1:\t");
	scanf("%f",&v1->y);
	printf("\nDigite o valor de z1:\t");
	scanf("%f",&v1->z);
	printf("\nDigite o valor de x2:\t");
	scanf("%f",&v2->x);
	printf("\nDigite o valor de y2:\t");
	scanf("%f",&v2->y);
	printf("\nDigite o valor de z2:\t");
	scanf("%f",&v2->z);
	soma(v1,v2,res);
	
	printf("\nx:%.2f\ty:%.2f\tz:%.2f\n",res->x,res->y,res->z);
}
