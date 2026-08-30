#include <stdio.h>
#include <stdlib.h>

int main() {
    
    float area, base, altura;
    
    printf("Digite o valor da base do triângulo: \n");
    scanf("%f", &base);
    printf("Digite o valor da altura do triângulo: \n");
    scanf("%f", &altura);
    
    system("clear");
    
    area = (altura * base)/2;
    
    printf("O valor da área é de: %.2f", area);
    
    return 0;   
}    
