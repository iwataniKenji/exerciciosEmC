/*
Nome: Kleverson Kenji Iwatani
Turma: AS31A - N11A 
Data: 05/05/2022
Exercício: ESTRUTURA DE REPETIÇÃO #7
*/

#include <stdio.h>

int main() 
{
    float nota = 0,
          sum = 0;
    int numDeAlunos = 0;

    printf("Informe a quantidade de alunos: ");
    scanf("%d", &numDeAlunos);

    for(int i = 0; i < numDeAlunos; i++) {
      printf("Digite a nota do aluno %d: ", i+1);
      scanf("%f", &nota);
      sum += nota;
    }

    printf("Para uma turma de %d a media e %.1f", numDeAlunos, sum / numDeAlunos);

    return 0;
}