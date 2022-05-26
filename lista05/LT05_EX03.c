/*
Nome: Kleverson Kenji Iwatani
Turma: AS31A - N11A 
Data: 18/05/2022
Exercício: VARIÁVEIS UNIDIMENSIONAIS #03
*/

#include <stdio.h>
#define TAMANHO_DO_VETOR 20

int main() 
{
    int vet[TAMANHO_DO_VETOR],
        i,
        menorElemento = 0,
        posicaoDoMenorElemento = 0;
    
    for(i = 0; i < TAMANHO_DO_VETOR; i++) {
      printf("Digite um valor inteiro positivo para o vetor[%d]: ", i);
      scanf("%d", &vet[i]);

      if (vet[0]) {
        menorElemento = vet[0];
        posicaoDoMenorElemento = i;
      }

      if(vet[i] < menorElemento) {
        menorElemento = vet[i];
        posicaoDoMenorElemento = i;
      }
    }

    printf("O menor elemento do vetor é o %d, localizado na posição %d", menorElemento, posicaoDoMenorElemento);

    return 0;
}