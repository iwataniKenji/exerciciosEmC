/*
Nome: Kleverson Kenji Iwatani
Turma: AS31A - N11A 
Data: 26/05/2022
Exercício: VARIÁVEIS BIDIMENSIONAIS #03
*/

#include <stdio.h>
#define LINHAS 3
#define COLUNAS 3

int main() 
{
    int mat[][COLUNAS] = { {12, 28,  4}, 
                           { 5, 30,  7},
                           { 0, 10, 14} },
        lin = 0,
        col = 0;

    printf("Digite o número da linha: ");
    scanf("%d", &lin);

    printf("Digite o número da coluna: ");
    scanf("%d", &col);

    printf("Para a matriz A, o elemento a[%d][%d] é %d", lin, col, mat[lin][col]);
    
    return 0;
}