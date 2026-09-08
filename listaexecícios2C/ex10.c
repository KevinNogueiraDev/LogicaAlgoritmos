
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int main()
{
    float altura, peso, imc;
    
    printf("Digite o seu peso [KG]: \n");
    scanf("%f", &peso);
    printf("Digite a sua altura [Em: metro.centímetros]: \n");
    scanf("%f", &altura);
    
    system("clear");
    
    imc = peso / (altura * altura);
    
    if (imc < 18.5) {
        printf("Você está ABAIXO DO PESO! \n");
    } else if (imc >= 18.5 && imc < 25) {
        printf("Você está com o PESO NORMAL! \n");
    } else if (imc >= 25 && imc < 30) {
        printf("Você está ACIMA DO PESO! \n");
    } else {
        printf("Você está OBESO(A)!");        
    }
    
    return 0;
}