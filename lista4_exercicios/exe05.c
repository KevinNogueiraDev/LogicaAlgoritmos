#include <stdio.h>
#include <stdlib.h>

int main() {
    
    int A[10];   
    int pares = 0;
    
    
    for (int c = 0; c < 10; c++) {
        printf("Digite o %dº valor do vetor: ", c + 1);
        scanf("%d", &A[c]);
        if (A[c] % 2 == 0) {
            pares += 1;
        }
    }
    
    system("clear");
    
    printf("O total de números pares é: %d", pares);
    
    return 0;
}