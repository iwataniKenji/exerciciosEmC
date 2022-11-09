// NOME: KLEVERSON KENJI IWATANI
// RA: 2465205
// PROFESSOR: GABRIEL CANHADAS GENVIGIR

struct dma {
  int dia;
  int mes;
  int ano;
} typedef tipoData;

int conta_diferenca_dias(tipoData, tipoData)

int main() {
  tipoData primeiraData, segundaData;

  printf("\nPRIMEIRA DATA");
  printf("\nDigite o dia da primeira data: ");
  scanf("%d", &primeiraData.dia);
  printf("Digite o mes da primeira data: ");
  scanf("%d", &primeiraData.mes);
  printf("Digite o ano da primeira data: ");
  scanf("%d", &primeiraData.ano);

  printf("\nSEGUNDA DATA");
  printf("\nDigite o dia da segunda data: ");
  scanf("%d", &segundaData.dia);
  printf("Digite o mes da segunda data: ");
  scanf("%d", &segundaData.mes);
  printf("Digite o ano da segunda data: ");
  scanf("%d", &segundaData.ano);

  printf("\nA diferenca entre as datas eh de %d dias", conta_diferenca_dias(primeiraData, segundaData));
}

int conta_diferenca_dias(tipoData primeira, tipoData segunda) {
  int diferencaDias = 0;

  return diferencaDias;
}
