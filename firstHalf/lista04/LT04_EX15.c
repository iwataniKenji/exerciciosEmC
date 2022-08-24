/*
Nome: Kleverson Kenji Iwatani
Turma: AS31A - N11A 
Data: 12/05/2022
Exercício: ESTRUTURA DE REPETIÇÃO #15
*/

#include <stdio.h>

int main() 
{
    int salario = 0,
        numFilhos = 0,
        maiorSalario = 0,
        salarioMenor3300 = 0,
        totalSalario = 0,
        qtdPessoas = 0,
        qtdCriancas = 0;
    float mediaNumFilhos = 0;
    char option = 'a';

    do {
      printf("Digite o salario: ");
      scanf("%d", &salario);

      printf("\nDigite a quantidade de filhos: ");
      scanf("%d", &numFilhos);

      if(maiorSalario == 0) {
        maiorSalario = salario;
      } else {
        if (maiorSalario < salario) {
          maiorSalario = salario;
        }
      }

      if(salario < 3300) {
        salarioMenor3300++;
      }

      totalSalario = totalSalario + salario;
      qtdCriancas = qtdCriancas + numFilhos;
      qtdPessoas++;

      printf("\nDeseja continuar? (S/N) ");
      scanf(" %c", &option);

    } while (option == 's' || option == 'S');

    printf("\nMedia do salário dos habitantes: %d", totalSalario / qtdPessoas);
    printf("\nMédia do número de filhos: %d", qtdCriancas / qtdPessoas);
    printf("\nMaior salário dos habitantes: %d", maiorSalario);
    printf("\nQuantidade com salario menor que R$ 3.300,00: %d", salarioMenor3300);

    return 0;
}