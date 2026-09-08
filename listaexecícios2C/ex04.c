
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A, B, C;
    
    printf("Digite o valor de A: \n");
    scanf("%i", &A);
    printf("Digite o valor de B: \n");
    scanf("%i", &B);
    
    system("clear");
    
    if (A == B) {
        C = A + B;
        printf("A e B são iguais, logo, a soma deles é: %i\n", C);
    }    
    else {
        C = A * B;
        printf("A e B são diferentes, logo, o produto deles é: %i\n", C);
    }    


    return 0;
}
