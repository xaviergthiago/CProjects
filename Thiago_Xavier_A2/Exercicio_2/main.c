#include <stdlib.h>
#include <stdio.h>


void func (int num){
	int x, m=0;
	char r = '!';
	while (m<=num){
		for (x=0;x<m;x++){
			printf("%c", r);
		}
		printf ("\n");
		m++;
	}
}
int main (){
	int num;
	printf("Digite um numero inteiro positivo: ");
	scanf ("%d", &num);
	func (num);
	return 0;
}
