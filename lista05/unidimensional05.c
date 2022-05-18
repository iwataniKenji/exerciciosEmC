/*
Nome: Kleverson Kenji Iwatani
Turma: AS31A - N11A 
Data: 18/05/2022
Exercício: VARIÁVEIS UNIDIMENSIONAIS #05
*/

#include <stdio.h>
#define TAMANHO_DO_VETOR 4

int main() 
{
    int vet[TAMANHO_DO_VETOR],
        i,
        valoresNegativos = 0;

    for (i = 0; i < TAMANHO_DO_VETOR; i++) {
        printf("Digite um elemento para o vetor: ");
        scanf("%d", &vet[i]);
        if(vet[i] < 0) {
            valoresNegativos++;
        }
    } 

    printf("A quantidade de valores negativos é %d", valoresNegativos);
    
    return 0;
}