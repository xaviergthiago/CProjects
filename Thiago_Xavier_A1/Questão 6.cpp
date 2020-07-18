#include <stdio.h>
double media (double n1, double n2, double n3){
double menor, media=0;
    if(n1<=n2 && n1<=n3){
        menor=n1;
        }
    else{
		if (n2<=n3){
        menor=n2;
    }
    	else{
        menor=n3;
		}
    }
	
	media=(n1+n2+n3-menor)/2.0;
    return media;
}
int main(int argc, char *argv[]){
printf ("\n%f", media (5,6,7));
printf ("\n%f", media (6,5,7));
printf ("\n%f", media (7,6,5));
return 0;
}
