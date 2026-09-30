#include <stdio.h>
#include <stdlib.h>

int main() {
    
    int A[10];   
    int maior = 0, menor = 0;
    
    
    for (int c = 0; c < 10; c++) {
        printf("Digite o %dº valor do vetor: ", c + 1);
        scanf("%d", &A[c]);
        if (A[c] > maior) {
            maior = A[c];
            if (menor == 0) {
                menor = A[c];
            }
        } else if (A[c] < menor) {
            menor = A[c];    
        }
    }
    
    system("clear");
    
    printf("O maior valor do vetor é: %d\n", maior);
    printf("O menor valor do vetor é: %d", menor);
    
    return 0;
}