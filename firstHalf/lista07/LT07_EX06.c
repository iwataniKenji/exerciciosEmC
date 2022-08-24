/*
Nome: Kleverson Kenji Iwatani
Turma: AS31A - N11A 
Data: 07/06/2022
Exercício: STRINGS #06
*/

#include <stdio.h>
#include <string.h>

int main() 
{
    char string[30],
         character;
    int i = 0;
    
    printf("Digite uma string qualquer: ");
    gets(string);
    
    printf("Digite um caractere qualquer: ");
    scanf("%c", &character);
    
    for(i = 0; i < strlen(string); i++) {
        if (string[i] == character) {
            string[i] = ' ';
        }
    }
    
    puts(string);
    
    return 0;
}