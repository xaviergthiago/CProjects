#include <stdio.h>
#include <stdlib.h>
int main(int argc, char** argv)
{
    float conta, total;
    printf("Valor da conta: ");
    scanf ("%f", &conta);
    total=1.1*conta;
    printf ("Total � de: %6.2f", total);
    return 0;
}
