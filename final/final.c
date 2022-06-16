/*
Nome: Kleverson Kenji Iwatani
Turma: AS31A - N11A 
Data: 16/06/2022
Exercício: Você é funcionário da empresa Economy Energia e foi designado para fazer um levantamento de dados inicial nas linhas de produção de uma grande indústria metalúrgica. Este levantamento vai embasar uma consultoria para propor processos de economia de energia nesta indústria
*/

#include <stdio.h>
#include <stdlib.h>
#define EQUIPAMENTOS 6
#define LINHASDEPROD 10

int main() 
{
    int linhaDeProducao[LINHASDEPROD][EQUIPAMENTOS],
        lin = 0,
        col = 0;
    
    // gerando gasto aleatório
    for(lin = 0; lin < LINHASDEPROD; lin++) {
      for (col = 0; col < EQUIPAMENTOS; col++) {
        linhaDeProducao[lin][col] = rand() % 81 + 75;
      }
    }

    // listando gasto individual
    printf("Consumo individual por equipamento:");
    printf("\n\n           | Maquina 1 | Maquina 2 | Maquina 3 | Maquina 4 | Maquina 5 | Maquina 6 |");
    printf("\n ----------------------------------------------------------------------------------");
    for(lin = 0; lin < LINHASDEPROD; lin++) {
        printf("\n Linha %2d  |", lin + 1);
      for (col = 0; col < EQUIPAMENTOS; col++) {
        printf("   %4d    |", linhaDeProducao[lin][col]);
      }
    }

    // consumo individual por equipamento

    return 0;
}