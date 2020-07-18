#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) 
{ 
    int veta[10], vetb[10], vetc[10], vet[30];
    int i;
    
    for (i=0; i<10; i++){
    printf ("%d valor do vetor A ", i+1);
    scanf ("%d", &veta[i]);}
    
    for (i=0; i<10; i++){
    printf ("%d valor do vetor B ", i+1);
    scanf ("%d", &vetb[i]);}
    
    for (i=0; i<10; i++){
    printf ("%d valor do vetor C ", i+1);
    scanf ("%d", &vetc[i]);}
    
    for (i=0; i<10; i++)
    vet[i]=veta[i];
    
	for (i=0; i<10; i++)
	printf ("\n%d", vet[i]);

	for (i=0; i<10; i++)
    vet[i+10]=vetb[i];
    
	for (i=10; i<20; i++)
	printf ("\n%d", vet[i]);
	
	for (i=0; i<10; i++)
    vet[i+20]=vetc[i];
    
	for (i=20; i<30; i++)
	printf ("\n%d", vet[i]);
	
	
    return 0;
}
