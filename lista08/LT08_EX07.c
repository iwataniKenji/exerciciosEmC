/*
Nome: Kleverson Kenji Iwatani
Turma: AS31A - N11A 
Data: 17/06/2022
Exercício: FUNÇÃO #4
*/

#include <stdio.h>

int main() 
{
    float altura = 0;
    char  sexo;

    void calcularPesoIdeal(float altura, char sexo) {
      if (sexo == 'M' || sexo == 'm') {
        printf("Para uma pessoa do sexo masculino com altura de %.2fm, o seu peso ideal é aproximadamente %.2f Kg", altura, (72.7 * altura) - 58);
      } else if (sexo == 'F' || sexo == 'f') {
        printf("Para uma pessoa do sexo feminino com altura de %.2fm, o seu peso ideal é aproximadamente %.2f Kg", altura, (62.1 * altura) - 44.7);
      } 
    }

    printf("\nDigite o sexo da pessoa (M para masculino | F para feminino): ");
    scanf("%c", &sexo);

    printf("Digite a altura da pessoa: ");
    scanf("%f", &altura);
    
    calcularPesoIdeal(altura, sexo);

    return 0;
}