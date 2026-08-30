#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    
    int polegada, pe;
    float jarda, milha;
    
    printf("Digite uma medida em pé(pés/feet): \n");
    scanf("%i", &pe);
    
    system("clear");
    
    polegada = pe * 12;
    jarda = pe/3;
    milha = jarda/1760;
    
    printf("O valor em polegadas é: %i\n", polegada);
    printf("O valor em jardas é: %.2f\n", jarda);
    printf("O valor em milhas é: %.2f\n", milha);
    
    return 0;   
}    
