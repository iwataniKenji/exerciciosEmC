/*
Nome: Kleverson Kenji Iwatani
Turma: AS31A - N11A 
Data: 05/05/2022
Exercício: ESTRUTURA DE REPETIÇÃO #6
*/

#include <stdio.h>

int main() 
{
    float nota = 0,
          sum = 0;
    int count = 1;

    while(count <= 10) {
      printf("Insira a nota do aluno %d: ", count);
      scanf("%f", &nota);
      sum += nota;
      count++;
    }

    printf("A media e %.1f", sum / 10);

    return 0;
}