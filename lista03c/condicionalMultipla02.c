/*
Nome: Kleverson Kenji Iwatani
Turma: AS31A - N11A 
Exercício: ESTRUTURA CONDICIONAL MÚLTIPLA #02
*/

#include <stdio.h>

int main()
{
    int dia = 0;

    printf("Digite um número de 1 a 7 referente aos dias da semana: ");
    scanf("%d", &dia);
    
    switch (dia) {
        case 1:
        printf ("Domingo");
        break;

        case 2:
        printf ("Segunda");
        break;

        case 3:
        printf ("Terça");
        break;

        case 4:
        printf ("Quarta");
        break;

        case 5:
        printf ("Quinta");
        break;

        case 6:
        printf ("Sexta");
        break;

        case 7:
        printf ("Sábado");
        break;

        default:
        printf("Dia da semana não encontrado");    
    }
   
    return 0;
}
