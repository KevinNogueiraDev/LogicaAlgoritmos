#include <stdio.h>

int main() {
    
    float horas, valorHora, salario;
    
    printf("Digite o nº de horas trabalhadas: ");
    scanf("%f", &horas);
    
    printf("Digite o valor para cada hora trabalhada: ");
    scanf("%f", &valorHora);
    
    salario = valorHora * horas;
    
    printf("O salário bruto equivale a: R$ %.2f", salario);
    
    return 0;
}