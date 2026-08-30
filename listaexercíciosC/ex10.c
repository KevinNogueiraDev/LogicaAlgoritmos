#include <stdio.h>
#include <stdlib.h>

int main() {
    
    float area, raio, raio_quadrado;
    
    printf("Digite o valor do raio do círculo: \n");
    scanf("%f", &raio);
    
    system("clear");
    
    raio_quadrado = raio * raio;
    area = 3.14 * raio_quadrado;
    
    printf("O valor da área é de: %.2f", area);
    
    return 0;   
}    
