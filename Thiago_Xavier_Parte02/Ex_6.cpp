#include <stdio.h>

int main()
{
    int i, id, soma_id, cont_id, cont_a;
    float a, soma_a;
    cont_id=0;
    cont_a=0;
    soma_id=0;
    soma_a=0;
    a=0;
    id=0;
    for (i=1; i<=45; i++)
    {
    printf("\nDigite a idade do aluno ", i);
    scanf ("%d", &id);
    printf ("Digite a altura do aluno ", i);
    scanf ("%f", &a);
    
    if (a<170)
    {
    soma_id=soma_id+id;
    cont_id=cont_id+1;
    }
    
    if (id>20)
    {
    soma_a=soma_a+a;
    cont_a=cont_a+1;
    }
    }
    printf ("\nA média das alturas do aluno menores que 1,70 é %f", soma_a/cont_a);
    printf ("\nA média das idades dos alunos maiores de 20 anos é %d", soma_id/cont_id);
    return 0;
}

