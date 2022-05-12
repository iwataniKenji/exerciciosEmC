/*
Nome: Kleverson Kenji Iwatani
Turma: AS31A - N11A 
Data: 12/05/2022
Exercício: ESTRUTURA DE REPETIÇÃO #18
*/

#include <stdio.h>

int main() 
{
    float numerador = 1,
          denominador = 1,
          total = 0;
    
    while (numerador <= 99 && denominador <= 50) {
      total = total + (numerador / denominador);

      numerador = numerador + 2;
      denominador++;
    }

    printf("O valor da soma é de aproximadamente %.1f", total);

    return 0;
}