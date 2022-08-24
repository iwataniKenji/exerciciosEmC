/*
Nome: Kleverson Kenji Iwatani
Turma: AS31A - N11A 
Data: 19/05/2022
Exercício: VARIÁVEIS UNIDIMENSIONAIS #08
*/

#include <stdio.h>
#define NUM_VETOR 5

int main() 
{
    int v1[NUM_VETOR],
        v2[NUM_VETOR],
        i,
        numIgual = 0;
    
    // pegando valores do vetor 1
    for(i = 0; i < NUM_VETOR; i++) {
      printf("Digite um valor para o V1[%d]: ", i);
      scanf("%d", &v1[i]);
    }

    // pegando valores do vetor 2
    for(i = 0; i < NUM_VETOR; i++) {
      printf("Digite um valor para o V2[%d]: ", i);
      scanf("%d", &v2[i]);
    }

    // contabilizar quantos números iguais
    for(i = 0; i < NUM_VETOR; i++) {
      if (v1[i] == v2[i]) {
        numIgual++;
      }
    }

    printf("A quantidade de números iguais na mesma posição é %d", numIgual);
    
    return 0;
}