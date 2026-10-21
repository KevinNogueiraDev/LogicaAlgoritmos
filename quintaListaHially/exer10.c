#include <stdio.h>
#include <stdlib.h>

void tempoVida(int dia, int mes, int ano) {
    int dias, meses, anos;
    
    dias = (31 - dia) + (31 * (12 - mes)) + (365 * (2026 - ano - 1));
    dias = dias + (31 * 10);
    printf("Você tem aproximadamente: %d dias\n", dias);
    
    meses = (12 - mes) + (12 * (2026 - ano - 1));
    meses = meses + 10;
    printf("Aproximadamente: %d meses\n", meses);
    
    anos = 2026 - ano;
    printf("E aproximadamente: %d anos", anos);
}

int main()
{
    int dia, mes, ano;
    
    printf("Digite o dia do seu nascimento: ");
    scanf("%d", &dia);
    
    printf("Digite o mês do seu nascimento: ");
    scanf("%d", &mes);
    
    printf("Digite o ano do seu nascimento: ");
    scanf("%d", &ano);
    system("clear");
    tempoVida(dia, mes, ano);

    return 0;
}
