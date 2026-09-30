#include <stdio.h>

int main() {
    
    float n1, n2, resultado;
    int escolha;
    
    printf("Digite o 1º número: ");
    scanf("%f", &n1);
    
    printf("Digite o 2º número: ");
    scanf("%f", &n2);
    
    printf("Digite 1 para multiplicar, 2 para dividir\n3 para subtrair e 4 para somar:\n");
    scanf("%d", &escolha);
    
    switch (escolha) {
        case 1: {
            resultado = n1 * n2;
            break;    
        }
        case 2: {
            if (n2 != 0) {
            resultado = n1 / n2;
            } else {
                printf("NÃO É POSSÍVEL DIVIDIR POR ZERO!");
            }
            break;
        }
        case 3: {
            resultado = n1 - n2;
            break;
        }
        case 4: {
            resultado = n1 + n2;
            break;
        }
    }   
    
    printf("O resultado é: %.2f", resultado);    
 
    return 0;
}