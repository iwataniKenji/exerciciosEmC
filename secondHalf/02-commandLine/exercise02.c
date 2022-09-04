#include <stdio.h> 
#include <stdlib.h>

// operações
int soma(int a, int b) {
  return a + b;
}
int subtrai(int a, int b) {
  return a - b;
}
int divide(int a, int b) {
  return a / b;
}
int multiplica(int a, int b){
  return a * b;
}

int executaOperacao(char op, int a, int b) {
  int resultado;

  switch(op) {
    case '+':
      resultado = soma(a, b);
      break;
    case '-':
      resultado = subtrai(a, b);
      break;
    case 'x':
      resultado = multiplica(a, b);
      break;
    case '/':
      resultado = divide(a, b);
      break;
  }

  return resultado;
}

// deve ser inserido 4 parâmetros
int main(int qtd, char *argv[]) {
  int val1, val2;
  char operator;

  if (qtd != 4) {
    printf("\nQuantidade de parametros incorreta");
    return 0;
  } else {
    val1 = atoi(argv[1]);
    val2 = atoi(argv[3]);

    printf ("O resultado eh: %d", executaOperacao(operator, val1, val2));
  }

  return 0;
}