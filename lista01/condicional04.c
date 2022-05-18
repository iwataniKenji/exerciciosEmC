/*
Nome: Kleverson Kenji Iwatani
Turma: AS31A - N11A 
Exercício: ESTRUTURA CONDICIONAL #04
*/

#include <stdio.h>

int main()
{
    int valor1 = 0;
    int valor2 = 0;
    
    printf("Digite o primeiro valor: ");
    scanf("%d", &valor1);
    
    printf("Digite o segundo valor: ");
    scanf("%d", &valor2);
    
    if (valor1 == valor2) {
        printf ("Iguais: %d", valor1);
    } else if (valor1 > valor2) {
        printf("Maior: %d", valor1);
        printf("\nMenor: %d", valor2);
    } else if (valor2 > valor1) {
        printf("Maior: %d", valor2);
        printf("\nMenor: %d", valor1);
    }

    return 0;
}
