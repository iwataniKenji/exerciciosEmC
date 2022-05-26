/*
Nome: Kleverson Kenji Iwatani
Turma: AS31A - N11A 
Data: 05/05/2022
Exercício: ESTRUTURA DE REPETIÇÃO #1
*/

#include <stdio.h>

int main()
{
    int n = 0,
        aux = 0;
    
    printf("Digite um numero para obter sua tabuada: ");
    scanf("%d", &n);
    
    printf("Tabuada do %d", n);
    
    for(int i = 1; i <= 10; i++) {
        aux = n * i;
        printf("\n%d x %d = %d", n, i, aux);
    }
    
    return 0;
}