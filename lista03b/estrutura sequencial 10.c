/*
Nome: Kleverson Kenji Iwatani
Turma: AS31A - N11A 
Data: 06/04/2022
Exercício: ESTRUTURA SEQUENCIAL #10
*/

#include <stdio.h>
#include <math.h>

int main()
{
    float altura = 0,
          raio = 0,
          lataDeTinta = 0,
          areaDoTanque = 0,
          pi = 3.1415,
          qtdLatas = 0,
          custo = 0;
    
    printf("Digite o valor da altura do tanque em metros: ");
    scanf("%f", &altura);
    printf("Digite o valor do raio do tanque em metros: ");
    scanf("%f", &raio);
    printf("Digite o valor da lata de tinta: ");
    scanf("%f", &lataDeTinta);
    
    areaDoTanque = 2 * pi * raio * altura + 2 * pi * pow(raio , 2);
    qtdLatas = areaDoTanque / 3 / 5;
    custo = qtdLatas * lataDeTinta;
    
    printf("Para um tanque de %.2f metros de altura e %.2f metros de raio, considerando o preço de R$ %.2f, são necessárias %.2f e o custo é de R$ %.2f", altura, raio, lataDeTinta, qtdLatas, custo);

    return 0;
}
