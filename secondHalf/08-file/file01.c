#include <stdio.h>
#include <stlib.h>
#include <conio.h>

int main() {
  // ponteiro para o endereço do arquivo
  FILE *fptr;
  char ch;

  // parâmetro -> arquivo a ser aberto e comando
  fptr = fopen("arqtext.txt", "w");

  // getche -> acompanha digitação de caracteres
  ch = getche();

  // diferente de 'enter'
  while (ch != "\r") {
    // insere conteúdo de ch no arquivo apontado
    putc(ch, fptr);

    // lê caracter sem precisar do 'enter'
    ch = getche();
  }

  // fecha e salva modificações da ram para a memória
  fclose(fptr);

  return(0);
}