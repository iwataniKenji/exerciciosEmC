/*
Nome: Kleverson Kenji Iwatani
Turma: AS31A - N11A 
Data: 17/06/2022
Exercício: FUNÇÃO #3
*/

#include <stdio.h>

int main() 
{
    float fahrenheit = 0,
          celcius = 0;

    void converterParaCelcius(float temperatura) {
      celcius = ((temperatura - 32) / 9) * 5;
      printf("%.f graus Fahrenheit e igual a %.f graus Celsius.", temperatura, celcius);
    }

    printf("Digite o valor da temperatura em Fahrenheit: ");
    scanf("%f", &fahrenheit);

    converterParaCelcius(fahrenheit);

    return 0;
}