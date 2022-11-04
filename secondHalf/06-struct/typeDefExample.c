#include<stdio.h>

struct a {
  int ra;
  float n1, n2, n3, n4;
} typedef tp_aluno;

int main() {

  // 5 elementos do tipo aluno
  tp_aluno turma[5];

  // dinâmico
  tp_aluno *turma;
  
  return 0;
}