#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define LIN 4
#define COL 4

// manipulação padrão
void aloca_memoria(int, int);
void prenche_matriz(int **, int, int);
void mostra_conteudo(int **, int, int);

// aritmética de ponteiros
int **prenche_matriz_ap(int **, int, int);
int **mostra_conteudo_ap(int **, int, int);
int **libera_memoria(int **, int);

int main () {
  int **mat;
  int i, j;

  mat = aloca_memoria(LIN, COL);
 
  if (mat == NULL) {
    return 0;
  }

  prenche_matriz(mat, LIN, COL);
  mostra_conteudo(mat, LIN, COL);
  mat = libera_memoria(mat, LIN);
  
  return 0;
}

// manipulação padrão
void aloca_memoria(int lin, int col) {
  int **mat;
  int i;

  // aloca um vetor de LIN ponteiros para linhas
  mat = malloc (lin * sizeof (int*));
  
  if (mat == NULL) {
    printf("\nErro na alocação de memória!");
    return NULL;
  }

  // aloca cada uma das linhas (vetores de COL inteiros)
  for (i = 0; i < lin; i++) {
    mat[i] = malloc (col * sizeof (int))
    if (mat[i] == NULL) {
      printf("\nErro na alocação de memória!");
      return NULL;
    }
  }
};
void prenche_matriz(int **mat, int lin, int col) {
  int i, j;

  srand(time(NULL));

  for (i = 0; i < lin; i++) {
    for (j = 0; j < col; j++) {
      mat[i][j] = rand() / 100 + 1;
    }
  }
};
void mostra_conteudo(int **mat, int lin, int col) {
  int i, j;

  for (i = 0; i < lin; i++) {
    for (j = 0; j < col; j++) {
      printf("%5d", mat[i][j]);
    }
    printf("\n");
  }
};

// aritmética de ponteiros
int **prenche_matriz_ap(int **mat, int lin, int col) {
  int i;

  srand(time(NULL));

  for (i = 1; i <= lin * col; i++) {
    **mat = rand() / 100 + 1;
    mat++;
  }

  return mat;
};
int **mostra_conteudo_ap(int **mat, int lin, int col) {
  int i;

  for (i = 1; i <= lin * col; i++) {
    printf("%5d", **mat);
    
    if (i % lin == 0) {
      printf("\n");
    }
  }

  return mat;
};
int **libera_memoria(int **mat, int lin) {
  int i;

  // libera a memória da matriz
  for (i = 0; i < lin; i++) {
    free(mat[i]);
  }
  free(mat);

  return NULL;
}