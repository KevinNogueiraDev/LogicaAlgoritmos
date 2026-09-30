#include <stdio.h>

int main() {
    
    int n1, n2, soma, mult, sub;
    float divi;
    
    printf("Digite o 1º número: ");
    scanf("%d", &n1);
    
    printf("Digite o 2º número: ");
    scanf("%d", &n2);
    
    soma = n1 + n2;
    mult = n1 * n2;
    divi = (float) n1 / n2;
    sub = n1 - n2;
    
    printf("A soma é: %d\n", soma);
    printf("A subtração é: %d\n", sub);
    printf("A multiplicação é: %d\n", mult);
    printf("A divisão é: %.2f", divi);
    
    return 0;
}