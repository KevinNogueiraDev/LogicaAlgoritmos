#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    
    int n, n_quadrado, n_cubo;
    float n_raiz_quadrada, n_raiz_cubo;
    
    printf("Digite um número inteiro e maior que 0: \n");
    scanf("%i", &n);
    
    system("clear");
    
    n_quadrado = n * n;
    n_cubo = n * n * n;
    n_raiz_quadrada = sqrt(n);
    n_raiz_cubo = cbrt(n);
    
    printf("O valor do número digitado quando elevado ao quadrado é: %i\n", n_quadrado);
    printf("O valor do número digitado quando elevado ao cubo é: %i\n", n_cubo);
    printf("O valor da raiz quadrada do número digitado é: %f\n", n_raiz_quadrada);
    printf("O valor da raiz cúbica do número digitado é: %.2f", n_raiz_cubo);
    
    return 0;   
}    
