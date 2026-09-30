#include <stdio.h>

int main() {
    
    int na, soma = 0, j = 1;
    float mediaGeral;
    
    printf("Digite o número de alunos: ");
    scanf("%d", &na);
    
    float notas[na];
    
    for (int c = 1; c <= na; c++) {
        printf("Digite a nota do %dº aluno: ", c);  
        scanf("%f", &notas[c]);
        soma += notas[c];
    }
    
    mediaGeral = (float) soma / na;
    
    printf("A média geral é: %.1f", mediaGeral);
    
    return 0;
}