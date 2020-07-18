#include <stdio.h>
#include <stdlib.h>

int i;
int somatorio (int n){
	int  s;
	for (i = 1; i <= n; i++){
           s = s + i ;
       }
    printf ("%d", s);
}
	
	int main(void)
   {
   	int num;
   	
   	printf ("Digite um número inteiro positivo ");
   	scanf ("%d", &num);
   	
   	somatorio (num);
   	
    return 0;
   }
