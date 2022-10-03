// NOME: KLEVERSON KENJI IWATANI
// RA: 2465205
// PROFESSOR: GABRIEL CANHADAS GENVIGIR

#include <stdio.h> 

void separa_numero_float(float, int *, float *);

int main() {
  int integerPart;
  float number, fractionalPart;

  printf("Digite um numero: ");
  scanf("%f", &number);

  separa_numero_float(number, &integerPart, &fractionalPart);

  printf("O valor da parte inteira e a parte fracionaria é, respectivamente, %d, %.2f.", integerPart, fractionalPart);

  return 0;
}

void separa_numero_float(float number, int *integerPart, float *fractionalPart) {
  *integerPart = (int)number;
  *fractionalPart = number - *integerPart; 
}