/*
Nome: Kleverson Kenji Iwatani
Turma: AS31A - N11A 
Data: 26/05/2022
Exercício: VARIÁVEIS BIDIMENSIONAIS #07
*/

#include <stdio.h>

int main() 
{
    int ordem = 0,
        lin = 0,
        col = 0,
        soma = 0;

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
        if (lin > col) {
          soma = soma + mat[lin][col];      
        }
      }
    }

    printf("Para a matriz A de ordem %d, a soma de todos os elementos abaixo da diagonal é %d", ordem, soma);

    return 0;
}