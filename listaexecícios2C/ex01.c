
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A, B, C, Soma_ab;
    
    printf("Digite o valor de A: \n");
    scanf("%i", &A);
    printf("Digite o valor de B: \n");
    scanf("%i", &B);
    printf("Digite o valor de C: \n");
    scanf("%i", &C);
    
    Soma_ab = A + B;
    system("clear");
    if (Soma_ab > C) 
        printf("A soma de A: %i + B: %i = %i e é maior que C: %i\n", A, B, Soma_ab, C);
    else 
        printf("A soma de A: %i + B: %i = %i e não é maior que C: %i\n", A, B, Soma_ab, C);

    return 0;
}
