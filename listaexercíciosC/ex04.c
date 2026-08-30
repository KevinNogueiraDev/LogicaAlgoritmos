#include <stdio.h>
#include <stdlib.h>

int main() {
    
    float salario, novo_salario;
    
    printf("Digite o salário atual: \n");
    scanf("%f", &salario);
    
    system("clear");
    
    novo_salario = salario * 1.25;
    
    printf("O salário com o aumento é: %.2f", novo_salario);
    
    return 0;   
}    
