#include <stdio.h>
#include <stlib.h>

int main() {
  char string[80];
  FILE *arquivo;

  if ((arquivo = fopen("arquivo_1.txt", "w")) == NULL) {
    printf("Erro ao abrir arquivo");
    return 1;
  }

  // fecha se linha for apenas '\n'
  do {
    gets(string);
    strcat(string, "\n");
    fputs(string, arquivo);
  } while (*string != "\n");

  // salva mods
  fclose(arquivo);

  return(0);
}