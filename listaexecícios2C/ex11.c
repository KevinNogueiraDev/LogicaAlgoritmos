
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char nome[20];
    float preco_original, preco_final;
    int codigo;
    
    printf("Digite o nome do produto: \n");
    fgets(nome, 20, stdin);
    printf("Digite o preço do produto: \n");
    scanf(" %f", &preco_original);
    
    system("clear");
    
    printf("Digite o código da forma de pagamento: \n");
    printf("[1] À vista em dinheiro ou cheque | [2] À vista em cartão de crédito \n");
    printf("[3] Em duas parcelas sem juros | [4] Em duas parcelas com acréscimo \n");
    scanf("%i", &codigo);
    
    system("clear");
    
    switch (codigo) {
        case 1: {
            preco_final = preco_original * 0.9;
            printf("À vista em dinheiro ou cheque fica: R$%.2f", preco_final);
            break;
        }
        case 2: {
            preco_final = preco_original * 0.85;
            printf("À vista no cartão de crédito fica: R$%.2f", preco_final);
            break;
        }
        case 3: {
            preco_final = preco_original / 2;
            printf("Dividido em parcelas fica: 2x parcelas de R$%.2f sem juros", preco_final);
            break;
        }
        case 4: {
            preco_final = (preco_original * 1.1) / 2;
            printf("Dividido em parcelas fica: 2x parcelas de R$%.2f com acréscimo", preco_final);
            break;
        }
        default: {
            printf("Digite um código de pagamento válido!");
        }
    }

    return 0;
}
