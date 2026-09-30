#include <stdio.h>
#include <stdlib.h>

int main() {
    
    int A[] = {1, 0, 5, -2, -5, 7};   
    int soma = 0;
    
    printf("O valores do vetor são: ");
    for (int c = 0; c < 6; c++) {
        if (c == 0 || c == 1 || c == 5) {
            soma += A[c];
        }
        if (c == 4) {
            A[c] = 100;
        }
        printf("\n%d ", A[c]);
    }
    printf("\nA soma entre A[0], A[1] e A[5] = %d", soma);
   
    return 0;
}