#include <stdio.h>
#include <stdlib.h>

int main() {
    
    float salario_depositado, cheque1, cheque2;
    
    printf("Digite o valor do salário depositado: \n");
    scanf("%f", &salario_depositado);
    printf("Digite o valor deste 1º cheque: \n");
    scanf("%f", &cheque1);
    printf("Digite o valor deste 2º cheque: \n");
    scanf("%f", &cheque2);
    
    system("clear");
    
    salario_depositado = salario_depositado - (cheque1 + (cheque1 * 0.38)/100);
    salario_depositado = salario_depositado - (cheque2 + (cheque2 * 0.38)/100);
    
    printf("Seu saldo atual é de: %.2f\n", salario_depositado);
    
    return 0;   
}    
