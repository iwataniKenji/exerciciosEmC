/*
Nome: Kleverson Kenji Iwatani
Turma: AS31A - N11A 
Data: 26/05/2022
Exercício: VARIÁVEIS BIDIMENSIONAIS #05
*/

#include <stdio.h>

int main() 
{
    int ordem = 0,
        lin = 0,
        col = 0,
        naoNulo = 0;

    printf("Defina a ordem da matriz: ");
    scanf("%d", &ordem);

    int mat[ordem][ordem];

    for(lin = 0; lin < ordem; lin++) {
      for (col = 0; col < ordem; col++) {
        printf ("Digite o valor da matriz[%d][%d]: ", lin +1, col +1);
        scanf("%d", &mat[lin][col]);
      }
    }

    for(lin = 0; lin < ordem; lin++) {
      for (col = 0; col < ordem; col++) {
        if (mat[lin][col] != 0) {
          naoNulo = 1;         
        }
      }
    }

    if (naoNulo == 1) {
      printf("A matriz A de ordem %d não é nula", ordem);
    } else {
      printf("A matriz A de ordem %d é nula", ordem);
    }
    
    return 0;
}