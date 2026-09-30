#include <stdio.h>
#include <stdlib.h>

int main() {
    
    int A[10];   
    int maior = 0;
    int posicao;
    
    for (int c = 0; c < 10; c++) {
        printf("Digite o %dº valor do vetor: ", c + 1);
        scanf("%d", &A[c]);
        if (A[c] > maior) {
            maior = A[c];
            posicao = c;
        } 
    }
    
    system("clear");
    
    for (int c = 0; c < 10; c++) {
        printf("[%d] ", A[c]);
    }
    printf("\nO maior valor do vetor é: %d\n", maior);
    printf("A posição dele é: A[%d]", posicao);
    
    return 0;
}