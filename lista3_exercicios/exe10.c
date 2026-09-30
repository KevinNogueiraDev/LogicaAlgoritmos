#include <stdio.h>

int main() {
    
    char nome[25];
    int quant;
    float preco, total;
    
    printf("Digite o nome do produto: ");
    scanf("%s", nome);
    
    printf("Digite a quantidade do(a): %s ", nome);
    scanf("%d", &quant);
    
    printf("Digite o valor do(a): %s R$ ", nome);
    scanf("%f", &preco);
    
    total = preco * quant;
    
    printf("O total é de: R$ %.2f", total);
    
    return 0;
}