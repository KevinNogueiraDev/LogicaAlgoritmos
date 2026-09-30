#include <stdio.h>
#include <stdlib.h>

int main() {

    float hrEntrada, hrSaida, totTempo, totValor = 10;
    
    printf("Digite a hora da entrada: \n");
    printf("Um número inteiro! Exemplo: [1] hora, [2] horas...\n");
    scanf("%f", &hrEntrada);
    printf("Digite a hora da saída: \n");
    printf("Um número inteiro! Exemplo: [1] hora, [2] horas...\n");
    scanf("%f", &hrSaida);
    
    system("clear");
    
    if (hrSaida < hrEntrada) {
        totTempo = hrEntrada - hrSaida;
        for (int c = 1; c < totTempo; c++) {
            totValor += 5;
        }
    } else {
        totTempo = hrSaida - hrEntrada;
        for (int c = 1; c < totTempo; c++) {
            totValor += 5;
        }    
    }    
    
    printf("Você ficou %.2f horas aqui!\nAgora deve pagar: R$ %.2f", totTempo, totValor);
    
    return 0;
}