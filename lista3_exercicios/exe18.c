#include <stdio.h>

int main() {
    
    int idade;
    
    printf("Digite sua idade: ");
    scanf("%d", &idade);
    
    if (idade >= 0 && idade <= 12) {  
        printf("Você é uma CRIANÇA!!");    
    } else if (idade >= 13 && idade <= 17) {  
        printf("Você é um(a) ADOLESCENTE!!");
    } else if (idade >= 18 && idade <= 59) {
        printf("Você é um(a) ADULTO(A)!!");
    } else {
        printf("Você é um(a) IDOSO(A)!!");
    }    
    
    return 0;
}