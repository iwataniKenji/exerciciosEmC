// NOME: KLEVERSON KENJI IWATANI
// RA: 2465205
// PROFESSOR: GABRIEL CANHADAS GENVIGIR

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// 1 - declaração das structs
struct P {
  char codigopaciente[5];
  char nome[50];
  char telefone[15];
  int idade;
  char sexo[1];
} typedef tipoPaciente;

struct M {
  char codigomedico[5];
  char nome[50];
  char especialidade[30];
  float valorconsulta;
} typedef tipoMedico;

struct C {
  char codigopaciente[5];
  char codigomedico[5];
  char dataconsulta[8];
  char diadasemana[10];
} typedef tipoConsulta;

tipoPaciente *aloca_paciente(int);
tipoMedico *aloca_medico(int);
tipoConsulta *aloca_consulta(int);

char *verifica_paciente(tipoPaciente *, int);
char *verifica_medico(tipoMedico *, int);
void preenche_consulta(tipoPaciente *, tipoMedico *, tipoConsulta *, int, int, int);

int main() {
  tipoPaciente *paciente;
  tipoMedico *medico;
  tipoConsulta *consulta;
  int i, qtdPaciente, qtdMedico, qtdConsulta, fim, valor;

  qtdPaciente = 1;
  qtdMedico = 1;
  qtdConsulta = 1;

  paciente = aloca_paciente(qtdPaciente);
  medico = aloca_medico(qtdMedico);
  consulta = aloca_consulta(qtdConsulta);
  
  if (paciente == NULL) {
    return 0;
  }

  if (medico == NULL) {
    return 0;
  }

  if (consulta == NULL) {
    return 0;
  }

  // 2 - função para preencher dados de um vetor do tipo PACIENTE
  for (i = 0; i < qtdPaciente; i = i + 1) {
    printf("Digite o código do %dº paciente: ", i + 1);
    scanf("%s", &paciente[i].codigopaciente);

    printf("Digite o nome do %dº paciente: ", i + 1);
    scanf("%s", &paciente[i].nome);

    printf("Digite o telefone do %dº paciente: ", i + 1);
    scanf("%s", &paciente[i].telefone);

    printf("Digite a idade do %dº paciente: ", i + 1);
    scanf("%d", &paciente[i].idade);

    printf("Digite o sexo do %dº paciente (M para masculino e F para feminino): ", i + 1);
    scanf("%s", &paciente[i].sexo);

    printf("\nDeseja continuar? 1 para SIM ou 2 para NAO: ");
    scanf("%d", &fim);

    if (fim == 1) {
      qtdPaciente++;
      paciente = realloc(paciente, qtdPaciente * sizeof(tipoPaciente));
    }
  }

  fim = 0;

  for (i = 0; i < qtdMedico; i = i + 1) {
    printf("Digite o código do %dº médico: ", i + 1);
    scanf("%s", &medico[i].codigomedico);

    printf("Digite o nome do %dº médico: ", i + 1);
    scanf("%s", &medico[i].nome);

    printf("Digite a especialidade do %dº médico: ", i + 1);
    scanf("%s", &medico[i].especialidade);

    printf("Digite o valor da consulta: ", i + 1);
    scanf("%f", &medico[i].valorconsulta);

    if (fim == 1) {
      qtdPaciente++;
      paciente = realloc(paciente, qtdPaciente * sizeof(tipoPaciente));
    }
  }

  preenche_consulta(paciente, medico, consulta, qtdPaciente, qtdMedico, qtdConsulta);

  for (i = 0; i < qtdConsulta; i = i + 1) {
    printf("\nPACIENTE.: %s", consulta[i].codigopaciente);
    printf("\nMEDICO...: %s", consulta[i].codigomedico);
    printf("\nDATA.....: %s", consulta[i].dataconsulta);
    printf("\nDIA......: %s", consulta[i].diadasemana);
  }

  return 0;
}

tipoPaciente *aloca_paciente(int dimensao) {
  tipoPaciente *vetor;

  vetor = malloc(dimensao * sizeof(tipoPaciente));

  if (vetor == NULL) {
    printf("\nErro de alocação de memoria");
    return NULL;
  }

  return vetor;
}

tipoMedico *aloca_medico(int dimensao) {
  tipoMedico *vetor;

  vetor = malloc(dimensao * sizeof(tipoMedico));

  if (vetor == NULL) {
    printf("\nErro de alocação de memoria");
    return NULL;
  }

  return vetor;
}

tipoConsulta *aloca_consulta(int dimensao) {
  tipoMedico *vetor;

  vetor = malloc(dimensao * sizeof(tipoConsulta));

  if (vetor == NULL) {
    printf("\nErro de alocação de memoria");
    return NULL;
  }

  return vetor;
}

// 3 - função para verificar se PACIENTE já está cadastrado no vetor
char *verifica_paciente(tipoPaciente *paciente, int quantidade) {
  char codigopaciente[5];
  int i;

  printf("\nDigite o código do paciente que deseja verificar: ");
  scanf("%s", &codigopaciente);

  for (i = 0; i < quantidade; i = i + 1) {
    if (strcmp(paciente[i].codigopaciente, codigopaciente) == 0) {
      return paciente[i].codigopaciente;
    }
  } 

  return NULL;
}

// 4 - função para verificar se MÉDICO já está cadastrado no vetor
char *verifica_medico(tipoMedico *medico, int quantidade) {
  char codigomedico[5];
  int i;

  printf("\nDigite o código do médico que deseja verificar: ");
  scanf("%s", &codigomedico);

  for (i = 0; i < quantidade; i = i + 1) {
    if (strcmp(medico[i].codigomedico, codigomedico) == 0) {
      return medico[i].codigomedico;
    }
  } 

  return NULL;
}

// 5 - função para preencher vetor CONSULTA
void preenche_consulta(tipoPaciente *paciente, tipoMedico *medico, tipoConsulta *consulta, int qtdPaciente, int qtdMedico, int qtdConsulta) {
  char *foundPacienteId, *foundMedicoId;
  int i;

  foundPacienteId = verifica_paciente(paciente, qtdPaciente);
  foundMedicoId = verifica_medico(medico, qtdMedico);

  if (foundPacienteId == NULL || foundMedicoId == NULL) {
    printf("\nPaciente ou médico não encontrado(s)");
  } else {
    for (i = 0; i < qtdConsulta; i = i + 1) {
      strcpy(consulta[i].codigopaciente, foundPacienteId);

      strcpy(consulta[i].codigomedico, foundMedicoId);

      printf("Digite a data da consulta: ");
      scanf("%s", &consulta[i].dataconsulta);

      printf("Digite o dia da semana: ");
      scanf("%s", &consulta[i].diadasemana);
    }
  }
}
