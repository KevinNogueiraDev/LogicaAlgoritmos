#include <stdio.h>

int main() {
    
    float n1, n2, media;
    
    printf("Digite a 1ª nota: ");
    scanf("%f", &n1);
    
    printf("Digite a 2ª nota: ");
    scanf("%f", &n2);
    
    media = (n1 + n2) / 2;
    
    if (media >= 7) 
        printf("O aluno está APROVADO!!");
    else if (media >= 5)
        printf("O aluno está de RECUPERAÇÃO!!");
    else
        printf("O aluno está REPROVADO!!");
    return 0;
}