/*
Nome: Kleverson Kenji Iwatani
Turma: AS31A - N11A 
Data: 05/04/2022
Exercício: ESTRUTURA SEQUENCIAL #8
*/

#include <stdio.h>
#include <math.h>

int main()
{
    int x1 = 0, y1 = 0, x2 = 0, y2 =0, distancia = 0;
    
    printf("Digite o valor de x1: ");
    scanf("%d", &x1);
    printf("Digite o valor de y1: ");
    scanf("%d", &y1);
    printf("Digite o valor de x2: ");
    scanf("%d", &x2);
    printf("Digite o valor de y2: ");
    scanf("%d", &y2);
    
    distancia = pow(pow((x2 - x1), 2) + pow((y2 - y1), 2), 0.5);
    
    printf("A distancia entre os dois pontos é igual a %d", distancia);
    
    return 0;
}
