#include <stdio.h>

int main() {
    
    int n1, n2, n3;
    
    printf("Digite o 1º número: ");
    scanf("%d", &n1);
    
    printf("Digite o 2º número: ");
    scanf("%d", &n2);
    
    printf("Digite o 3º número: ");
    scanf("%d", &n3);
    
    if (n1 > n2 && n2 > n3) {
        printf("%d é MAIOR que %d e %d!", n1, n2, n3);
    } else if (n1 == n2 && n2 == n3) { 
        printf("Os números digitados são iguais!");
    } else if (n2 > n1 && n1 > n3) {
        printf("%d é MAIOR que %d e %d!", n2, n1, n3);
    } else {
        printf("%d é MAIOR que %d e %d", n3, n1, n2);
    }

    return 0;
}