#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char codigo_aluno[10], situacao[15];
    float n1, n2, n3, media_exercicios, media_aproveitamento;
    char conceito;
    
    printf("Digite o código do aluno: \n");
    scanf("%s", &codigo_aluno);
    printf("Digite a nota da N1: \n");
    scanf(" %f", &n1);
    printf("Digite a nota da N2: \n");
    scanf("%f", &n2);
    printf("Digite a nota da N3: \n");
    scanf("%f", &n3);
    printf("Digite a média dos exercícios: \n");
    scanf("%f", &media_exercicios);
    
    system("clear");
    
    media_aproveitamento = (n1 + (n2 * 2) + (n3 * 3) + media_exercicios) / 7;
    
    if (media_aproveitamento >= 90) {
        conceito = 'A';
        strcpy(situacao, "Aprovado");
    } else if (media_aproveitamento >= 75 && media_aproveitamento < 90) {
            conceito = 'B';
            strcpy(situacao, "Aprovado");
    } else if (media_aproveitamento >= 60 && media_aproveitamento < 75) {
            conceito = 'C';
            strcpy(situacao, "Aprovado");
    } else if (media_aproveitamento >= 40 && media_aproveitamento < 60) {
            conceito = 'D';
            strcpy(situacao, "Reprovado");
    } else {
            conceito = 'E';
            strcpy(situacao, "Reprovado");
    }
    
        printf("O código do aluno é: %s\n", codigo_aluno);
        printf("A nota 1 é: %.2f\n", n1);
        printf("A nota 2 é: %.2f\n", n2);
        printf("A nota 3 é: %.2f\n", n3);
        printf("A média dos exercícios é: %.2f\n", media_exercicios);
        printf("A média de aproveitamento é: %.2f\n", media_aproveitamento);
        printf("Conceito obtido: %c\n", conceito);
        printf("O aluno está: %s", situacao);
        
    return 0;
}
