/*
Nome: Kleverson Kenji Iwatani
Turma: AS31A - N11A 
Data: 05/05/2022
Exercício: ESTRUTURA DE REPETIÇÃO #5
*/

#include <stdio.h>

int main()
{
    int num = 0,
        count = 0,
        sum = 0;

    while(count < 10) {
      printf("Digite um numero inteiro: ");
      scanf("%d", &num);

      if (num < 0) {
        sum++;
      }
      count++;
    }

    printf("A quantidade de valores negativos é %d", sum);
    
    return 0;
}