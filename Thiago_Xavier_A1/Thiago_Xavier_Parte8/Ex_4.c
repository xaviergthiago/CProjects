#include <stdio.h>
#include <stdlib.h>

int fibonacci (int num);

int main (void){
	int n, fib;
	printf ("Digite o valor ");
	scanf ("%d", &n);
	
	fib = fibonacci (n);
	
	printf ("O %d valor Fibonacci é %d", n, fib);
	
	getch();
	return 0;

}

int fibonacci (int num){
	if (num==1) return (1);
	else
		if (num==2) return (1);
		else return (fibonacci(num-1)+fibonacci(num-2));
}
	
	


