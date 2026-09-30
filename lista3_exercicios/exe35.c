#include <stdio.h>
#include <stdlib.h>

int main() {
    
    char nome[50];
    int nAlunos, contador = 1, totAprovados = 0, totRecuperacao = 0, totReprovados = 0;
    float n1, n2, mediaAluno, somaMedias, mediaG, maiorM = 0, menorM = 0;
    
    printf("Digite o número de alunos para cadastrar suas notas: ");
    scanf("%d", &nAlunos);

    while (contador <= nAlunos) {
        printf("Digite o nome do %dº aluno: ", contador);
        scanf("%s", nome);
        
        printf("Digite a 1ª nota: ");
        scanf("%f", &n1);
        
        printf("Digite a 2ª nota: ");
        scanf("%f", &n2);
        
        mediaAluno = (n1 + n2) / 2;
        somaMedias += mediaAluno;
        
        if (mediaAluno >= 7) 
            totAprovados += 1;
        else if (mediaAluno >= 5)
            totRecuperacao += 1;
        else 
            totReprovados += 1;
            
        if (mediaAluno > maiorM) {
            maiorM = mediaAluno;
            if (menorM == 0) {
                menorM = mediaAluno;
            }
        } else if (mediaAluno < menorM) {
            menorM = mediaAluno;
        }
        system("clear");
        contador++;
    }
    
    mediaG = somaMedias / nAlunos;
    
    printf("Quantidade de alunos: %d\n", nAlunos);
    printf("Quantidade de aprovados: %d\n", totAprovados);
    printf("Quantidade de recuperações: %d\n", totRecuperacao);
    printf("Quantidade de reprovados: %d\n", totReprovados);
    printf("A média geral é: %.1f\n", mediaG);
    printf("A maior média é: %.1f\n", maiorM);
    printf("A menor média é: %.1f", menorM);
    
    return 0;
}