#include <stdio.h>

int main() {
    
    float n1, n2, n3, media;
    
    printf("Digite a 1º nota: ");
    scanf("%f", &n1);
    
    printf("Digite a 2º nota: ");
    scanf("%f", &n2);
    
    printf("Digite a 3º nota: ");
    scanf("%f", &n3);
    
    media = (n1 + n2 + n3) / 3;
    
    printf("A média final do aluno é: %.2f\n", media);
    
    return 0;
}