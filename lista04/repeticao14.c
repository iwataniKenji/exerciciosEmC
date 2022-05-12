/*
Nome: Kleverson Kenji Iwatani
Turma: AS31A - N11A 
Data: 12/05/2022
Exercício: ESTRUTURA DE REPETIÇÃO #14
*/

#include <stdio.h>

int main() 
{
    int qtdProduto = 0,
        valorDeCusto = 0,
        valorTotalEstoque = 0,
        qtdTotalEstoque = 0;
    float mediaCusto = 0;
    char option = 's';

    do {
      printf("Digite a quantidade do produto: ");
      scanf("%d", &qtdProduto);
      printf("Digite o valor de custo do produto: ");
      scanf("%d", &valorDeCusto);

      valorTotalEstoque = valorTotalEstoque + qtdProduto * valorDeCusto;
      qtdTotalEstoque = qtdTotalEstoque + qtdProduto;
      
      printf("Mais mercadorias (S/N)? ");
      scanf(" %c", &option);
    } while(option == 's' || option == 'S');

    mediaCusto = valorTotalEstoque / qtdTotalEstoque;
    printf("Valor total em estoque: R$%.2d\n", valorTotalEstoque);
    printf("Media do valor de custo dos produtos: R$%.2f", mediaCusto);

    return 0;
}