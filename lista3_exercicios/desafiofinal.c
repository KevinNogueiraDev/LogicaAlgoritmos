#include <stdio.h>
#include <stdlib.h>

int main() {
    
    /*Sistema para calcular o salário de um vendedor CLT de uma empresa no natal*/
    
    char nome[30];
    float percentualBonus, percentualInss, percentualComissao;
    float salarioBase, totalVendas, valorComissao, valorBonus, valorInss, salarioBruto, salarioLiquido;
    
    printf("Digite o nome do funcionário: ");
    scanf("%s", nome);
    
    printf("Digite o salário base do(a) %s: ", nome);
    scanf("%f", &salarioBase);
    
    printf("Digite o valor total de todas as vendas do(a) %s: ", nome);
    scanf("%f", &totalVendas);
    
    printf("Digite o percentual que ele possui sobre o total das vendas: ");
    scanf("%f", &percentualComissao);
    
    printf("Digite o bônus natalino em percentual: ");
    scanf("%f", &percentualBonus);
    
    printf("Digite a contribuição para o INSS em percentual: ");
    scanf("%f", &percentualInss);
    
    system("clear");
    
    percentualComissao = percentualComissao / 100;
    valorComissao = totalVendas * percentualComissao;
    
    percentualBonus = percentualBonus / 100;
    valorBonus = salarioBase * percentualBonus;
    
    percentualInss = percentualInss / 100;
    valorInss = salarioBase * percentualInss;
    
    salarioBruto = salarioBase + valorComissao + valorBonus;
    salarioLiquido = salarioBase + valorComissao + valorBonus - valorInss;
    
    printf("=================SALÁRIO==================\n");
    printf("Nome do funcionário: %s\n", nome);
    printf("Salário base: %.2f\n", salarioBase);
    printf("Percentual Comissão: %.2f\n", percentualComissao);
    printf("Percentual Bônus: %.2f\n", percentualBonus);
    printf("Percentual INSS: %.2f\n", percentualInss);
    printf("Valor da comissão: %.2f\n", valorComissao);
    printf("Valor do Bônus: %.2f\n", valorBonus);
    printf("Valor da contribuição: %.2f\n", valorInss);
    printf("Salário bruto: %.2f\n", salarioBruto);
    printf("Salário Liquido: %.2f\n", salarioLiquido);
    printf("==========================================");
    
    return 0;
}