#include <stdio.h>
#include <stdlib.h>

int main() {
    
    float peso_saco_racao, quant_racao_gato1, quant_racao_gato2, gasto_diario;
    
    printf("Digite quantos quilos tem o saco de ração: \n");
    scanf("%f", &peso_saco_racao);
    printf("Agora, digite quantas gramas são fornecidas para o 1º gato: \n");
    scanf("%f", &quant_racao_gato1);
    printf("Agora, digite quantas gramas são fornecidas para o 2º gato: \n");
    scanf("%f", &quant_racao_gato2);
    
    system("clear");
    
    quant_racao_gato1 = quant_racao_gato1/1000;
    quant_racao_gato2 = quant_racao_gato2/1000;
    gasto_diario = quant_racao_gato1 + quant_racao_gato2;
    peso_saco_racao = peso_saco_racao - gasto_diario * 5;
    
    printf("Em 5 dias, o saco de ração terá: %.1fkg", peso_saco_racao);
    
    return 0;
}    
