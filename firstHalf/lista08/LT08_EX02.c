/*
Nome: Kleverson Kenji Iwatani
Turma: AS31A - N11A 
Data: 15/06/2022
Exercício: PROCEDIMENTO #2
*/

#include <stdio.h>

int main() 
{
    float avaliacao1 = 0,
          avaliacao2 = 0,
          media = 0;
    
    int calcularMedia(int av1, int av2) {
       media = (av1 + av2) / 2;
    }

    char apresentarMensagem(int med) {
       if (med >= 6) {
        printf ("Parabéns, você foi aprovado!");
       }
    }

    printf("Digite o valor da primeira avaliação: ");
    scanf("%f", &avaliacao1);
    
    printf("Digite o valor da segunda avaliação: ");
    scanf("%f", &avaliacao2);

    calcularMedia(avaliacao1, avaliacao2);
    apresentarMensagem(media);

    return 0;
}