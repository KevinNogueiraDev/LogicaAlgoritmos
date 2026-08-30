#include <stdio.h>
#include <stdlib.h>

int main() {
    
    float deposito, juros, rendimento, deposito_rendimento;
    
    printf("Digite o valor do depósito: \n");
    scanf("%f", &deposito);
    printf("Digite o valor da taxa de juros: \n");
    scanf("%f", &juros);
    
    system("clear");
    
    rendimento = (deposito * juros)/100;
    deposito_rendimento = deposito + rendimento;
    
    printf("O valor do rendimento: %.2f \n", rendimento);
    printf("O valor total com o rendimento é de: %.2f", deposito_rendimento);
    
    return 0;   
}    
