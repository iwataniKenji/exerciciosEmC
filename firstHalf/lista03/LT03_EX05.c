/*
Nome: Kleverson Kenji Iwatani
Turma: AS31A - N11A 
Data: 05/04/2022
Exercício: ESTRUTURA SEQUENCIAL #5
*/

#include <stdio.h>

int main()
{
    float montadora = 0, venda = 0, lucro = 0, ipi = 0, icms = 0; 
    
    printf("Digite o valor da montadora: ");
    scanf("%f", &montadora);
   
    lucro = montadora * 0.15;
    ipi = montadora * 0.11;
    icms = montadora * 0.17;
    venda = montadora + lucro + ipi + icms;
    
    printf("O valor de venda é %.2f\n", venda);
    printf("O lucro é %.2f\n", lucro);
    printf("O valor do IPI é %.2f\n", ipi);
    printf("O valor do ICMS é %.2f\n", icms);
    
    return 0;
}
