/*
Nome: Kleverson Kenji Iwatani
Turma: AS31A - N11A 
Exercício: FIX03_EX05
*/

#include <stdio.h>

int main()
{
    int num1 = 0,
        num2 = 0;
    
    printf("Digite o primeiro valor: ");
    scanf("%d", &num1);
    
    printf("Digite o segundo valor: ");
    scanf("%d", &num2);

    if (num1 > num2) {
        printf("%d", num1 - num2);
    } else {
        printf("%d", num1 + num2);
    }
    
    return 0;
}
