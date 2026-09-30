#include <stdio.h>

int main() {
    
    int n, maior = 0;
    
    for (int c = 1; c <= 10; c++) {
        printf("Digite o %dº valor: ", c);  
        scanf("%d", &n);
        if (n > maior) 
            maior = n;
        else
            continue;
    }

    printf("O maior valor digitado é: %d\n", maior);

    return 0;
}