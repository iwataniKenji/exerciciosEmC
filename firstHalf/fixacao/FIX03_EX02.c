/*
Nome: Kleverson Kenji Iwatani
Turma: AS31A - N11A 
Exercício: FIX03_EX02
*/

#include <stdio.h>

int main()
{
    int idade = 0;
    
    printf("Digite sua idade: ");
    scanf("%d", &idade);

    if (idade >= 18) {
        printf("Você é maior de idade");
    } else {
        printf("Você NÃO é maior de idade");
    }
    
    return 0;
}
