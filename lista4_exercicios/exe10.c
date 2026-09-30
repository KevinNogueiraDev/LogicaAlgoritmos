#include <stdio.h>
#include <stdlib.h>

int main() {
    
    float notas[15];
    float somaNotas = 0, mediaGeral;
    
    for (int c = 0; c < 15; c++) {
        printf("Digite a %dª nota: ", c + 1);
        scanf("%f", &notas[c]);
        
        somaNotas += notas[c];
    }
    
    mediaGeral = somaNotas / 15;
    
    printf("A média geral da turma é: %.1f", mediaGeral);
    
    return 0;
}