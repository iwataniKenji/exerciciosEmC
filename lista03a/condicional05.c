/*
Nome: Kleverson Kenji Iwatani
Turma: AS31A - N11A 
Exercício: ESTRUTURA CONDICIONAL #05
*/

#include <stdio.h>

int main()
{
    int valor = 0;
    int dolar = 5;
    int real = 4;
    int moeda = 0;
    
    printf("Digite a moeda desejada (dolar = 1 ou real = 2): ");
    scanf("%d", &moeda);
    
    printf("Digite um valor: ");
    scanf("%d", &valor);
    
    if (moeda == 1) {
        valor = valor * real;
        printf("O valor convertido é de %d", valor);
    } else if (moeda == 2) {
        valor = valor * dolar;
        printf("O valor convertido é de %d", valor);
    }
    
    return 0;
}
