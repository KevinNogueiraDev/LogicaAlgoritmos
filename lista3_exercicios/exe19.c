#include <stdio.h>

int main() {
    
    float peso, altura, imc;
    
    printf("Digite seu peso: ");
    scanf("%f", &peso);
    
    printf("Digite sua altura: ");
    scanf("%f", &altura);
    
    imc = peso / (altura * altura);
    
    if (imc < 18.5)   
        printf("Você está ABAIXO DO PESO!!");    
    else if (imc >= 18.5 && imc <= 24.9) 
        printf("Você está no PESO ADEQUADO!!");
    else if (imc >= 25 && imc <= 29.9)
        printf("Você está com SOBREPESO!!");
    else
        printf("Você está com OBESIDADE!!");
        
    
    return 0;
}