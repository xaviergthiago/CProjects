#include <stdio.h>
#include <stdlib.h>

void func (double n1, double n2, char simb){
	double eq;
	
	if (simb == '+'){
		eq = n1 + n2;		
	}else if (simb == '-' ){
		eq = n1 - n2;
	}else if (simb == '/'){
		eq = n1 / n2;
	}else {
		eq = n1 * n2;
	}
	printf("%.2lf", eq);
}

int main() {
	double n1, n2;
	char simb;
	
	printf ("Digite + , - , / , * : ");
	scanf("%c", &simb);
		
	printf ("Digite um numero: ");
	scanf("%lf", &n1);
	
	printf ("Digite outro numero: ");
	scanf ("%lf", &n2);
	
	
	func(n1, n2, simb);
		
	return 0;
}
