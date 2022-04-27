/*
Nome: Kleverson Kenji Iwatani
Turma: AS31A - N11A 
Exercício: ESTRUTURA CONDICIONAL #01
*/

#include <stdio.h>

int main()
{
    int valor = 0;
    
    printf("Digite um numero aleatório: ");
    scanf("%d", &valor);
    
    if (valor >= 0) {
        printf("Positivo");
    } else {
        printf("Negativo");
    }

    return 0;
}
