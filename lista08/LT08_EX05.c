/*
Nome: Kleverson Kenji Iwatani
Turma: AS31A - N11A 
Data: 17/06/2022
Exercício: FUNÇÃO #2
*/

#include <stdio.h>

int main() 
{
    int   raio = 0;
    float pi = 3.14;

    void calcularArea(int raio) {
      printf("\nPara um círculo de raio igual a %d, a área e igual a aproximadamente %.1f cm²", raio, pi * (raio * raio));
    }

    void calcularPerimetro(int raio) {
      printf("\nPara um círculo de raio igual a %d, a área e igual a aproximadamente %.2f cm", raio, 2 * pi * raio);
    }
   
    printf("Digite o valor do raio do círculo: ");
    scanf("%d", &raio);

    // chamada das funções
    calcularArea(raio);
    calcularPerimetro(raio);

    return 0;
}