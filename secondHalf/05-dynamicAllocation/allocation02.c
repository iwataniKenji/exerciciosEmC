#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
  // matriz -> 2 ponteiros
  int **matriz, lin, col, i, j;

  srand(time(NULL));

  printf("\nQuantas linhas possuira a matriz? ");
  scanf("%d", &lin);

  printf("\nQuantas colunas possuira a matriz? ");
  scanf("%d", &col);

  // alocação das linhas
  matriz = malloc(lin * sizeof(int));

  // alocação das colunas
  for (i = 0; i < lin; i++) {
    matriz[i] = malloc(col * sizeof(int));
  }

  for (i = 0; i < lin; i++) {
    for (j = 0; j < col; j++) {
      matriz[i][j] = rand() / 100 + 1;
    }
  }

  for (i = 0; i < lin; i++) {
    for (j = 0; j < col; j++) {
      printf("%d ", vetor[i][j]);
    }
    printf("\n");
  }

  return 0;
}