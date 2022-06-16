/*
Nome: Kleverson Kenji Iwatani
Turma: AS31A - N11A 
Data: 16/06/2022
Exercício: Você é funcionário da empresa Economy Energia e foi designado para fazer um levantamento de dados inicial nas linhas de produção de uma grande indústria metalúrgica. Este levantamento vai embasar uma consultoria para propor processos de economia de energia nesta indústria
*/

#include <stdio.h>
#include <stdlib.h>
#define LINHASDEPRODUCAO 10
#define EQUIPAMENTOS 6

int main() 
{
    int linhaDeProducao[LINHASDEPRODUCAO][EQUIPAMENTOS],
        lin = 0,
        col = 0,
        gasto = 0,
        equipamentoEscolhido = 0,
        linhaEscolhida = 0;
    
    // gerando gasto aleatório
    for(lin = 0; lin < LINHASDEPRODUCAO; lin++) {
      for (col = 0; col < EQUIPAMENTOS; col++) {
        linhaDeProducao[lin][col] = rand() % 81 + 75;
      }
    }

    // listando gasto individual
    printf("1 - Consumo individual por equipamento:");
    printf("\n\n           | Maquina 1 | Maquina 2 | Maquina 3 | Maquina 4 | Maquina 5 | Maquina 6 |");
    printf("\n ----------------------------------------------------------------------------------");
    for(lin = 0; lin < LINHASDEPRODUCAO; lin++) {
        printf("\n Linha %2d  |", lin + 1);
      for (col = 0; col < EQUIPAMENTOS; col++) {
        printf(" %4dkw/h  |", linhaDeProducao[lin][col]);
      }
    }

    // retornando equipamento mais econômico
    for(lin = 0; lin < LINHASDEPRODUCAO; lin++) {
      for (col = 0; col < EQUIPAMENTOS; col++) {
        if (lin == 0 && col == 0) {
          gasto = linhaDeProducao[lin][col];
          equipamentoEscolhido = EQUIPAMENTOS + 1;
          linhaEscolhida = LINHASDEPRODUCAO + 1;
        } else if (linhaDeProducao[lin][col] < gasto) {
          gasto = linhaDeProducao[lin][col];
          equipamentoEscolhido = EQUIPAMENTOS + 1;
          linhaEscolhida = LINHASDEPRODUCAO + 1;
        }
      }
    }
    printf("\n\n2 - Com %dkw/h, a máquina %d da linha de produção %d é a mais econômica.", gasto, equipamentoEscolhido, linhaEscolhida);

    return 0;
}