/*
Nome: Kleverson Kenji Iwatani
Turma: AS31A - N11A 
Data: 26/05/2022
Exercício: VARIÁVEIS BIDIMENSIONAIS #01
*/

#include <stdio.h>
#define LINHAS 3
#define COLUNAS 3

int main() 
{
    int mat[LINHAS][COLUNAS],
        lin = 0,
        col = 0;
    
    for(lin = 0; lin < LINHAS; lin++) {
      for (col = 0; col < COLUNAS; col++) {
        printf ("Digite o valor da matriz[%d][%d]: ", lin +1, col +1);
        scanf("%d", &mat[lin][col]);
      }
    }

    for(lin = 0; lin < LINHAS; lin++) {
      for (col = 0; col < COLUNAS; col++) {
        printf("%3d", mat[lin][col]);
      }
      printf("\n");
    }
    
    return 0;
}