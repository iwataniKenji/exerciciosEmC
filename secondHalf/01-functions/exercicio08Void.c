#include <stdio.h> 
#include <stdlib.h>

float mediaAritimetica(float, float, float);
float mediaPonderada(float, int, float, int, float, int);
float mediaHarmonica(float, float, float);
void lerTresNumeros(float *, float *, float *);
void lerTresNumerosTresPesos(float *, int *, float *, int *, float *, int *);

int main() {
  float n1, n2, n3, media;
  int p1, p2, p3;
  char opcao;

  do {
    printf("\nCalcula medias\n");
    printf("\nEscolha sua opção:");
    printf("\nA - media aritmética");
    printf("\nP - media ponderada");
    printf("\nH - media harmônica\n");
    fflush(stdin); // limpa conteúdo do buffer
    scanf("%c", &opcao);
  } while (opcao != 'A' && opcao != 'P' && opcao != 'H');  
  
  switch(opcao) {
    case 'A':
      lerTresNumeros(&n1, &n2, &n3);
      printf("\nA media aritimetica e %0.1f", mediaAritimetica(n1, n2, n3));
    case 'P':
      lerTresNumerosTresPesos(&n1, &p1, &n2, &p2, &n3, &p3);
      printf("\nA media ponderada e %0.1f", mediaPonderada(n1, p1, n2, p2, n3, p3));
    case 'H':
      lerTresNumeros(&n1, &n2, &n3);
      printf("\nA media harmonica e %0.1f", mediaHarmonica(n1, n2, n3));
  }
}

float mediaAritimetica(float a, float b, float c) {
  return (a + b + c) / 3;
}

float mediaPonderada(float a, int pa, float b, int pb, float c, int pc) {
  return (a * pa + b * pb + c * pc) / (pa + pb + pc);
}

float mediaHarmonica(float a, float b, float c) {
  return 3 / (1 / a + 1 / b + 1 / c);
}

void lerTresNumeros(float *a, float *b, float *c) {
  float nota;
  printf("\nDigite a primeira nota: ");
  scanf("%f", &nota);
  *a = nota;

  printf("\nDigite a segunda nota: ");
  scanf("%f", &nota);
  *b = nota;

  printf("\nDigite a terceira nota: ");
  scanf("%f", &nota);
  *c = nota;
}

void lerTresNumerosTresPesos(float *a, int *pa, float *b, int *pb, float *c, int *pc) {
  float nota;
  int peso;

  printf("\nDigite a primeira nota: ");
  scanf("%f", &nota);
  *a = nota;
  printf("\nDigite o peso da primeira nota: ");
  scanf("%d", &peso);
  *pa = peso;

  printf("\nDigite a segunda nota: ");
  scanf("%f", &nota);
  *b = nota;
  printf("\nDigite o peso da primeira nota: ");
  scanf("%d", &peso);
  *pb = peso;

  printf("\nDigite a terceira nota: ");
  scanf("%f", &nota);
  *c = nota;
  printf("\nDigite o peso da primeira nota: ");
  scanf("%d", &peso);
  *pc = peso;
}