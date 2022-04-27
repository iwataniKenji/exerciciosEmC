/*
Nome: Kleverson Kenji Iwatani
Turma: AS31A - N11A 
Exercício: FIX03_EX03
*/

#include <stdio.h>

int main()
{
    int salario = 0;
    int salarioMinimo = 1212;
    
    printf("Digite o valor do seu salário: ");
    scanf("%d", &salario);

    if (salario < salarioMinimo * 2) {
        salario = salario * 1.10;
    }
    
    printf("O seu salário final é de %d", salario);
    
    return 0;
}
