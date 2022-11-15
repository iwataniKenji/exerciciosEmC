// NOME: KLEVERSON KENJI IWATANI
// RA: 2465205
// PROFESSOR: GABRIEL CANHADAS GENVIGIR

#include <stdio.h>
#include <stdlib.h>

// declara uma "struct" com 4 variáveis de tipo primitivo
struct l { 
  int cod;
  int quantidade;
  char descricao[50];
  float valorunit;
};

// define um alias para o "strut l" chamado "tp_lista"
typedef struct l tp_lista; 

int main() {
  // declara um array "compras" do tipo da struct
  tp_lista *compras;
  int i, qtd, fim;
  
  qtd = 2;
  
  // checa se a alocação de memória tem valor nulo
  if ((malloc(qtd * sizeof(tp_lista)) == NULL)) {
    // caso sim, imprime mensagem de erro e sai do programa
    printf("\nSem espaco de memoria\n"); 
    // parâmetro 1 indica encerramento anormal do código  
    exit(1);
  }
  
  // array "compras" recebe o endereço de memória que foi alocada, especificado pelo tamanho em bytes que a struct ocupa vezes a quantidade de elementos do array
  compras = malloc(qtd * sizeof(tp_lista));

  for (i = 0; i < qtd; i = i + 1) {
    printf("Codigo --> ");
    scanf("%d",&compras[i].cod);
    printf("Quantidade --> ");
    scanf("%d",&compras[i].quantidade);
    printf("Descricao --> ");
    fflush(stdin);
    gets(compras[i].descricao);
    printf("Valor unitario --> ");
    scanf("%f",&compras[i].valorunit);
    printf("\nDeseja continuar? 1 para SIM ou 2 para NAO: ");
    scanf("%d",&fim);
    
    if(fim == 1) { 
      // realoca memória, dobrando o número de bytes que o array "compras" possui
      // código corrigido -> compras = realloc(compras, qtd * 2 * sizeof(tp_lista));
      realloc(compras, 2 * sizeof(tp_lista));
      qtd = qtd + 2;
    }
    
    system("cls");
  } 
  
  for (i = 0; i < qtd; i = i + 1) {
    printf("\nCodigo ----------> %d", compras[i].cod);
    printf("\nQuantidade ------> %d", compras[i].quantidade);
    printf("\nDescricao -------> %s", compras[i].descricao);
    printf("\nValor unitario --> %2.2f", compras[i].valorunit);
  }
  
  return 0;
}