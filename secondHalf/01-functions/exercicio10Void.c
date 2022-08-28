#include<stdio.h>

void verificaVoid(int num, int *r);

int main() {
  int number, response;

  printf("\nVerifica se um numero e positivo, negativo ou zero\n");
  printf("Digite um numero: ");
  scanf("%d", &number);

  verificaVoid(number, &response);
  switch(response) {
    case 0:
      printf("\nZero\n");
      break;
    case 1:
      printf("\nPositivo\n");
      break;
    default:
      printf("\nNegativo\n");
  }
}

void verificaVoid(int num, int *r) {
  if (num == 0) {
    *r = 0;
  } else if (num > 0){
    *r = 1;
  } else {
    *r = -1;
  }
}