#include <stdio.h>

int main() {
    
    int n, resultado = 0, j = 1;
 
    
    printf("Digite o número desejado: ");
    scanf("%d", &n);
    
    for (int c = 1; c <= n; c++) {
        printf("[%d] + [%d] = ", resultado, c);  
        resultado = resultado + c;
        printf("%d\n", resultado);    
    }
    
    return 0;
}