#include <stdio.h>
#include <stdlib.h>

int main() {
    
    float n1, n2, n3, p1, p2, p3;
    float mediap;
    
    printf("Digite a primeira nota: \n");
    scanf("%f", &n1);
    printf("Digite o peso da nota: \n");
    scanf("%f", &p1);
    printf("Digite a segunda nota: \n");
    scanf("%f", &n2);
    printf("Digite o peso da nota: \n");
    scanf("%f", &p2);
    printf("Digite a terceira nota: \n");
    scanf("%f", &n3);
    printf("Digite o peso da nota: \n");
    scanf("%f", &p3);
    
    system("clear");
    
    mediap = ((n1 * p1) + (n2 * p2) + (n3 * p3))/(p1 + p2 + p3);
    
    printf("A média ponderada das três notas é: %.2f", mediap);
    
    return 0;   
}    
