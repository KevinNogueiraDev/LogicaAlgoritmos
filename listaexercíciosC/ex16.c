#include <stdio.h>
#include <stdlib.h>

int main() {
    
    int h_trabalhadas;
    float salario_minimo, salario_bruto, salario_liquido, valor_hora, salario_bruto_imposto;
    
    printf("Digite o número de horas trabalhadas: \n");
    scanf("%i", &h_trabalhadas);
    printf("Digite o valor do salário mínimo: \n");
    scanf("%f", &salario_minimo);
    
    system("clear");
    
    valor_hora = salario_minimo / 2;
    salario_bruto = h_trabalhadas * valor_hora;
    salario_liquido = salario_bruto - (salario_bruto * 3)/100;
    
    printf("O salário líquido é: %.2f\n", salario_liquido);
    
    return 0;   
}    
