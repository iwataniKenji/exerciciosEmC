/*
Nome: Kleverson Kenji Iwatani
Turma: AS31A - N11A 
Exercício: FIX03_EX04
*/

#include <stdio.h>

int main()
{
    int bingo1 = 21,
        bingo2 = 53,
        valor1 = 0,
        valor2 = 0;
    
    printf("Digite o primeiro valor: ");
    scanf("%d", &valor1);
    
    printf("Digite o segundo valor: ");
    scanf("%d", &valor2);

    if (bingo1 == valor1 || bingo1 == valor2) {
        if (bingo2 == valor1 || bingo2 == valor2) {
            printf("BINGO!!");
        }
    }
    
    return 0;
}
