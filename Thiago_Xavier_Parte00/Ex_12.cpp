#include <stdio.h>
#include <stdlib.h>
int main(int argc, char** argv) {
float pol, pes, metro;
    printf("Digite a dist�ncia em metros: ");
    scanf ("%f", &metro);
    pol=metro*0.0254;
    pes=12*pol;
    printf("A dist�ncia em plegadas � %f: ", pol);
    printf("A dist�ncia em pes � %f: ", pes);
    return 0;
    
}
