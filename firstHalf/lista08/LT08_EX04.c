/*
Nome: Kleverson Kenji Iwatani
Turma: AS31A - N11A 
Data: 17/06/2022
Exercício: FUNÇÃO #1
*/

#include <stdio.h>

int main() 
{
    int num = 0;

    void parOuImpar(int number) {
      if (number == 0 ) {
        printf ("ZERO");
      } else if (number % 2 == 0 ) {
        printf ("PAR");
      } else {
        printf ("IMPAR");
      }
    }

    printf("Digite um número inteiro: ");
    scanf("%d", &num);

    parOuImpar(num);

    return 0;
}