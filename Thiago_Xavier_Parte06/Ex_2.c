#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a, b, *p1, *p2;
	a=4;
	b=3;
	p1=&a;
	p2=p1;
	*p2=*p1+3;
	b=b*(*p1);
	(*p2)++;
	p1=&b;
	
	printf ("*p1= %d *p2= %d \n", *p1, *p2);
	printf ("a= %d b= %d \n", a, b);
}
