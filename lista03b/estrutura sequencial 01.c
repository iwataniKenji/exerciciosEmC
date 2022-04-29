/*
Nome: Kleverson Kenji Iwatani
Turma: AS31A - N11A 
Data: 05/04/2022
Exercício: ESTRUTURA SEQUENCIAL #1
*/

#include <stdio.h>

int main()
{
    float varA = 0, varB = 0, resultado = 0;
    
    printf("Digite o valor de A: ");
    scanf("%f", &varA);
    printf("Digite o valor de B: ");
    scanf("%f", &varB);
    
    resultado = (varA + varB) * (varA + varB);
    
    printf("O resultado é %f", resultado);
    
    return 0;
}
