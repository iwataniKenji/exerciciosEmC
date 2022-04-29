/*
Nome: Kleverson Kenji Iwatani
Turma: AS31A - N11A 
Data: 29/07/2022
Exercício: ESTRUTURA DE REPETIÇÃO #4
*/

#include <stdio.h>

int main()
{
    int num = 0;

    printf("Digite um numero positivo inteiro: ");
    scanf("%d", &num);

    for(int i = 0; i <= num; i++) {
      if(i % 2 == 1) {
        printf("%d ", i);    
      }
    }
    
    return 0;
}