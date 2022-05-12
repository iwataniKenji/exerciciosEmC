/*
Nome: Kleverson Kenji Iwatani
Turma: AS31A - N11A 
Data: 12/05/2022
Exercício: ESTRUTURA DE REPETIÇÃO #23
*/

#include <stdio.h>

int main() 
{
    float numerador = 480,
          total = 0;
    int denominador = 10;
    
    for (int i = 1; i <= 30; i++) {
      if(denominador % 2 == 0) {
        total = total + (numerador / denominador);

        numerador = numerador -5;
        denominador++;
      } else if (denominador % 2 == 1) {
        total = total - (numerador / denominador);

        numerador = numerador -5;
        denominador++;
      }
    }

    printf("O valor da soma é de aproximadamente %.2f", total);

    return 0;
}