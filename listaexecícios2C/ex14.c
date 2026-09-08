#include <stdio.h>
#include <stdlib.h>

int main () {
    
    int codigo;
    
    printf("Digite o código do prato: \n");
    printf("[1] Hambúrguer com fritas R$ 28,00 | [2] Filé de frango grelhado R$ 32,00 |\n");
    printf("[3] Lasanha à bolonhesa R$ 35,00 | [4] Filé de peixe com arroz R$ 42,00 | [5] Salada especial R$ 25,00 |\n");
    scanf("%d", &codigo);
    
    system("clear");
    
    switch (codigo) {
        case 1: {
            printf("O prato escolhido foi: Hambúrguer com fritas!\n");
            printf("Seu valor é de: R$ 28,00\n");
            break;
        }
        case 2: {
            printf("O prato escolhido foi: Filé de frango grelhado!\n");
            printf("Seu valor é de: R$ 32,00\n");
            break;
        }
        case 3: {
            printf("O prato escolhido foi: Lasanha à bolonhesa!\n");
            printf("Seu valor é de: R$ 35,00");
            break;
        }
        case 4: {
            printf("O prato escolhido foi: Filé de peixe com arroz!\n");
            printf("Seu valor é de: R$ 42,00\n");
            break;
        }
        case 5: {
            printf("O prato escolhido foi: Salada especial! \n");
            printf("Seu valor é de: R$ 25,00\n");
            break;
        }
        default: {
            printf("Digite uma opção válida [1...5]\n");
        }
    }
     return 0;
}