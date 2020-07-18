#include <stdio.h>
#include <stdlib.h>
int main(int argc, char** argv) {
float pol, pes, metro;
    printf("Digite a distância em metros: ");
    scanf ("%f", &metro);
    pol=metro*0.0254;
    pes=12*pol;
    printf("A distância em plegadas é %f: ", pol);
    printf("A distância em pes é %f: ", pes);
    return 0;
    
}
