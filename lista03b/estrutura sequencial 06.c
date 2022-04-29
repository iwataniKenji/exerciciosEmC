/*
Nome: Kleverson Kenji Iwatani
Turma: AS31A - N11A 
Data: 05/04/2022
Exercício: ESTRUTURA SEQUENCIAL #6
*/

#include <stdio.h>

int main()
{
    float velocidade = 0, velocidadeConvertida = 0;
    
    printf("Informe a velocidade em km/h: ");
    scanf("%f", &velocidade);
    
    velocidadeConvertida = velocidade / 3.6;
    
    printf("Sua velocidade em m/s é %.f", velocidadeConvertida);
    
    return 0;
}
