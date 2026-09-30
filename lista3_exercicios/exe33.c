#include <stdio.h>
#include <stdlib.h>

int main() {

    int cand1 = 0, cand2 = 0, cand3 = 0, opcao, totVotos = 0;

    do {
        printf("EM QUEM VAI VOTAR? \n");
        printf("Digite 1 para o candidato 1, 2 para o candidato 2 e 3 para o candidato 3!\n");
        printf("Ou digite 0 para encerrare ver o ganhador!\n");
        scanf("%d", &opcao);
        
        if (opcao == 1) {
            cand1 += 1;
            totVotos += 1;
        } else if (opcao == 2) {
            cand2 += 1;
            totVotos += 1;
        } else if (opcao == 3) {
            cand3 += 1;
            totVotos += 1;
        }
        
        system("clear");
    } while (opcao != 0);
    
    printf("Votos do candidato 1: %d\n", cand1);
    printf("Votos do candidato 2: %d\n", cand2);
    printf("Votos do candidato 3: %d\n", cand3);
    printf("Total de votos: %d\n", totVotos);
    
    if (cand1 > cand2 && cand1 > cand3) {
        printf("O candidato 1 é o GANHADOR!\n");
    } else if (cand2 > cand1 && cand2 > cand3) {
        printf("O candidato 2 é o GANHADOR!\n");
    } else if (cand3 > cand1 && cand3 > cand2) {
        printf("O candidato 3 é o GANHADOR!\n");
    } else if (cand1 == cand2 || cand1 == cand3 || cand2 == cand3) {
        printf("HOUVE EMPATE!");
    }
    
    return 0;
}