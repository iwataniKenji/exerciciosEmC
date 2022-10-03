#include <stdio.h> 

int main() {
  // a) declarar variáveis a, b, c, d do tipo int
  int a, b, c, d;

  // b) declarar variáveis e, f, g, h do tipo float
  float e, f, g, h;

  // c) declarar vetor v de 10 elementos do tipo char
  char v[10];

  // d) declarar variável x do tipo int
  int x;

  // e) criar um ponteiro apontando para o endereço de a
  int *ponteiro;
  ponteiro = &a;
  
  // f) incrementar o ponteiro 20 vezes, mostrando o conteúdo do endereço apontado, em formato hexadecimal
  int i = 0;
  
  for (i = 0; i < 20; i++) {
    ponteiro++;
  }

  printf("\n%X", *ponteiro);

  // g) caso o ‘novo’ endereço para o qual o ponteiro aponta, coincida com o endereço de alguma outra variável declarada no programa, mostre uma mensagem informando cada ocorrência, da seguinte forma
}