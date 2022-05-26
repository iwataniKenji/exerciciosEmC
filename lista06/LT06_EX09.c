/*
Nome: Kleverson Kenji Iwatani
Turma: AS31A - N11A 
Data: 26/05/2022
Exercício: VARIÁVEIS BIDIMENSIONAIS #09
*/

#include <stdio.h>
#define ORDEM 5

int main() 
{
    int mat[ORDEM][ORDEM],
        v1[5],
        v2[5],
        lin = 0,
        col = 0,
        soma = 0;

    for(lin = 0; lin < ORDEM; lin++) {
      for (col = 0; col < ORDEM; col++) {
        printf ("Digite o valor da matriz[%d][%d]: ", lin +1, col +1);
        scanf("%d", &mat[lin][col]);
      }
    }

    for(lin = 0; lin < ORDEM; lin++) {
      soma = 0;

      for (col = 0; col < ORDEM; col++) {
        soma = soma + mat[lin][col];

        if (col == ORDEM - 1) {
          v1[lin] = soma;
        }
      }
    }

    for(col = 0; col < ORDEM; col++) {
      soma = 0;

      for (lin = 0; lin < ORDEM; lin++) {
        soma = soma + mat[lin][col];

        if (lin == ORDEM - 1) {
          v2[col] = soma;
        }
      }
    }

    printf("v1 = [%d, %d, %d, %d, %d]", v1[0], v1[1], v1[2], v1[3], v1[4]);
    printf("v2 = [%d, %d, %d, %d, %d]", v2[0], v2[1], v2[2], v2[3], v2[4]);

    return 0;
}