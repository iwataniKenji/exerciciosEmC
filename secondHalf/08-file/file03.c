#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
  FILE *arquivo;
  char *ptr;
  char temp[50];

  arquivo = fopen("calc.txt", "r");

  // fgets -> leitura de string
  while (fgets(temp, 50, arquivo) != NULL) {

    ptr = strtok(temp, "+-/x");
    
    while (ptr) {
      // lê apenas os números
      printf("\n%s", ptr);
      ptr = strtok(NULL, "+-/x");
    }
  }

  return 0;
}