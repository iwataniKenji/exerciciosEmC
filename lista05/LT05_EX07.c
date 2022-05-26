/*
Nome: Kleverson Kenji Iwatani
Turma: AS31A - N11A 
Data: 19/05/2022
Exercício: VARIÁVEIS UNIDIMENSIONAIS #07
*/

#include <stdio.h>
#define DIAS_DO_MES 30

int main() 
{
    int   i,
          inferiorTemperaturaMedia = 0;
    float vet[DIAS_DO_MES],
          menorTemperatura,
          maiorTemperatura,
          totalTemperatura,
          mediaTemperatura;

    for(i = 0; i < DIAS_DO_MES; i++) {
      printf("Digite a temperatura do dia %d: ", i + 1);
      scanf("%f", &vet[i]);

      if (i == 0) {
        menorTemperatura = vet[i];
        maiorTemperatura = vet[i];
        totalTemperatura = vet[i];
      } else {
        // substituir menor temperatura
        if (vet[i] < menorTemperatura) {
          menorTemperatura = vet[i];
        }

        // substituir maior temperatura
        if (vet[i] > maiorTemperatura) {
          maiorTemperatura = vet[i];
        }

        // incrementando o total
        totalTemperatura = totalTemperatura + vet[i];
      }
    }

    mediaTemperatura = totalTemperatura / DIAS_DO_MES;

    for(i = 0; i < DIAS_DO_MES; i++) {
      if (vet[i] < mediaTemperatura) {
        inferiorTemperaturaMedia++;
      }
    }

    printf("%.1f foi a menor temperatura do mês\n", menorTemperatura);
    printf("%.1f foi a maior temperatura do mês\n", maiorTemperatura);
    printf("%.1f foi a temperatura media mensal\n", mediaTemperatura);
    printf("A temperatura foi inferior à media mensal em %d dias", inferiorTemperaturaMedia);
    
    return 0;
}