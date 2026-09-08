
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int main()
{
    int numero;
    
    printf("Digite um valor inteiro: \n");
    scanf("%d", &numero);
    
    system("clear");
    
    if (numero % 2 == 0) {
        numero = numero + 5;
        printf("O valor é %d e é PAR!\n", numero);
    } else {
        numero = numero + 8;
        printf("O valor é %d e é ÍMPAR!\n", numero);
    } 
        
    
    return 0;
}