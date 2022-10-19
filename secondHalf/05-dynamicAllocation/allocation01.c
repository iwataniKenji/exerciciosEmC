#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
  int *vetor, dimensao;

  srand(time(NULL));

  printf("\nQual a dimensao do vetor? ");
  scanf("%d", &dimensao);

  // malloc -> alocação de memoria
  vetor = malloc(dimensao * sizeof(int));

  for (i = 0; i < dimensao; i++) {
    vetor[i] = rand() / 100 + 1;
  }

  for (i = 0; i < dimensao; i++) {
    printf("%d", vetor[i]);
  }

  // realocação -> muda dimensão do array
  vetor = realloc(vetor, dimensao * 2 * sizeof(int));

  for (; i < dimensao * 2; i++) {
    vetor[i] = rand() / 100 + 1;
  }

  for (i = 0; i < dimensao * 2; i++) {
    printf("%d", vetor[i]);
  }

  // limpa memoria do array
  free(vetor);

  return 0;
}

/* notation */

// checa se possui memoria suficiente para alocar
if (malloc (dimensao * sizeof(int) == NULL)) {
  printf("Erro na alocação de memoria");
  return NULL;
}