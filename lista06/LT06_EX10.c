/*
Nome: Kleverson Kenji Iwatani
Turma: AS31A - N11A 
Data: 26/05/2022
Exercício: VARIÁVEIS BIDIMENSIONAIS #10
*/

#include <stdio.h>

int main() 
{
    int ordem = 0,
        lin = 0,
        col = 0,
        maiorElemento = 0,
        menorElemento = 0,
        linhaDoMaiorElemento = 0,
        colunaDoMaiorElemento = 0,
        colunaDoMenorElemento = 0;

    // definindo ordem da matriz
    printf("Defina a ordem da matriz: ");
    scanf("%d", &ordem);
    int mat[ordem][ordem];

    // digitando valores da matriz
    for(lin = 0; lin < ordem; lin++) {
      for (col = 0; col < ordem; col++) {
        printf ("Digite o valor da matriz[%d][%d]: ", lin +1, col +1);
        scanf("%d", &mat[lin][col]);
      }
    }

    // descobrindo valor, linha e coluna do maior elemento
    for(lin = 0; lin < ordem; lin++) {
      for (col = 0; col < ordem; col++) {
        if (mat[lin][col] > maiorElemento) {
          maiorElemento = mat[lin][col];
          linhaDoMaiorElemento = lin;
          colunaDoMaiorElemento = col;       
        }
      }
    }

    // descobrindo valor e coluna do menor elemento da linha do maior elemento
    for (col = 0; col < ordem; col++) {
      if (col == 0) {
        menorElemento = mat[linhaDoMaiorElemento][col];
        colunaDoMenorElemento = col;
      } else if (mat[linhaDoMaiorElemento][col] < menorElemento) {
        menorElemento = mat[linhaDoMaiorElemento][col];
        colunaDoMenorElemento = col;
      }
    }

    printf("Para a matriz A de ordem %d, o elemento minimax é o elemento a%d%d = %d, pois o maior elemento da matriz é o elemento a%d%d = %d (linha %d).", ordem, linhaDoMaiorElemento +1, colunaDoMenorElemento +1, menorElemento, linhaDoMaiorElemento +1, colunaDoMaiorElemento +1, maiorElemento, linhaDoMaiorElemento +1);
    
    return 0;
}