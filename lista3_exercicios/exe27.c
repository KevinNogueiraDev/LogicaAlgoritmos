#include <stdio.h>

int main() {
    
    int aprovados = 0, reprovados = 0;
    float notas[10], percentual;
    
    for (int c = 1; c <= 10; c++) {
        printf("Digite a nota do %dº aluno: ", c);  
        scanf("%f", &notas[c]);
        if (notas[c] >= 7) 
            aprovados += 1;
        else
            reprovados += 1;
    }
    
    percentual = (float) aprovados * 10;
    
    printf("Quantidade de aprovados: %d\n", aprovados);
    printf("Quantidade de reprovados: %d\n", reprovados);
    printf("Percentual de aprovação: %.0f porcento", percentual);
    
    return 0;
}