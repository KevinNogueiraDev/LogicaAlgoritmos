
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int main()
{
    int entrada1, entrada2;
    bool v1, v2;
    
    printf("Digite 0 para falso e 1 para verdadeiro: \n");
    scanf("%d", &entrada1);
    printf("Digite 0 para falso e 1 para verdadeiro novamente: \n");
    scanf("%d", &entrada2);
    
    system("clear");
    
    v1 = entrada1;
    v2 = entrada2;
    
    if (v1 == 1 && v2 == 1)
        printf("Ambos são verdadeiros! \n");
    else if (v1 == 0 && v2 == 0)
        printf("Ambos são falsos! \n");
    else 
        printf("Ambos não são verdadeiros/falsos!");
    
    return 0;
}