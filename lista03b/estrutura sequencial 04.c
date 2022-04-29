/*
Nome: Kleverson Kenji Iwatani
Turma: AS31A - N11A 
Data: 05/04/2022
Exercício: ESTRUTURA SEQUENCIAL #4
*/

#include <stdio.h>

int main()
{
    int sec = 0, min = 0, hours = 0, resto = 0;
    
    printf("Digite a duração do evento em segundos: ");
    scanf("%d", &sec);
    
    hours = sec / 3600;
    resto = sec % 3600;
    min = resto / 60;
    resto = resto % 60;
    sec = resto;
    
    printf("O tempo correspondente é:%2.d:%2.d:%2.d", hours, min, sec);
    
    return 0;   
}
