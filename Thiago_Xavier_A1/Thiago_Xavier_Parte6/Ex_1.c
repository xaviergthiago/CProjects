#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void func(int *px, int *py)
{
	px=py;
	*py=(*py)*(*px);
	*px=*px+2;

//printf ("Endereço de x %x\n", px);
//printf ("Endereço de y %x\n", py);
}

void main(void) 
{
int x, y;
scanf ("%d", &x); /*3*/
scanf ("%d", &y); /*4*/
func(&x, &y);
printf("x=%d, y=%d \n", x, y);
//printf("*px=%x, *py=%x \n", &x, &y);
}
