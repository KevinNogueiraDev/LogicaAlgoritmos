
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int Num;
    
    printf("Digite um número inteiro: \n");
    scanf("%i", &Num);
    
    system("clear");
    
    if (Num % 2 == 0) 
        printf("O valor %i é PAR!\n", Num);
    else 
        printf("O valor %i é ÍMPAR!\n", Num);

    return 0;
}
