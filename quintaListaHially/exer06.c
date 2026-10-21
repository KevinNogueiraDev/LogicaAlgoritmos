#include <stdio.h>

float opcao3(float total, int parcelas) {
    float valorParcela;
    float valorFinal;
    
    valorFinal = total * 1.03;
    valorParcela = valorFinal / parcelas;
    
    return valorParcela;
}

float opcao2(float d) {
    float valorParcela;
    
    valorParcela = d / 2;
    
    return valorParcela;
}

float opcao1(float c) {
    float totalDesconto;
    
    totalDesconto = c * 0.9;
    
    return totalDesconto;
}

int opcoes(float b) {
    int opcao;
    
    printf("== OPÇÔES ==\n");
    printf("1 - A vista com 10 porcento de desconto \n");
    printf("2 - Em 2x (preço sem desconto) \n");
    if (b > 100) {
        printf("3 - De 3x até 10x com 3 porcento de juros ao mês (preço sem desconto) \n");
    }
    printf("Digite a opção desejada: ");
    scanf("%d", &opcao);

    return opcao;
}

float valor() {
    float a;
    
    printf("Digite o total da compra: ");
    scanf("%f", &a);
    
    return a;
}

int main() {
    float totalOriginal;
    int quantParcelas;
    int opcao;
    
    totalOriginal = valor();
    
    opcao = opcoes(totalOriginal);
    
     if (opcao == 3) {
        printf("Digite o número de parcelas: ");
        scanf("%d", &quantParcelas);
    }
    
    switch (opcao) {
        case 1: {
            printf("O valor a vista com 10 porcento de desconto é: R$ %.2f", opcao1(totalOriginal));
            break;
        }
        case 2: {
            printf("Para: R$ %.2f, fica 2x parcelas de: R$ %.2f", totalOriginal, opcao2(totalOriginal));
            break;
        }
        case 3: {
            printf("Valor original: R$ %.2f \nValor total com juros: %.2f \nNº de parcelas: %d \nValor das parcelas: R$ %.2f", totalOriginal, totalOriginal * 1.03, quantParcelas, opcao3(totalOriginal, quantParcelas));
            break;
        }
        default: {
            printf("Digite uma opção válida!!!");
        }
    }
    
    return 0;
}