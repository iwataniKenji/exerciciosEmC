/*
Nome: Kleverson Kenji Iwatani
Turma: AS31A - N11A 
Data: 12/05/2022
Exercício: ESTRUTURA DE REPETIÇÃO #22
*/

#include <stdio.h>

int main() 
{
    float numerador = 1000,
          total = 0;
    int denominador = 1;
    
    while (denominador <= 50) {
      if (denominador % 2 == 1) {
        total = total + (numerador / denominador);

        numerador = numerador - 3;
        denominador++;

      } else if (denominador % 2 == 0) {
        total = total - (numerador / denominador);

        numerador = numerador - 3;
        denominador++;
      }
    }

    printf("O valor da soma é de aproximadamente %.1f", total);

    return 0;
}