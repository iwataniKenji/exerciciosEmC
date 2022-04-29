/*
Nome: Kleverson Kenji Iwatani
Turma: AS31A - N11A 
Data: 05/04/2022
Exercício: ESTRUTURA SEQUENCIAL #7
*/

#include <stdio.h>
#include <math.h>

int main()
{
    int a = 0, b = 0, c = 0, raiz1 = 0, raiz2 = 0;
    
    printf("Digite o valor de a: ");
    scanf("%d", &a);
    printf("Digite o valor de b: ");
    scanf("%d", &b);
    printf("Digite o valor de c: ");
    scanf("%d", &c);
    
    raiz1 = (-b + pow(pow(b, 2) -4 * a * c, 0.5)) / 2 * a;
    raiz2 = (-b - pow(pow(b, 2) -4 * a * c, 0.5)) / 2 * a;
    
    printf("As raízes da equação são %d e %d", raiz1, raiz2);
    
    return 0;
}
