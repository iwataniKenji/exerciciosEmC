/*
Nome: Kleverson Kenji Iwatani
Turma: AS31A - N11A 
Exercício: FIX03_EX07
*/

#include <stdio.h>

int main()
{
    int valor = 0;
    
    printf("Digite um número inteiro: ");
    scanf("%d", &valor);
    
    if (valor > 0)  {
        printf("Valor positivo");
    } else if (valor < 0) {
        printf("Valor negativo");
    } else {
        printf("Valor neutro");
    }
    
    return 0;
}
