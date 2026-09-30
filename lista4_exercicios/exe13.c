#include <stdio.h>
#include <stdlib.h>

int main() {
    
    float n[5];
    float maior = 0, menor = 0;
    int posicaoMaior, posicaoMenor;
    
    for (int c = 0; c < 5; c++) {
        printf("Digite o %dº valor do vetor: ", c + 1);
        scanf("%f", &n[c]);
        
        if (n[c] > maior) {
            maior = n[c];
            posicaoMaior = c;
            if (menor == 0) {
                menor = n[c];
                posicaoMenor = c;
            }
        } else if (n[c] < menor) {
            menor = n[c];
            posicaoMenor = c;
        }
    }
    
    system("clear");
    
    printf("VALORES DO VETOR:\n");
    for (int c = 0; c < 5; c++) {
        printf("[%.0f] ", n[c]);
    }
    
    printf("\nA posição do MAIOR valor é: n[%d]\n", posicaoMaior);
    printf("A posição do MENOR valor é: n[%d]", posicaoMenor);
    
    return 0;
}