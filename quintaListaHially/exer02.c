#include <stdio.h>

void mes(int a) {
    a = a - 1;
    char mes[12][20] = {"Janeiro", "Fevereiro", "Março", "Abril", "Maio", "Junho", 
    "Julho", "Agosto", "Setembro", "Outubro", "Novembro", "Dezembro"};
    
    int diaMes[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}; 
    
    printf("Você digitou o mês: %s e ele tem %d dias", mes[a], diaMes[a]); 
}

int main()
{
    int n1;
    
    printf("Digite um valor entre 1 e 12, correspondente ao mês desejado: ");
    scanf("%d", &n1);
    
    mes(n1);
    
    return 0;
}