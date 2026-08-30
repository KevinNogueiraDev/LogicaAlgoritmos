#include <stdio.h>
#include <stdlib.h>

int main() {
    
    float salario_base, impostos, salario_atualizado;
    
    printf("Digite o salário base do(a) funcionário(a): \n");
    scanf("%f", &salario_base);
    
    system("clear");
    
    impostos = salario_base * 0.1;
    salario_atualizado = salario_base - impostos + 50;
    
    printf("O salário atualizado com os impostos e a gratificação é de: %.2f", salario_atualizado);
    
    return 0;   
}    
