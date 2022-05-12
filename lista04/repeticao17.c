/*
Nome: Kleverson Kenji Iwatani
Turma: AS31A - N11A 
Data: 12/05/2022
Exercício: ESTRUTURA DE REPETIÇÃO #17
*/

#include <stdio.h>

int main() 
{
    int value = 0,
        count = 0,
        result = 0;

    printf("Digite um numero para retornar seu fatorial: ");
    scanf("%d", &value);

    for(count = value; count > 0; count--) {
      if (result > 0) {
        result = result * count;
      }
    
      if (result == 0) {
        result = value;
      }
    }

    printf("%d! e igual a %d", value, result);

    return 0;
}