#include <stdio.h>
#include <conio.h>

double somatorio (int n);
int main(void)
{
  int numero, s;
    
  printf("Digite o numero que deseja calcular o somatório: ");
  scanf("%d", &numero);
  
  s = somatorio (numero);
  
  printf("Somatorio de 1 a %d = %d", numero, s);
  
  getch();
  return 0;
}

double somatorio (int n)
{
  double soma;
  
  if (n==1)
    return (1);
  else
  {
    soma = n + somatorio (n-1);
    return (soma);
  }
}

