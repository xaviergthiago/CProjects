#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int fatorial (int num){
	int i, fat;
	fat=1;
	for (i=1; i<=num; i++)
	fat=fat*i;
	printf ("O fatorial de %d é %d ", num, fat);
	return (num);
}

int main(int argc, char *argv[]) {
	int num;
	setlocale (LC_ALL, "portuguese");
	printf ("Digite o valor desejado ");
	scanf ("%d", &num);
	fatorial (num);
	return 0;
}
