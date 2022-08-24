#include<stdio.h>

int verifica(int num);

int main() {
  int number;

  printf("\nVerifica se um numero e positivo, negativo ou zero\n");
  printf("Digite um numero: ");
  scanf("%d", &number);

  printf("O resultado é %d", verifica(number));
}

int verifica(int num) {
  if (num == 0) {
    return 0;
  } else if (num > 0){
    return 1;
  } else {
    return -1;
  }
}