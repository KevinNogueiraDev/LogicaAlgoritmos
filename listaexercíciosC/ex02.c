#include <stdio.h>
#include <stdlib.h>

int main() {
    
    int n1, n2, n3;
    float media;
    
    printf("Digite a primeira nota: \n");
    scanf("%i", &n1);
    printf("Digite a segunda nota: \n");
    scanf("%i", &n2);
    printf("Digite a terceira nota: \n");
    scanf("%i", &n3);
    
    system("clear");
    
    media = (n1 + n2 + n3)/3;
    
    printf("A média das três notas é: %.2f", media);
    return 0;   
}    
