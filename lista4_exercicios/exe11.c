#include <stdio.h>
#include <stdlib.h>

int main() {
    
    float n[10];
    float somaPositivos = 0, quantNegativos = 0;
    
    for (int c = 0; c < 10; c++) {
        printf("Digite o %dº valor do vetor [+ ou -]: ", c + 1);
        scanf("%f", &n[c]);
        
        if (n[c] >= 0) 
            somaPositivos += n[c];
        else 
            quantNegativos += 1;
    }
    
    system("clear");
    
    printf("A soma dos positivos é: %.0f\n", somaPositivos);
    printf("A quantidade de negativos é: %.0f", quantNegativos);
    
    return 0;
}