// NOME: KLEVERSON KENJI IWATANI
// RA: 2465205
// PROFESSOR: GABRIEL CANHADAS GENVIGIR

#include <stdio.h> 

// a) Quais serão os valores de x, y e *p no comando printf?
// resposta: x = 3; y = 4; *p = 4

int x, y, *p;
y = 0; // y = 0
p = &y; // p = endereço de y
x = *p; // x = 0
x = 4; // x = 4 
(*p)++; // *p e y = 1
--x; // x = 3
(*p) += x; // *p e y = 4
printf("x=%d y=%d *p=%d", x, y, *p);

// b) Qual valor de c será impresso no comando printf?
// resposta: 17

int a=5, b=12, c;
int *p;
int *q;
p = &a; // p = endereço de a
q = &b; // q = endereço de b
c = *p + *q; // c = 5 + 12 = 17
printf("c = %d", c);

// c) O que significa o operador asterisco em cada um dos seguintes casos:

int *p; // *p -> ponteiro para inteiro
printf("%d",*p); // *p -> valor de onde o ponteiro p aponta
*p = x*5; // *p -> conteúdo de onde o p aponta; x * 5 -> operador de multiplicação
printf("%d",*(p+1));

// d) Quais serão os valores de x, y e p ao final do trecho de código abaixo?
// resposta: x = 3; y = 4; p = endereço de y

// e) Os trechos de código abaixo possuem alguns erros. Identifique- os e reescreva indicando como deveriam ser?

// 1) 
int main() {
  int x, *p;
  x = 100;
  p = &x; // correção -> ponteiro recebe endereço, não o valor
  printf("Valor de p: %d", *p);

  return 0;
}

// 2)
void troca (int *i, int *j) {
  int temp; // correção -> não é ponteiro de inteiro, mas sim um valor de inteiro
  temp = *i;
  *i = *j;
  *j = temp;
}

// 3)
int main() {
  char *a, *b;
  a = "abacate";
  b = "uva";

  if (*a < *b) // correção -> deve haver o asterisco para buscar o CONTEÚDO da string
    printf ("%s vem antes de %s no dicionário", a, b);
  else
    printf ("%s vem depois de %s no dicionário", a, b);
  
  return 0;
}

// f) Assumindo que o endereço de num foi atribuído a um ponteiro pnum, quais das seguintes expressões são verdadeiras?

pnum; // ponteiro
*pnum; // valor do ponteiro
num; // valor
&num; // endereço num

// 1) num == &pnum -> falso 
// 2) num == *pnum -> verdadeiro
// 3) pnum == *num -> falso
// 4) pnum == &num -> verdadeiro

// g) Se i e j são variáveis inteiras e p e q são ponteiros para inteiros, quais das seguintes expressões de atribuição são ilegais?

int i, j;
int *p, *q;

// 1) p = &i; -> ok
// 2) *q = &j; -> ilegal
// 3) p = &*&i; -> ok
// 4) i = (*&)j; -> ilegal
// 5) i = *&*&j; -> ilegal
// 6) q = &p; -> ilegal
// 7) i = (*p) ++ + *q; -> ok

// h) Seja a seguinte sequência de instruções em um programa C:

int *pti;
int i = 10;
pti = &i; // *pti = 10

// Qual afirmativa é falsa?

// 1) verdadeiro
// 2) verdadeiro
// 3) verdadeiro
// 4) verdadeiro
// 5) falso