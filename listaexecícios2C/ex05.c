
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int Num, Resultado;
    
    printf("Digite o valor de um número inteiro [+ ou -]: \n");
    scanf("%i", &Num);
    
    system("clear");
    
    if (Num > 0) {
        Resultado = Num * 2;
        printf("%i é positivo, logo, o dobro dele é: %i\n", Num, Resultado);
    }    
    else if (Num == 0) {
        printf("0 não é positivo/negativo, ele é neutro.\nPor favor, digite um valor válido!");   
    } else {
        Resultado = Num * 3;
        printf("%i é negativo, logo, o triplo dele é: %i\n", Num, Resultado);
    }


    return 0;
}
