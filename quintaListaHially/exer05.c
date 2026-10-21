#include <stdio.h>

float volumeEsfera(float a) {
    float v;
    
    v = (4.0 / 3.0) * (3.1414592 * (a * a * a));
    
    return v; 
}

int main() {
    float altura, raio;
    
    printf("Digite o raio da esfera: ");
    scanf("%f", &raio);
    
    printf("O volume da esfera é de aproximadamente: %.2f", volumeEsfera(raio));
    
    return 0;
}