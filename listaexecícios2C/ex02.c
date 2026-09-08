
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char nome[10];
    char sexo;
    char estado_civil[10];
    int tempo_casamento = 0;
    
    printf("Digite o seu 1º nome: \n");
    scanf("%s", nome);
    printf("Digite o seu sexo [M/F]: \n");
    scanf(" %c", &sexo);
    printf("Digite o seu estado civil: \n");
    scanf("%s", estado_civil);
    
    system("clear");
    
    if (strcmp(estado_civil, "Casada") == 0 && sexo == 'F') {
        printf("Digite a quanto tempo está casada [Anos]: \n");
        scanf("%i", &tempo_casamento);
    }    
    system("clear");
    
    printf("Seu nome é: %s\n", nome);
    printf("Seu sexo é: %c\n", sexo);
    printf("Seu estado civil é: %s\n", estado_civil);
    if (tempo_casamento > 0) 
        printf("Você está casada a: %i anos\n", tempo_casamento);
    return 0;
}
