#include <stdio.h>
#include <stdlib.h>

int main() {
    
    int valor;
    int A[6];   
    
    for (int c = 0; c < 6; c++) {
        printf("Digite o %dº valor do vetor: \n", c + 1);
        printf("DEVE SER PAR!\n");
        scanf("%d", &valor);
        
        system("clear");
        
        if (valor % 2 == 0) {
            A[c] = valor;
        } else {
            printf("DIGITE UM VALOR PAR!\n");
            c--;
        }
    }
    
    system("clear");
    
    printf("NO INVERSO:\n");
    for (int c = 5; c >= 0; c--) {
        printf("[%d] ", A[c]);
    }
    
    return 0;
}