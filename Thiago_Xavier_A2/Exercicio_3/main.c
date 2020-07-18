#include<stdio.h>

float Fat(float N){
	if(N==0) return (1);
	else return ((1/N)*Fat(N-1));
}

int main(void){
	float num;
	printf("Numero:\t");
	scanf("%f",&num);
	printf("Numero:\t %f",Fat(num));
}
