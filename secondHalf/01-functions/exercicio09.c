#include <stdio.h> 

int verificaSePar(int value);

int main() {
  int number;

  printf("Digite um número: ");
  scanf("%d", &number);

  printf("O resultado é %d", verificaSePar(number));
}

int verificaSePar(int value) {
  if (value % 2 == 0) {
    return 1;
  } else {
    return 0;
  }
}