#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main () {
    
    float velocidade_max, velocidade_veiculo;
    float percentual;
    char infracao[20];
    
    printf("Digite a velocidade máxima desta via: \n");
    scanf("%f", &velocidade_max);
    printf("Digite a velocidade do veículo: \n");
    scanf("%f", &velocidade_veiculo);
    
    system("clear");
    
    if (velocidade_veiculo <= velocidade_max) {
        printf("Não houve infração, a velocidade está dentro limite!\n");
    } else if (velocidade_veiculo > velocidade_max && velocidade_veiculo <= (velocidade_max * 1.2)) {
        strcpy(infracao, "Média");
    } else if (velocidade_veiculo > (velocidade_max * 1.2) && velocidade_veiculo <= (velocidade_max * 1.5)) {
        strcpy(infracao, "Grave");
    } else {
        strcpy(infracao, "Gravíssima");
    }
    
    if (velocidade_veiculo > 120) {
        printf("ALERTA: VELOCIDADE EXTREMAMENTE ELEVADA!\n");
    }
    
    printf("O limite da via é: %.0fKm/h\n", velocidade_max);
    printf("A velocidade registrada é: %.0fKm/h\n", velocidade_veiculo);
    if (velocidade_veiculo > velocidade_max) {
        percentual = ((velocidade_veiculo - velocidade_max) / velocidade_max) * 100;
        printf("A velocidade excedeu o limite em: %.0f%\n", percentual);
        printf("A infração é: %s\n", infracao);
    }
        
    return 0;
}