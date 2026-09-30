#include <stdio.h>
#include <stdlib.h>

int main() {
    
    int A[6];   
    
    
    for (int c = 0; c < 6; c++) {
        printf("Digite o %dº valor: ", c + 1);
        scanf("%d", &A[c]);
    }
    system("clear");
    
    for (int c = 0; c < 6; c++) {
        printf("[%d] ", A[c]);
    }
    return 0;
}