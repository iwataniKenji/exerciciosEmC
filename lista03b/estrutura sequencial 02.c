/*
Nome: Kleverson Kenji Iwatani
Turma: AS31A - N11A 
Data: 05/04/2022
Exercício: ESTRUTURA SEQUENCIAL #2
*/

#include <stdio.h>
#include <math.h>

int main()
{
    float varX = 0, resultadoQuadrado = 0, resultadoCubo =0;
    
    printf("Digite o valor de X: ");
    scanf("%f", &varX);
    
    resultadoQuadrado = pow(varX, 2);
    resultadoCubo = pow(varX, 3);
    
    printf("O resultado é%2.f e%2.f", resultadoQuadrado, resultadoCubo);
    
    return 0;
}
