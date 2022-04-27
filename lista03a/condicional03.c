/*
Nome: Kleverson Kenji Iwatani
Turma: AS31A - N11A 
Exercício: ESTRUTURA CONDICIONAL #03
*/

#include <stdio.h>

int main()
{
    int ladoA = 0;
    int ladoB= 0;
    int ladoC = 0;
    
    printf("Digite o valor do ladoA do triangulo: ");
    scanf("%d", &ladoA);
    
    printf("Digite o valor do ladoB do triangulo: ");
    scanf("%d", &ladoB);
    
    printf("Digite o valor do ladoC do triangulo: ");
    scanf("%d", &ladoC);
    
    if (ladoA < (ladoB + ladoC) && ladoB < (ladoA + ladoC) && ladoC < (ladoB + ladoA)) {
        printf("É um triangulo");
    } else {
        printf("Não é um triangulo");
    }

    return 0;
}
