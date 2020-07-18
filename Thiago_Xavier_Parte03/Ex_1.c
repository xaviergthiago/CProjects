#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a[20];
	int i, j;
	
	for (i=0; i<20; i++){
	printf ("Digite o número ");
	scanf ("%d", &a[i]);}
    
	for (j=20; j>=0; j--){
	printf ("\n %d", a[j]);}
	return 0;
}
