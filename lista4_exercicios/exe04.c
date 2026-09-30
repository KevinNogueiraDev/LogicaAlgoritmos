#include <stdio.h>
#include <stdlib.h>

int main() {
    
    int A[8];   
    int c, d, soma;
    
    
    for (int c = 0; c < 8; c++) {
        printf("Digite o %dº valor do conjunto: ", c + 1);
        scanf("%d", &A[c]);
    }
    
    printf("Digite o 1º valor: ");
    scanf("%d", &c);
    
    printf("Digite o 2º valor: ");
    scanf("%d", &d);
    
    system("clear");
    
    soma = A[c] + A[d];
    
    printf("A soma entre o valor do A[%d] = %d e A[%d] = %d = %d", c, A[c], d, A[d], soma);
    
    return 0;
}