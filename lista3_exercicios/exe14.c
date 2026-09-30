#include <stdio.h>

int main() {
    
    int n1, n2;
    
    printf("Digite o 1º número: ");
    scanf("%d", &n1);
    
    printf("Digite o 2º número: ");
    scanf("%d", &n2);
    
    if (n1 > n2) {
        printf("%d é MAIOR que %d!", n1, n2);
    } else if (n1 == n2) { 
        printf("Os números digitados são iguais!");
    } else {
        printf("%d é MAIOR que %d!", n2, n1);
    }

    return 0;
}