#include <stdio.h>

int main() {
    
    float valorOriginal, desconto, valorDescontado;
    
    printf("Digite o valor da compra: ");
    scanf("%f", &valorOriginal);
    
    if (valorOriginal <= 100) { 
        printf("O valor original é de: R$ %.2f\n", valorOriginal);
        printf("Por não ultrapassar R$ 100,00 não será concedido descontos!");
    } else if (valorOriginal > 100 && valorOriginal <= 500) {
        desconto = valorOriginal * 0.05;
        valorDescontado = valorOriginal - desconto;
        printf("O valor original é de: R$ %.2f\n", valorOriginal);
        printf("Pelo valor, o cliente tem direito a 5 porcento de desconto!\n");
        printf("Valor descontado: R$ %.2f\n", desconto);
        printf("Valor com desconto: R$ %.2f", valorDescontado);
    } else {
        desconto = valorOriginal * 0.1;
        valorDescontado = valorOriginal - desconto;
        printf("O valor original é de: R$ %.2f\n", valorOriginal);
        printf("Pelo valor, o cliente tem direito a 10 porcento de desconto!\n");
        printf("Valor descontado: R$ %.2f\n", desconto);
        printf("Valor com desconto: R$ %.2f", valorDescontado);
    }    
    return 0;
}