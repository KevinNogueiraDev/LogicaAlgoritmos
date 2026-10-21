#include <stdio.h>

float maior(float a, float b) {
    float maior;
    if (a > b) 
        maior = a;
    else 
        maior = b;
        
    return maior;    
}

int main()
{
    float n1, n2;
    
    printf("Digite o 1º valor: ");
    scanf("%f", &n1);
    
    printf("Digite o 2º valor: ");
    scanf("%f", &n2);
    
    
    printf("O maior valor é: %.2f", maior(n1, n2));
    
    return 0;
}