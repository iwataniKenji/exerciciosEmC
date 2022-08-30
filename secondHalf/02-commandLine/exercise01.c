#include <stdio.h> 
#include <stdlib.h>

float mediaAritimetica(float, float, float);
float mediaPonderada(float, int, float, int, float, int);
float mediaHarmonica(float, float, float);

int main(int qtd, char *parametros[]) {
  float n1, n2, n3, media;
  int p1, p2, p3;
  char opcao;

  if (qtd != 2 && qtd != 5 && qtd != 7) {
    printf("\nQuantidade de parâmetros incorreta");
    return 0;
  } else {
    if (qtd == 2) {
      if (parametros[1][0] == '?') {
        printf("\nPrograma para calcular medias\n");
        printf("\nVoce deve escolher uma das opções abaixo:");
        printf("\nA - media aritmética");
        printf("\nP - media ponderada");
        printf("\nH - media harmônica");
        printf("\n? - mostra instruções de ajuda");
        printf("\n\nExemplos das entradas de dados:");
        printf("\nexercise01 A 5 5 5 -> calcula media aritimetica");
        printf("\nexercise01 H 5 5 5 -> calcula media harmonica");
        printf("\nexercise01 P 5 2 5 3 5 5 -> calcula media ponderada");
        printf("\n");
        system("pause"); // programa pausa e aguarda usuário digitar algo
      }
    } else if (qtd == 5) {
      opcao = parametros[1][0]; // posição 0 da palavra
      n1 = atof(parametros[2]);
      n2 = atof(parametros[3]);
      n3 = atof(parametros[4]);
      switch(opcao) {
        case 'A':
          printf("\nA media aritimetica e %0.1f", mediaAritimetica(n1, n2, n3));
          break;
        case 'H':
          printf("\nA media harmonica e %0.1f", mediaHarmonica(n1, n2, n3));
          break;
      }
    } else {
      opcao = parametros[1][0];
      n1 = atof(parametros[2]);
      p1 = atoi(parametros[3]);
      n2 = atof(parametros[4]);
      p2 = atoi(parametros[5]);
      n3 = atof(parametros[6]);
      p3 = atoi(parametros[7]);
      printf("\nA media ponderada e %0.1f", mediaPonderada(n1, p1, n2, p2, n3, p3));
    }
  }

  return 0;
}

float mediaAritimetica(float a, float b, float c) {
  return (a + b + c) / 3;
}

float mediaPonderada(float a, int pa, float b, int pb, float c, int pc) {
  return (a * pa + b * pb + c * pc) / (pa + pb + pc);
}

float mediaHarmonica(float a, float b, float c) {
  return 3 / (1 / a + 1 / b + 1 / c);
}