#include <stdio.h>
#include <stdlib.h>

int main() {
    
    float preco_fabrica, percentual, percentual_imposto,
    lucro_distribuidor, impostos_fabrica, valor_final;
    
    printf("Digite o valor de fábrica do carro: \n");
    scanf("%f", &preco_fabrica);
    printf("Digite o valor do percentual do lucro do distribuidor: \n");
    scanf("%f", &percentual);
    printf("Digite o valor do percentual dos impostos do preço de fábrica: \n");
    scanf("%f", &percentual_imposto);
    
    system("clear");
    
    impostos_fabrica = (preco_fabrica * percentual_imposto)/100;
    lucro_distribuidor = (preco_fabrica * percentual)/100;
    valor_final = preco_fabrica + lucro_distribuidor + impostos_fabrica;
    
    printf("O lucro do distribuidor é de: %.2f\n", lucro_distribuidor);
    printf("O valor correspondente aos impostos é de: %.2f\n", impostos_fabrica);
    printf("O valor final do carro é de: %.2f\n", valor_final);
    
    return 0;   
}    
