// NOME: KLEVERSON KENJI IWATANI
// RA: 2465205
// PROFESSOR: GABRIEL CANHADAS GENVIGIR

#include <stdio.h> 

void preenche_vetor(int *, int);
void verifica_primo(int, char *);
void imprime_tabela(int, int, char *);

int main() {
  int size = 5,
      integers[size],
      currentNumber,
      count;
  char isPrime[10];

  for (count = 0; count < size; count ++) {
    printf("Digite um número inteiro: ");
    scanf("%d", &currentNumber);
    preenche_vetor(&integers[count], currentNumber);
  }

  printf("\nPOSIÇÃO NO VETOR - NUMERO - PRIMO?\n");

  for (count = 0; count < size; count ++) {
    verifica_primo(integers[count], &isPrime);
    imprime_tabela(count, integers[count], &isPrime);
  }

  return 0;
}

void preenche_vetor(int *vetor, int submittedNumber) {
  *vetor = submittedNumber;
}

void verifica_primo(int number, char *isPrime) {
  int  index,
       result = 0;
  char sim[5] = "SIM",
       nao[5] = "NAO";

  // se for ímpar -> não entra no if, incrementa index e checa se há resto zero para divisão com o índice seguinte
  // se for par acima de 4 -> não é primo (incrementa result e sai do laço)
  for (index = 2; index <= number / 2; index++) {
    if (number % index == 0) {
       result++;
       break;
    }
  }
  
  if (result == 0) {
    for (index = 0; index < 3; index++) {
      *isPrime = sim[index];
      *isPrime++;
    }  
  } else {
    for (index = 0; index < 3; index++) {
      *isPrime = nao[index];
      *isPrime++;
    } 
  }
}

void imprime_tabela(int index, int number, char *isPrime) {
  printf("%d                      %d     %s\n", index, number, isPrime);
}