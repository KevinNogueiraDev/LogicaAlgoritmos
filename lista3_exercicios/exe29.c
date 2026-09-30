#include <stdio.h>

int main() {
    
    int tentativa = 0, senha = 1234;
    
    while (tentativa != senha) {
        printf("Digita a senha: ");
        scanf("%d", &tentativa);
        
        if (tentativa != senha) {
            printf("SENHA INCORRETA, TENTE NOVAMENTE!\n");
        }
    }
    
    printf("ACESSO AUTORIZADO!");

    return 0;
}