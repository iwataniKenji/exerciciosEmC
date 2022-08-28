#include <stdio.h> 

void verificaSeParVoid(int value, int *pointer);

int main() {
  int number, response;

  printf("Digite um número: ");
  scanf("%d", &number);

  verificaSeParVoid(number, &response);
  switch (response) {
    case 1:
      printf("\nÉ par");
      break;
    case 0:
      printf("\nÉ impar");
      break;
  }
}

void verificaSeParVoid(int value, int *pointer) {
  if (value % 2 == 0) {
    *pointer = 1;
  } else {
    *pointer = 0;
  }
}