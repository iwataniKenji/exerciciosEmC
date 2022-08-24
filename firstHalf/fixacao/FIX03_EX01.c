/*
Nome: Kleverson Kenji Iwatani
Turma: AS31A - N11A 
Exercício: FIX03_EX01
*/

#include <stdio.h>

int main()
{
    int valor = 0;
    
    printf("Digite um valor: ");
    scanf("%d", &valor);

    if (valor == 0) {
        printf("O valor é igual a 0");
    } else {
        printf("O valor NÃO é igual a 0");
    }
    
    return 0;
}
