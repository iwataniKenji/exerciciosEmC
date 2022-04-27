/*
Nome: Kleverson Kenji Iwatani
Turma: AS31A - N11A 
Exercício: ESTRUTURA CONDICIONAL MÚLTIPLA #03
*/

#include <stdio.h>

int main()
{
    int salario = 0;
    int codigo = 0;
    
    printf("Digite o salario: ");
    scanf("%d", &salario);
    
    printf("Digite o codigo: ");
    scanf("%d", &codigo);
    
    if (codigo == 101) {
        salario = salario * 1.1;
    } else if (codigo == 102) {
        salario = salario * 1.2;
    } else if (codigo == 103) {
        salario = salario * 1.3;
    } else {
        salario = salario * 1.4;  
    }
    
    printf ("O salário acrescido será de: %d", salario);
    
    return 0;
}
