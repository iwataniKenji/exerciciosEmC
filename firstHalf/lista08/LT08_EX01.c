/*
Nome: Kleverson Kenji Iwatani
Turma: AS31A - N11A 
Data: 15/06/2022
Exercício: PROCEDIMENTO #1
*/

#include <stdio.h>

int main() 
{
    float valor = 0,
          valorModificado = 0,
          indice = 0,
          diferenca = 0;
    
    void atualizarValor(int VAL, int IND, int DIF) {
        valorModificado = VAL * IND;
        diferenca = DIF + valorModificado - valor;
    }

    printf("Digite o valor positivo a ser modificado: ");
    scanf("%f", &valor);
    
    printf("\nDigite o índice do número que deseja modificar: ");
    scanf("%f", &indice);

    atualizarValor(valor, indice, diferenca);

    printf("Para o valor original igual a %.f e índice igual a %.f, o valor atualizado é %.f e a diferença é %.f", valor, indice, valorModificado, diferenca);

    return 0;
}