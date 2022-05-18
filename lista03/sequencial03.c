/*
Nome: Kleverson Kenji Iwatani
Turma: AS31A - N11A 
Data: 05/04/2022
Exercício: ESTRUTURA SEQUENCIAL #3
*/

#include <stdio.h>
#include <math.h>

int main()
{
    float p1 = 0, p2 = 0, p3 = 0, media = 0;
    
    printf("Digite o nota da p1: ");
    scanf("%f", &p1);
    printf("Digite o nota da p2: ");
    scanf("%f", &p2);
    printf("Digite o nota da p3: ");
    scanf("%f", &p3);
    
    media = ((p1 * 2) + (p2 * 3) + (p3 * 5)) / 10;
    
    printf("A media ponderada é %f", media);
    
    return 0;
}
