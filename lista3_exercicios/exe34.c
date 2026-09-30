#include <stdio.h>
#include <stdlib.h>

int main() {

    char nomeProduto[30];
    int totVendas = 0, totProdutos = 0, quantidade, escolha;
    float maiorVenda, faturamento = 0, preco, valorVenda;
    
    do {
    printf("Digite o nome do produto: ");
    scanf("%s", &nomeProduto);
    
    printf("Digite a quantidade do produto: ");
    getchar();
    scanf("%d", &quantidade);
    
    printf("Digite o preço do produto: ");
    scanf("%f", &preco);
    
    totProdutos += quantidade;
    totVendas += 1;
    faturamento += quantidade * preco;
    valorVenda = quantidade * preco;
    if (valorVenda > maiorVenda) {
        maiorVenda = valorVenda;
    }
    
    printf("Digite 1 para CADASTRAR outro produto e 0 para SAIR! ");
    scanf("%d", &escolha);
    system("clear");
    } while (escolha != 0);
    
    printf("A quantidade de vendas realizadas: %d\n", totVendas);
    printf("Quantidade total de produtos vendidos: %d\n", totProdutos);
    printf("Faturamento total: %.2f\n", faturamento);
    printf("Maior venda realizada: %.2f\n", maiorVenda);

    return 0;
}