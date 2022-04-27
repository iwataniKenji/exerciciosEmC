/*
Nome: Kleverson Kenji Iwatani
Turma: AS31A - N11A 
Exercício: ESTRUTURA CONDICIONAL MÚLTIPLA #01
*/

#include <stdio.h>

int main()
{
    int idade = 0;

    printf("Digite a idade da criança: ");
    scanf("%d", &idade);
    
    if (idade >= 0 && idade <= 2) {
        printf("Sala 1");
    } else if (idade >= 3 && idade <= 5) {
        printf("Sala 2");
    } else if (idade >= 6 && idade <= 8) {
        printf("Sala 3");
    } else if (idade >= 9 && idade <= 10) {
        printf("Sala 4");
    }
    
    return 0;
}
