#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void preenche_vetor_01(int *, int);
void encontra_numeros(int *, int *);
void imprime_resultado(int *, int *);

int main() {
	int vetor_original[10], vetor_resultado[21], i;
	int *ptr_original;
	int *ptr_resultado;

	ptr_original = vetor_original;

	preenche_vetor_01(ptr_original, 10);
	printf("\nVetor original\n");

	ptr_original = vetor_original;

	for(i = 0; i < 10; i = i + 1) {
    printf("%3d", *ptr_original);
    ptr_original++;
  }

	printf("\n");
	ptr_original = vetor_original;
	ptr_resultado = vetor_resultado;

	for(i = 0; i < 10; i = i + 1) {
    encontra_numeros(ptr_resultado,ptr_original);
    ptr_resultado = vetor_resultado;
    imprime_resultado(ptr_resultado,ptr_original);
    ptr_resultado = vetor_resultado;
    ptr_original++;
  }

	return 0;
}

void preenche_vetor_01(int *vetor_original, int tamanho) {
	int x, i, j, n;

	srand(time(NULL));
	
  i = 0;
	
  while (i < tamanho) {
    do {
      x = rand()/1000;
    } while((x <= 1) || (x >= 20));

    n = 0;
    
    for(j = 0; j < i; j++) {
      if (*vetor_original == x) {
        n = 1;
        j = i + 1;
      }
    }
      
    if (n == 0) {
      *vetor_original = x;
      vetor_original++;
      i++;
    }
  }
}

void encontra_numeros(int *vetor_resultado, int *numero) {
	int i, total;

	for(i = 0, total = 1; i < *numero; i = i + 1) {
    *vetor_resultado = total;
    vetor_resultado++;
    total = total + 2;
  }
}

void imprime_resultado(int *vetor_resultado, int *numero) {
	int i, total;

	printf("\n%3d^2 = ", *numero);

	for (i = 0, total = 0; i < *numero-1; i = i + 1) {
    printf("%3d +",*vetor_resultado);
    total = total + *vetor_resultado;
    vetor_resultado++;
  }

	printf("%3d ",*vetor_resultado);
	total = total + *vetor_resultado;
	printf("=%4d",total);
}