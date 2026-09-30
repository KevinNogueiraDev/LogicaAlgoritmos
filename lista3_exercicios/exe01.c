#include <stdio.h>

int main() {
    
    char nome[20];
    
    printf("Digite seu 1° nome: ");
    scanf("%s", nome);
    
    printf("Olá, %s! Seja bem vindo(a) à disciplina de Lógica de Programação. ", nome);
    
    return 0;
}