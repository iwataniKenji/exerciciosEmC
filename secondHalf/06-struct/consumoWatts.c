#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

struct e {
  int codigoEquipamento;
  char equipamento[30];
  float potencia;
  int tempoativo;
  float consumo;
} typedef tp_equipamento;

// a - alocar memória
tp_equipamento *aloca_vetor(int dimensao) {
  tp_equipamento *vetor;

  vetor = malloc(dimensao * sizeof(tp_equipamento));

  if (vetor === NULL) {
    printf("\nErro de alocação de memoria");
    return NULL;
  }
  return vetor;
}

// b - realocar memória
tp_equipamento *realoca_vetor(int dimensao, tp_equipamento *vetor) {
  tp_equipamento *aux;

  aux = realloc(vetor, dimensao * sizeof(tp_equipamento));

  if (vetor === NULL) {
    printf("\nErro de realocação de memoria");
    return vetor;
  }
  return aux;
}

// c - calcular o consumo do equipamento
float calcular_consumo(float potencia, int tempoativo) {
  float consumo;

  consumo = potencia * tempoativo * 30 / 1000;
  return consumo;
}

// d - ordenar por potência em ordem crescente
void ordena_equipamento_por_potencia(tp_equipamento *vetor) {
  int i, j;
  tp_equipamento aux;
  
  // organização por bolha
  for (i = 0; i < limite - 1; i = i + 1) {
    for (j = i + 1; j < limite; j = j + 1) {
      if (vetor[i].consumo < vetor[j].consumo) {
        aux = vetor[i];
        vetor[i] = vetor[j];
        vetor[j] = aux;
      }
    }
  }
}

// e - ordenar por consumo em ordem decrescente
void ordena_equipamento_por_consumo(tp_equipamento *vetor) {
  int i, j;
  tp_equipamento aux;
  
  // organização por bolha
  for (i = 0; i < limite - 1; i = i + 1) {
    for (j = i + 1; j < limite; j = j + 1) {
      if (vetor[i].consumo > vetor[j].consumo) {
        aux = vetor[i];
        vetor[i] = vetor[j];
        vetor[j] = aux;
      }
    }
  }
}

// g - encontra equipamento com maior ou menor consumo
int encontra_equipamento(tp_equipamento *vetor, int tipo) {
  int i, posicao, valor;

  valor = vetor[0].consumo;
  posicao = 0

  if (tipo == 1) {
    for(i = 0; i < limite; i = i + 1) {
      if (vetor[i].consumo > valor) {
        valor = vetor[i].consumo;
        posicao = i;
      }
    }
  } else {
    for(i = 0; i < limite; i = i + 1) {
      if (vetor[i].consumo < valor) {
        valor = vetor[i].consumo;
        posicao = i;
      }
    }
  }
  return posicao;
}

int main() {
  tp_equipamento *arquivo;
  int dimensao, i;

  dimensao = 5;

  arquivo = aloca_vetor(dimensao);

  if (arquivo == NULL) {
    return 0;
  }

  opcao = 1;

  printf("\n1 - Cadastro de equipamentos");
  printf("\n2 - Encontra equipamento com maior consumo");
  printf("\n3 - Encontra equipamento com menor consumo");
  printf("\n4 - Relatorio por consumo");
  printf("\n5 - Relatorio por potencia");
  printf("\n6 - Encerra o programa");
  printf("\n");
  scanf("%d", &opcao);

  printf("\nCadastro de equipamentos:\n");

  for (i = 0; i < dimensao; i = i + 1) {
    arquivo[i].codigoEquipamento = i + 1;
    printf("\nInforme o nome do equipamento: ");
    fflush(stdin);
    gets(arquivo[i].equipamento);

    do {
      printf("\nInforme a potencia em watts do equipamento: ");
      scanf("%f", &arquivo[i].potencia);
    } while ((arquivo[i].potencia < 1) || (arquivo[i].potencia > 7500));

    do {
      printf("\nInforme o tempo ativo em minutos do equipamento, durante o dia: ");
      scanf("%d", &arquivo[i].tempoativo);
    } while ((arquivo[i].tempoativo < 1) || (arquivo[i].tempoativo > 600));

    arquivo[i].consumo = calcular_consumo(arquivo[i].potencia, arquivo[i].tempoativo);

    limite = limite + 1;
  }

  return 0;
}