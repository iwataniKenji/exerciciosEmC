/*
Nome: Kleverson Kenji Iwatani
Turma: AS31A - N11A 
Data: 26/05/2022
Exercício: VARIÁVEIS BIDIMENSIONAIS #02
*/

#include <stdio.h>
#define LINHAS 2
#define COLUNAS 3

int main() 
{
    int mat[LINHAS][COLUNAS],
        lin = 0,
        col = 0,
        soma = 0;
    
    for(lin = 0; lin < LINHAS; lin++) {
      for (col = 0; col < COLUNAS; col++) {
        printf ("Digite o valor da matriz[%d][%d]: ", lin +1, col +1);
        scanf("%d", &mat[lin][col]);
      }
    }

    for(lin = 0; lin < LINHAS; lin++) {
      for (col = 0; col < COLUNAS; col++) {
        soma = soma + mat[lin][col];
      }
    }

    printf("Para a matriz A, a soma de todos os elementos é %d", soma);

    return 0;
}