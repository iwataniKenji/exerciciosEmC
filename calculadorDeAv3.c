/*
Nome: Kleverson Kenji Iwatani
Data: 23/06/2022
Exercício: CALCULADOR DE AV3
*/

#include <stdio.h>

int main()
{
    int   nota1 = 0,
          nota2 = 0,
          total = 0;

    printf("\nDigite a primeira nota: ");
    scanf("%d", &nota1);
    
    printf("Digite a segunda nota: ");
    scanf("%d", &nota2);
    
    total = 180 - nota1 - nota2;
    
    if(total > 0) {
        printf("\nPrecisa de %d pontos", total);
    } else {
        printf("\nPassou sem terceira prova");
    }

    return 0;
}
