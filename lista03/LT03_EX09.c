/*
Nome: Kleverson Kenji Iwatani
Turma: AS31A - N11A 
Data: 06/04/2022
Exercício: ESTRUTURA SEQUENCIAL #9
*/

#include <stdio.h>

int main()
{
    float horasDeViagem = 0, velMedia = 0, qtdGalao = 0;
    
    printf("Digite o tempo gasto da viagem em horas: ");
    scanf("%f", &horasDeViagem);
    printf("Digite a velocidade media em km/h: ");
    scanf("%f", &velMedia);
    
    qtdGalao = (horasDeViagem * velMedia) / 12 / 5;
    
    printf("Serão necessários %.f galões de 5 litros para a viagem", qtdGalao);
    
    return 0;
}
