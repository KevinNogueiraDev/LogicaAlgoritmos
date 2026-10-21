#include <stdio.h>

float conversao(float c) {
    
    c = (c - 32) * (5.0 / 9.0);
    
    return c; 
}

int main() {
    float f;
    
    printf("Digite uma temperatura em Graus Fahrenheit: ");
    scanf("%f", &f);
    
    printf("A temperatura de %.2f em Fahrenheit é, em celsius: %.2f°", f, conversao(f));
    
    return 0;
}