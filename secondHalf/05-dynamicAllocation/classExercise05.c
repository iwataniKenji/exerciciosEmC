#include <stdio.h>
#include <stdlib.h>

void convertIntegerToBinary(int);

int main() {
  int number;

  printf("Digite um número inteiro:");
  scanf("%d", &number);

  convertIntegerToBinary(number);

  return 0;
}

void convertIntegerToBinary(int number) {
  int *bin, i;

  bin = malloc(5 * sizeof(int));

  if (bin == NULL) {
    printf("\nErro na alocação de memória");
    return;
  }

  for (i = 0; number > 0; i++) {
    bin[i] = number % 2;
    number = number / 2;
  }

  for (i = i - 1; i >= 0; i--) {
    printf("%d", bin[i]);
  }
}