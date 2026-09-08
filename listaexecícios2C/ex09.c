
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int main()
{
    char sexo;
    float altura, peso_ideal;
    
    printf("Digite a sua altura [Em: metro.centímetros]: \n");
    scanf("%f", &altura);
    printf("Digite o seu sexo [M/F]: \n");
    scanf(" %c", &sexo);
    
    system("clear");
    
    if (sexo == 'M') {
        peso_ideal = (72.7 * altura) - 58;
        printf("Como homem, seu peso ideal é: %.3f", peso_ideal);
    } else {
        peso_ideal = (62.1 * altura) - 44.7;
        printf("Como mulher, seu peso ideal é: %.3f", peso_ideal);
    }
    
    return 0;
}