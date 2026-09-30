#include <stdio.h>

int main() {
    
    float celsius, fahrenheit;
    
    printf("Digite a temperatura em celsius: ");
    scanf("%f", &celsius);
    
    fahrenheit = (celsius * 9) / 5 + 32;
    
    printf("%.2f graus celsius equivale a: %.2f em fahrenheit", celsius, fahrenheit);
    
    return 0;
}