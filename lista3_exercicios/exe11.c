#include <stdio.h>

int main() {
    
    int idade;
    
    printf("Digite sua idade: ");
    scanf("%d", &idade);
    
    if (idade >= 18) {
        printf("Você é MAIOR DE IDADE!");
    }
    else {
        printf("Você é MENOR DE IDADE!");
    }

    return 0;
}