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
    int   linhaDeProducao[LINHASDEPRODUCAO][EQUIPAMENTOS],
          lin = 0,
          col = 0,
          menorGasto = 0,
          maiorGasto = 0,
          equipamentoEscolhido = 0,
          linhaEscolhida = 0,
          linhaDeMenorConsumo = 0,
          somaDeGastos = 0,
          somaDeGastosAux = 0,
          horas = 8,
          dias = 25,
          kwTotal = 0;
    float despesaPeloConsumo = 0,
          despesaTotal = 0,
          despesaDoIcms = 0,
          despesaDoPis = 0,
          despesaDoCofins = 0,
          icms = 0.31,
          pis = 0.0125,
          cofins = 0.0509;

    // gerando gasto aleatório
    for(lin = 0; lin < LINHASDEPRODUCAO; lin++) {
      for (col = 0; col < EQUIPAMENTOS; col++) {
        linhaDeProducao[lin][col] = rand() % 81 + 75;
      }
    }

    // 1 - listando gasto individual
    printf("1 - Consumo individual por equipamento:");
    printf("\n\n          | Maquina 1 | Maquina 2 | Maquina 3 | Maquina 4 | Maquina 5 | Maquina 6 |");
    printf("\n----------------------------------------------------------------------------------");
    for(lin = 0; lin < LINHASDEPRODUCAO; lin++) {
        printf("\nLinha %2d  |", lin + 1);
      for (col = 0; col < EQUIPAMENTOS; col++) {
        printf(" %4dkw/h  |", linhaDeProducao[lin][col]);
      }
    }

    // 2 - retornando equipamento MAIS econômico da indústria
    for(lin = 0; lin < LINHASDEPRODUCAO; lin++) {
      for (col = 0; col < EQUIPAMENTOS; col++) {
        if (lin == 0 && col == 0) {
          menorGasto = linhaDeProducao[lin][col];
          equipamentoEscolhido = EQUIPAMENTOS + 1;
          linhaEscolhida = LINHASDEPRODUCAO + 1;
        } else if (linhaDeProducao[lin][col] < menorGasto) {
          menorGasto = linhaDeProducao[lin][col];
          equipamentoEscolhido = EQUIPAMENTOS + 1;
          linhaEscolhida = LINHASDEPRODUCAO + 1;
        }
      }
    }
    printf("\n\n2 - Com %dkw/h, a máquina %d da linha de produção %d e a mais econômica.", menorGasto, equipamentoEscolhido, linhaEscolhida);

    // 3 - retornando equipamento MENOS econômico de cada posição de máquina
    printf("\n\n3 - Equipamento menos econômico em cada posição:\n");
    for(col = 0; col < EQUIPAMENTOS; col++) {
      for (lin = 0; lin < LINHASDEPRODUCAO; lin++) {
        if (lin == 0) {
          maiorGasto = linhaDeProducao[lin][col];
        } else if (linhaDeProducao[lin][col] > maiorGasto) {
          maiorGasto = linhaDeProducao[lin][col];
        }
        if (lin == LINHASDEPRODUCAO - 1) {
          printf("\nNa ordem %d, %d é o menos econômico.", col + 1, maiorGasto);
        }
      }
    }

    // 4 - apresentando a media de consumo em cada uma das linhas de produção
    printf("\n\n4 - Média de consumo por linha de produção:\n");
    for(lin = 0; lin < LINHASDEPRODUCAO; lin++) {
      for (col = 0; col < EQUIPAMENTOS; col++) {
        if (col == 0) {
          somaDeGastos = 0;
          somaDeGastos = linhaDeProducao[lin][col];
        } else {
          somaDeGastos = somaDeGastos + linhaDeProducao[lin][col];
        }
        if (col == EQUIPAMENTOS - 1) {
          printf("\nA média de consumo da linha %2d é de %d", lin + 1, somaDeGastos / EQUIPAMENTOS);

          if (lin == 0) {
            linhaDeMenorConsumo = lin;
            somaDeGastosAux = somaDeGastos;
          } else if (somaDeGastos < somaDeGastosAux) {
            linhaDeMenorConsumo = lin;
            somaDeGastosAux = somaDeGastos;
          }
        }
      }
    }

    // 5 - retornando a linha que possui menor consumo
    printf("\n\n5 - A linha de produção %d tem o menor consumo.", linhaDeMenorConsumo + 1);

    // 6 - entregando o valor da fatura mensal da indústria
    for(lin = 0; lin < LINHASDEPRODUCAO; lin++) {
      for (col = 0; col < EQUIPAMENTOS; col++) {
        kwTotal = kwTotal + linhaDeProducao[lin][col];
      }
    }

    // calculo do gasto relativo
    if (kwTotal > 15000) {
      despesaPeloConsumo = ((kwTotal - 15000) * 1.73) + (500 * 1.25) + (10000 * 1.08);
    } else if (kwTotal > 10000) {
      despesaPeloConsumo = ((kwTotal - 10000) * 1.25) + (10000 * 1.08);
    } else {
      despesaPeloConsumo = kwTotal * 1.08;
    }

    // calculo dos impostos
    despesaDoIcms = despesaPeloConsumo * icms;
    despesaDoPis = despesaPeloConsumo * pis;
    despesaDoCofins = despesaPeloConsumo * cofins;

    // imprimindo valores das despesas
    printf("\n\n6 - Fatura do mês:");
    printf("\n\nValor do ICMS      | R$%8.2f", despesaDoIcms);
    printf("\nValor do PIS/PASEP | R$%8.2f", despesaDoPis);
    printf("\nValor do COFINS    | R$%8.2f", despesaDoCofins);
    printf("\nValor total        | R$%8.2f", despesaPeloConsumo);

    // 7 - retornando custo de produção em cada linha para 14 horas de produção

    // outra informação

    return 0;
}