#include <stdio.h>

float volumeCilindro(float a, float b) {
    float v;
    
    v = 3.1414592 * (b * b) * a;
    
    return v; 
}

int main() {
    float altura, raio;
    
    printf("Digite a altura do cilíndro: ");
    scanf("%f", &altura);
    
    printf("Digite o raio do cilíndro: ");
    scanf("%f", &raio);
    
    printf("O volume do cilíndro é de aproximadamente %.2f", volumeCilindro(altura, raio));
    
    return 0;
}