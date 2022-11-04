#include<stdio.h>

struct aluno {
  int ra;
  float n1, n2, n3, n4;
}

int main() {

  struct aluno primeiroAluno;

  printf("\nDigite o RA do aluno: ");
  scanf("%d", &primeiroAluno.ra);

  return 0;
}