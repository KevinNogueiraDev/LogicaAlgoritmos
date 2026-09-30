#include <stdio.h>
#include <stdlib.h>

int main() {
    
    int A[10];   
    int B[10];
    
    
    for (int c = 0; c < 10; c++) {
        printf("Digite o %dº valor do conjunto: ", c + 1);
        scanf("%d", &A[c]);
        B[c] = A[c] * A[c];
    }
    
    system("clear");
    
    for (int c = 0; c < 10; c++) {
        printf("[%d] ", A[c]);
    }
    
    printf("\n");
    for (int c = 0; c < 10; c++) {
        printf("[%d] ", B[c]);
    }
    return 0;
}