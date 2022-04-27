/*
Nome: Kleverson Kenji Iwatani
Turma: AS31A - N11A 
Exercício: FIX03_EX06
*/

#include <stdio.h>

int main()
{
    int valor = 0;
    
    printf("Digite um número: ");
    scanf("%d", &valor);

    if (valor % 2 == 0) {
        printf("O número é par");
    } else {
        printf("O número é ímpar");
    }
    
    return 0;
}