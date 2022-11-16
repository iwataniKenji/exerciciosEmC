// NOME: KLEVERSON KENJI IWATANI
// RA: 2465205
// PROFESSOR: GABRIEL CANHADAS GENVIGIR

#include <stdio.h>
#include <stdlib.h>

struct dma {
  int dia;
  int mes;
  int ano;
} typedef tipoData;

int conta_diferenca_dias(tipoData, tipoData);;

int main() {
  tipoData primeiraData, segundaData;

  printf("\nPRIMEIRA DATA");
  printf("\nDigite o dia: ");
  scanf("%d", &primeiraData.dia);
  printf("Digite o mes: ");
  scanf("%d", &primeiraData.mes);
  printf("Digite o ano: ");
  scanf("%d", &primeiraData.ano);

  printf("\nSEGUNDA DATA");
  printf("\nDigite o dia: ");
  scanf("%d", &segundaData.dia);
  printf("Digite o mes: ");
  scanf("%d", &segundaData.mes);
  printf("Digite o ano: ");
  scanf("%d", &segundaData.ano);

  printf("\nA diferenca entre as datas é de %d dias", conta_diferenca_dias(primeiraData, segundaData));
}

int conta_diferenca_dias(tipoData primeiraData, tipoData segundaData) {
  int primeiraDataDias, segundaDataDias;

  primeiraDataDias = primeiraData.dia + (primeiraData.mes * 30) + (primeiraData.ano * 365);
  segundaDataDias = segundaData.dia + (segundaData.mes * 30) + (segundaData.ano * 365);

  if (primeiraDataDias > segundaDataDias) {
    return primeiraDataDias - segundaDataDias;
  } else {
    return segundaDataDias - primeiraDataDias;
  }
}