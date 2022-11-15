// NOME: KLEVERSON KENJI IWATANI
// RA: 2465205
// PROFESSOR: GABRIEL CANHADAS GENVIGIR

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define Q 20 // 20 alunos

struct A {
  char nome[50];
  int ra;
  float notas[2];
  float media;
  char situacao[4]; //APR ou REP
} typedef tipoaluno;

void cadastra_alunos(tipoaluno *);
void lista_alunos(tipoaluno *);
void pesquisa_aluno(tipoaluno *);

// 1 - função main()
int main() {
  tipoaluno aluno[Q];
  int op;
  
  cadastra_alunos(&aluno[Q]);
  
  do {
    printf("\nEscolha uma das opções abaixo: ");
    printf("\n1 - Lista todos os alunos");
    printf("\n2 - Pesquisa por RA");
    printf("\n3 - Encerra\n");
    scanf("%d",&op);
    
    switch (op) {
      case 1:
        lista_alunos(&aluno[Q]);
        break;
      case 2:
        pesquisa_aluno(&aluno[Q]);
        break;
    }
  } while (op != 3);
  
  return 0;
}

// 2 - função para cadastramento de alunos
void cadastra_alunos(tipoaluno *aluno) {
  int i, j;
  float soma;
  
  for (j = 0; j < Q; j = j + 1) {
    printf("Digite o nome do %dº aluno: ", j+1);
    fflush(stdin);
    gets(aluno[j].nome);
    printf("Digite o RA do aluno: ");
    scanf("%d",&aluno[j].ra);
    
    for (i = 0, soma = 0; i < 2; i = i + 1) {
      printf("Digite a %dª nota do aluno: ", i+1);
      scanf("%f",&aluno[j].notas[i]); 
      soma = soma + aluno[j].notas[i];
    }
    
    aluno[j].media = soma / 2;
    
    if (aluno[j].media >= 6) 
      strcpy(aluno[j].situacao,"APR");
    else
      strcpy(aluno[j].situacao,"REP");
  } 
}

// 3 - função para listar todos os alunos
void lista_alunos(tipoaluno *aluno) {
  int i, j;

  for (j = 0; j < Q; j = j + 1) {
    printf("\n------------------------------\n");
    printf("\nAluno.....: %s",aluno[j].nome);
    printf("\nRA........: %d",aluno[j].ra);
    
    for (i = 0; i < 2; i = i + 1)
      printf("\nNota %d....: %2.2f",i+1,aluno[j].notas[i]);
    
    printf("\nMédia.....: %2.2f",aluno[j].media);
    printf("\nSituação..: %s",aluno[j].situacao);
  } 
}

// 4 - função para pesquisa por RA
void pesquisa_aluno(tipoaluno *aluno) {
  int i, j, ra;

  printf("\nDigite o número do RA para pesquisa: ");
  scanf("%d",&ra);
  
  for(j = 0; j < Q; j = j + 1) {
    if (ra == aluno[j].ra) {
      printf("\n------------------------------\n");
      printf("\nAluno.....: %s",aluno[j].nome);
      printf("\nRA........: %d",aluno[j].ra);
      
      for(i = 0; i < 2; i = i + 1)
        printf("\nNota %d....: %2.2f", i+1,aluno[j].notas[i]);
      
      printf("\nMédia.....: %2.2f",aluno[j].media);
      printf("\nSituação..: %s",aluno[j].situacao);
      ra = -1;
    }
  }
  
  if(ra != -1)
    printf("\nRA não encontrado\n");
}