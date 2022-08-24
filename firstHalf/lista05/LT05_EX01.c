/*
Nome: Kleverson Kenji Iwatani
Turma: AS31A - N11A 
Data: 18/05/2022
Exercício: VARIÁVEIS UNIDIMENSIONAIS #02
*/

#include <stdio.h>
#define TAMANHO_DO_VETOR 20

int main() 
{
    int vet[TAMANHO_DO_VETOR],
        i,
        maiorElemento = 0,
        posicaoDoMaiorElemento = 0;

    for(i = 0; i < TAMANHO_DO_VETOR; i++) {
      printf("Digite o valor positivo para o vetor[%d]: ", i);
      scanf("%d", &vet[i]);

      if (vet[i] < 0) {
        printf("Número inválido. 0 será inserido em substituição\n");
        vet[i] = 0;  
      }

      if (vet[i] > maiorElemento) {
        maiorElemento = vet[i];
        posicaoDoMaiorElemento = i;
      }
    }

    printf("O maior elemento do array é: %d e está na posição %d", maiorElemento, posicaoDoMaiorElemento);

    return 0;
}