#include <stdio.h>
#include <stdlib.h>

int main() {
    
    int ano_nascimento, ano_atual, ano_2050, idade;
    
    printf("Digite o ano que você nasceu: \n");
    scanf("%i", &ano_nascimento);
    printf("Agora, digite o ano que nós estamos: \n");
    scanf("%i", &ano_atual);
    
    system("clear");
    
    idade = ano_atual - ano_nascimento;
    ano_2050 = 2050 - ano_nascimento;
    
    printf("Sua idade é: %i anos\n", idade);
    printf("Sua idade em 2050 vai ser de: %i anos", ano_2050);
    
    return 0;   
}    
