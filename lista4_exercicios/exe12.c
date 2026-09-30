#include <stdio.h>
#include <stdlib.h>

int main() {
    
    float n[5];
    float maior = 0, menor = 0, soma = 0, media;
    
    for (int c = 0; c < 5; c++) {
        printf("Digite o %dº valor do vetor: ", c + 1);
        scanf("%f", &n[c]);
        
        if (n[c] > maior) {
            maior = n[c];
            if (menor == 0) {
                menor = n[c];
            }
        } else if (n[c] < menor) {
            menor = n[c];
        }
            
        soma += n[c];
    }
    
    media = soma / 5;
    
    system("clear");
    
    printf("VALORES DO VETOR:\n");
    for (int c = 0; c < 5; c++) {
        printf("[%.0f] ", n[c]);
    }
    
    printf("\nO maior valor é: %.0f\n", maior);
    printf("O menor valor é: %.0f\n", menor);
    printf("A média dos valores é: %.0f", media);
    
    return 0;
}