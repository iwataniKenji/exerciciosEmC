/*
Nome: Kleverson Kenji Iwatani
Turma: AS31A - N11A 
Data: 26/05/2022
Exercício: VARIÁVEIS BIDIMENSIONAIS #04
*/

#include <stdio.h>
#define ORDEM 4

int main() 
{
    int mat[ORDEM][ORDEM],
        lin = 0,
        col = 0,
        somaLinha = 0,
        somaColuna = 0,
        somaDiagonalPrinc = 0,
        somaDiagonalSec = 0;

    for(lin = 0; lin < ORDEM; lin++) {
      for (col = 0; col < ORDEM; col++) {
        printf ("Digite o valor da matriz[%d][%d]: ", lin +1, col +1);
        scanf("%d", &mat[lin][col]);
      }
    }
    
    // 1 - elementos da terceira linha (índice 2)
    for (col = 0; col < ORDEM; col++) {
      somaLinha = somaLinha + mat[2][col];
    }

    // 2 - elementos da segunda coluna (índice 1)
    for(lin = 0; lin < ORDEM; lin++) {
      somaColuna = somaColuna + mat[lin][1];
    }

    // 3 - elementos da diagonal principal
    for(lin = 0; lin < ORDEM; lin++) {
      somaDiagonalPrinc = somaDiagonalPrinc + mat[lin][lin];
    }

    // 4 - elementos da diagonal secundária
    for(lin = 0; lin < ORDEM; lin++) {
      for (col = 0; col < ORDEM; col++) {
        if (lin + col == ORDEM - 1) {
          somaDiagonalSec = somaDiagonalSec + mat[lin][col];
        }
      }
    }

    printf("Para a matriz A de ordem %d, a soma dos elementos da linha 3 é %d, a soma dos elementos da coluna 2 é %d, a soma da diagonal principal é %d e a soma dos elementos da diagonal secundária é %d.", ORDEM, somaLinha, somaColuna, somaDiagonalPrinc, somaDiagonalSec);

    return 0;
}