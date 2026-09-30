#include <stdio.h>

int main() {
    
    int numero, resultado;
    
    printf("Digite o número desejado para descobrir sua tabuada: ");
    scanf("%d", &numero);
    
    for (int c = 0; c <= 10; c++) {
        resultado = numero * c;
        printf("[%d] x [%d] = %d\n", numero, c, resultado);    
    }
    
    return 0;
}