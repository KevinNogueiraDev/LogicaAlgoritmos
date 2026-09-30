#include <stdio.h>
#include <stdlib.h>

int main() {

    float totLitros, precoLitro, totPreco, desconto;

    printf("==============POSTO DE GASOLINA=============\n");
    printf("Digite quantos litros foram abastecidos: \n");
    scanf("%f", &totLitros);
    printf("Digite o preço do litro: \n");
    scanf("%f", &precoLitro);
    
    totPreco = totLitros * precoLitro;
    
    if (totLitros < 20) {
        printf("TOTAL não excedido! SEM DESCONTO!\n");
    } else if (totLitros >= 20 && totLitros <= 40) {
        desconto = totPreco * 0.03;
        printf("Total excedido! 3 porcento de DESCONTO!\n");
    } else {
        desconto = totPreco * 0.05;
        printf("Total excedido! 5 porcento de DESCONTO!\n");
    } 
    printf("Valor bruto: %.2f\n", totPreco);
    printf("Desconto: %.2f\n", desconto);
    totPreco = totPreco - desconto;
    printf("Valor final: %.2f\n", totPreco);

    return 0;
}