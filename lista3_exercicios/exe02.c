#include <stdio.h>

int main() {
    
    int n1, n2, soma;
    
    printf("Digite o 1º número: ");
    scanf("%d", &n1);
    
    printf("Digite o 2º número: ");
    scanf("%d", &n2);
    
    printf("1º Número: %d\n", n1);
    printf("2º Número: %d\n", n2);
    
    soma = n1 + n2;
    
    printf("A soma é: %d", soma);
    
    return 0;
}