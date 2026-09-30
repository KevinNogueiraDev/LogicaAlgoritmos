#include <stdio.h>

int main() {
    
    int n;
    
    printf("Digite um nº inteiro: ");
    scanf("%d", &n);
    
    if (n % 2 == 0) {
        printf("%d é PAR!", n);
    } else {
        printf("%d é ÍMPAR", n);
    }

    return 0;
}