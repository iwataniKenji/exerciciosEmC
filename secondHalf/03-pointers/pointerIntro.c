#include<stdio.h>
#include<stdlib.h>

int main() {
  int Q;  
  int *vetor, i;
  int *p;

  printf("\nPreenche um vetor de inteiros\n");
  printf("\nQuantos elementos o vetor tera? ");
  scanf("%d", &Q);

  // malloc -> memory allocation -> alocação dinâmica de memória
  // sizeof(int) -> tamanho em bytes do int
  vetor = malloc(Q * sizeof(int));

  // vetor -> aponta para o primeiro índice
  p = vetor;

  for(i = 0; i < Q; i++) {
    *p = i + 3;
    p++;
  }
  
  printf("\n\n");

  return 0;
}