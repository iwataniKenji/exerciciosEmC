#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define LIN 4
#define COL 4

void aloca_memoria();
void prenche_matriz();
void prenche_matriz_aritimetica();
void mostra_conteudo();
void mostra_conteudo_aritimetica();

int main () {
  int **mat;
  int i, j;

  // aloca um vetor de LIN ponteiros para linhas
  mat = malloc (LIN * sizeof (int*));

  // aloca cada uma das linhas (vetores de COL inteiros)
  for (i = 0; i < LIN; i++) {
    mat[i] = malloc (COL * sizeof (int));
  }

  // percorre matriz
  for (i = 0; i < LIN; i++) {
    for (j = 0; j < COL; j++) {
      mat[i][j] = i;
    }
  }

  for (i = 0; i < LIN; i++) {
    for (j = 0; j < COL; j++) {
      printf("%5d", mat[i][j]);
    }
    printf("\n");
  }

  // libera a memória da matriz
  for (i = 0; i < LIN; i++) {
    free(mat[i]);
  }
  free(mat);
  
  return 0;
}