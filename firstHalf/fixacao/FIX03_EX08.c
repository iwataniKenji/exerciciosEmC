/*
Nome: Kleverson Kenji Iwatani
Turma: AS31A - N11A 
Exercício: FIX03_EX08
*/

#include <stdio.h>

int main()
{
    int opcao = 0;
    float base = 0,
          altura = 0,
          pi = 3.14,
          raio = 0,
          area = 0;
    
    printf("O que deseja calcular:\n1) a area de um triangulo\n2) a area de um circulo\n3) a area de um cubo\n\n");
    scanf("%d", &opcao);
    
    switch (opcao) {
        case (1):
            printf("\nDigite o valor da base do triangulo: ");
            scanf("%f", &base);
            printf("Digite o valor da altura do triangulo: ");
            scanf("%f", &altura);
            printf("A area do triangulo e de %f", base * altura / 2);
            break;
            
        case (2):
            printf("\nDigite o valor do raio da circunferencia: ");
            scanf("%f", &raio);
            printf("A area do circulo e de %f", pi * (raio * raio));
            break;
            
        case (3):
            printf("\nDigite o valor da area de um quadrado: ");
            scanf("%f", &area);
            printf("A area do cubo e de %f", area * 6);
            break;
            
        default:
            printf("\n Opção não encontrada");
    }
    
    return 0;
}
