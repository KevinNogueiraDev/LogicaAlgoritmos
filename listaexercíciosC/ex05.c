#include <stdio.h>
#include <stdlib.h>

int main() {
    
    float salario, novo_salario;
    float percentual, aumento;
    
    printf("Digite o salário do(a) funcionário(a): \n");
    scanf("%f", &salario);
    printf("Agora, digite o percentual de aumento do(a) funcionário(a): \n");
    scanf("%f", &percentual);
    
    system("clear");
    
    aumento = (salario * percentual)/100;
    novo_salario = salario + aumento;
    
    printf("O valor do aumento é de: %.2f \n", aumento);
    printf("O salário com o aumento é: %.2f", novo_salario);
    
    return 0;   
}    
