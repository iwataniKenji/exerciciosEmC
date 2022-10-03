// NOME: KLEVERSON KENJI IWATANI
// RA: 2465205
// PROFESSOR: GABRIEL CANHADAS GENVIGIR

#include <stdio.h> 
#include <math.h>

int inverte_numero(int, int *);

int main () {
  int number,
      invertedNumber = 0;

  printf("Digite um numero: ");
  scanf("%d", &number);

  printf ("\nA soma do numero inserido (%d) e seu numero invertido (%d) é: %d", number, invertedNumber, inverte_numero(number, &invertedNumber));
  
  return 0;
}

int inverte_numero(int number, int *invertedNumber) {
  int   i,
        j,
        size = 1,
        tempNumber;
  float indexNumber;

  // passa número submetido ao temp para utilização
  tempNumber = number;

  // conta quantidade de casas do número introduzido
  while ((tempNumber = tempNumber / 10) > 0){
		size++;
	}

  j = size;
  tempNumber = number;

  // exemplo do resultado do indexNumber no loop abaixo:
  // size = 4 -> 1666 - (1 * 1000) = 666
  // size = 3 -> 666 - (6 * 100) = 66
  // size = 2 -> 66 - (6 * 10) = 6
  // size = 1 -> 6 - (6 * 1) = 0 (não utilizado)

  for (i = 0; i < size; i ++) {
    indexNumber = floor(tempNumber / pow(10, j - 1));
    tempNumber = tempNumber - (indexNumber * pow(10, j - 1));

    *invertedNumber = *invertedNumber + (indexNumber * pow(10, i));
    j--;
  }

  // retornar soma do numero com numero invertido
  return number + *invertedNumber;
}