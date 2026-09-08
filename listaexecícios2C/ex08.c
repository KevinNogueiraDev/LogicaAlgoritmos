
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int main()
{
    int numero1, numero2, numero3;
    
    printf("Digite o 1º valor inteiro: \n");
    scanf("%d", &numero1);
    printf("Digite o 2º valor inteiro [SEM REPETIR!]: \n");
    scanf("%d", &numero2);
    printf("Digite o 3º valor inteiro [SEM REPETIR!]: \n");
    scanf("%d", &numero3);
    
    system("clear");
    
    if (numero1 > numero2 && numero1 > numero3) {
        printf("%d, ", numero1);
        if (numero2 > numero3) {
            printf("%d, %d", numero2, numero3);
        } else {
            printf("%d, %d", numero3, numero2);
        }
        
    } else if (numero2 > numero1 && numero2 > numero3){
        printf("%d, ", numero2);
         if (numero1 > numero3) {
            printf("%d, %d", numero1, numero3);
        } else {
            printf("%d, %d", numero3, numero1);
        }
        
    } else if (numero3 > numero1 && numero3 > numero2) {
        printf("%d, ", numero3);
         if (numero1 > numero2) {
            printf("%d, %d", numero1, numero2);
        } else {
            printf("%d, %d", numero2, numero1);
        }
    }    
    
    return 0;
}