#include <stdio.h>
#include <stdlib.h>

int main() {
    
    int n1, n2, n3, n4, soma;
    
    printf("Digite o primeiro valor: \n");
    scanf("%i", &n1);
    printf("Digite o segundo valor: \n");
    scanf("%i", &n2);
    printf("Digite o terceiro valor: \n");
    scanf("%i", &n3);
    printf("Digite o quarto valor: \n");
    scanf("%i", &n4);
    
    system("clear");
    
    soma = n1 + n2 + n3 + n4;
    
    printf("A soma dos quatro valores é: %i", soma);
    return 0;   
}    
