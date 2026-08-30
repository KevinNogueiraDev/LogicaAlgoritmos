#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    
    int n1, n2, resultado1 = 0, resultado2 = 0;
    
    printf("Digite um número inteiro e maior que 0: \n");
    scanf("%i", &n1);
    printf("Digite um número inteiro e maior que 0: \n");
    scanf("%i", &n2);
    
    system("clear");
    
    resultado1 = n1;
    for (int c = 1; c < n2; c++) {
        resultado1 = resultado1 * n1;
    }
    
    resultado2 = n2;
    for (int c = 1; c < n1; c++) {
        resultado2 = resultado2 * n2;
    }
    
    printf("O valor de %i elevado a %i é: %i\n", n1, n2, resultado1);
    printf("O valor de %i elevado a %i é: %i\n", n2, n1, resultado2);
    
    return 0;   
}    
