/*
Nome: Kleverson Kenji Iwatani
Turma: AS31A - N11A 
Data: 19/05/2022
Exercício: VARIÁVEIS UNIDIMENSIONAIS #06
*/

#include <stdio.h>

int main() 
{
    int tamanhoDoVetor,
        i;
    
    // pegando valor do tamanho dos vetores
    printf("Digite o valor referente ao tamanho do vetor: ");
    scanf("%d", &tamanhoDoVetor);

    int vetA[tamanhoDoVetor],
        vetB[tamanhoDoVetor],
        vetC[tamanhoDoVetor];

    // pegando valores do vetor A
    for (i = 0; i < tamanhoDoVetor; i++) {
      printf("Digite o valor do vetor A [%d]: ", i);
      scanf("%d", &vetA[i]);
    }

    // pegando valores do vetor B
    for (i = 0; i < tamanhoDoVetor; i++) {
      printf("Digite o valor do vetor B [%d]: ", i);
      scanf("%d", &vetB[i]);
    }

    // somando valores do vetor A e B para adquirir o C
    for (i = 0; i < tamanhoDoVetor; i++) {
      vetC[i] = vetA[i] + vetB[i];
    }
    
    printf("Para n (tamanho) igual a %d, A = [", tamanhoDoVetor);
    for (i = 0; i < tamanhoDoVetor; i++) {
      if (i < (tamanhoDoVetor - 1)) {
        printf("%d ", vetA[i]);
      } else {
        printf("%d", vetA[i]);
      }
    }

    printf("] e B = [");
    for (i = 0; i < tamanhoDoVetor; i++) {
      if (i < (tamanhoDoVetor - 1)) {
        printf("%d ", vetB[i]);
      } else {
        printf("%d", vetB[i]);
      }
    }

    printf("], então C = [");
    for (i = 0; i < tamanhoDoVetor; i++) {
      if (i < (tamanhoDoVetor - 1)) {
        printf("%d ", vetC[i]);
      } else {
        printf("%d", vetC[i]);
      }
    }

    printf("]");
    
    return 0;
}