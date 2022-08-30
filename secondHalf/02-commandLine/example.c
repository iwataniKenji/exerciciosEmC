#include <stdio.h> 
#include <stdlib.h>

// nome da função -> espaço -> parâmetros

int main(int argc, char *argv[]) {
  int i;

  if (argc == 1) {
    printf("\nQuantidade de parâmetros incorreta")
  } else {
    for (i = 0; i < argc; i++) {
      // atof -> ascii to float
      valor = atof(argv[i])
      printf("\n%f", valor);
    }
  }

  return 0;
}