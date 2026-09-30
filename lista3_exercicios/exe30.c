#include <stdio.h>
#include <stdlib.h>

int main() {

    int opcao;
    float saldoAt = 5000, deposito, saque;
    
    do {
    printf("==============CAIXA ELETRÔNICO=============\n");
    printf("SALDO ATUAL: R$ %.2f\n", saldoAt);
    printf("Digite [1|2|3|4] para: \n");
    printf("1 - Consultar Saldo \n");
    printf("2 - Depositar \n");
    printf("3 - Sacar \n");
    printf("4 - Sair \n");
    printf("===========================================\n");
    scanf("%d", &opcao);
    
    switch (opcao) {
        case 1: {
            break;
        }
        case 2: {
            system("clear");
            printf("Digite o valor do depósito: ");
            scanf("%f", &deposito);
            saldoAt += deposito;
            break;
        }
        case 3: {
            system("clear");
            printf("Digite o valor do saque: ");
            scanf("%f", &saque);
            if (saldoAt > saque)
                saldoAt = saldoAt - saque;
            else
                printf("SALDO INSUFICIENTE...");
            break;
        }
        case 4: {
            printf("ENCERRANDO PROGRAMA...");
            break;
        }
    }
    
    system("clear"); 
    
    } while (opcao != 4);

    return 0;
}