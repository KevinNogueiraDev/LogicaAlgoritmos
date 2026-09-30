#include <stdio.h>

int main() {
    
    int n;
    
    printf("Digite um nº inteiro: ");
    scanf("%d", &n);
    
    if (n > 0) {
        printf("%d é POSITIVO +++", n);
    } else if (n == 0) {
        printf("%d é ZERO 000", n);
    } else {
        printf("%d é NEGATIVO ---", n);
    }

    return 0;
}