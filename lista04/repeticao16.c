/*
Nome: Kleverson Kenji Iwatani
Turma: AS31A - N11A 
Data: 12/05/2022
Exercício: ESTRUTURA DE REPETIÇÃO #16
*/

#include <stdio.h>

int main() 
{
    float numerador = 0,
        denominador = 0,
        qtdCriancas = 0;
    
    printf("Digite um numerador: ");
    scanf("%f", &numerador);

    printf("\nDigite um denominador: ");
    scanf("%f", &denominador);

    while (denominador == 0) {
      printf("Erro: divisão por zero. Digite outro denominador: ");
      scanf("%f", &denominador);
    }

    printf("Para um numerador igual a %.1f e denominador igual a %.1f, o resultado é %.1f.", numerador, denominador, numerador / denominador);

    return 0;
}