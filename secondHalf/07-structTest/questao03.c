// NOME: KLEVERSON KENJI IWATANI
// RA: 2465205
// PROFESSOR: GABRIEL CANHADAS GENVIGIR

#include <stdio.h>
#include <stdlib.h>

struct c {
  char marca[25];
  int ano;
  int preco;
} typedef tipoCarro;

tipoCarro *aloca_memoria(int);

int main() {
  tipoCarro *carro;
  int i, quantidade, fim, valor;

  quantidade = 1;

  carro = aloca_memoria(quantidade);
  
  if (carro == NULL) {
    return 0;
  }

  for (i = 0; i < quantidade; i = i + 1) {
    printf("Digite o nome da marca do %dº carro: ", i+1);
    fflush(stdin);
    gets(carro[i].marca);
    printf("Digite o ano do carro: ");
    scanf("%d", &carro[i].ano);
    printf("Digite o preço do carro: ");
    scanf("%d", &carro[i].preco);
    printf("\nDeseja continuar? 1 para SIM ou 2 para NAO: ");
    scanf("%d", &fim);

    if (fim == 1) {
      quantidade++;
      carro = realloc(carro, quantidade * sizeof(tipoCarro));
    }
  }

  valor = 1;

  while (valor != 0) {
    printf("\nRetornar a informação de todos os carros com preço menor que...: ");
    scanf("%d", &valor);

    for (i = 0; i < quantidade; i = i + 1) {
      if (carro[i].preco < valor) {
        printf("\n------------------------------\n");
        printf("\nMARCA.....: %s",carro[i].marca);
        printf("\nANO.......: %d",carro[i].ano);
        printf("\nPREÇO.....: %d",carro[i].preco);
        printf("\n");
      }
    } 
  }

  return 0;
}

// alocação de memória
tipoCarro *aloca_memoria(int dimensao) {
  tipoCarro *vetor;

  vetor = malloc(dimensao * sizeof(tipoCarro));

  if (vetor == NULL) {
    printf("\nErro de alocação de memoria");
    return NULL;
  }

  return vetor;
}