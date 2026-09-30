#include <stdio.h>

int main() {
    
    float km, litros, consumoMedio;
    
    printf("Digite a distância percorrida em KM: ");
    scanf("%f", &km);
    
    printf("Digite a quantidade de combustível utilizada em litros: ");
    scanf("%f", &litros);
    
    consumoMedio = km / litros;
    
    printf("O consumo médio de combustível é de: %.2f km/l", consumoMedio);
    
    return 0;
}