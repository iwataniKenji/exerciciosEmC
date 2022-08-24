/*
Nome: Kleverson Kenji Iwatani
Turma: AS31A - N11A 
Data: 07/06/2022
Exercício: STRINGS #04
*/

#include <stdio.h>
#include <string.h>

int main() 
{
    char word[30];
    int i = 0;
    
    printf("Digite alguma palavra: ");
    gets(word);

    for(i = 0; i < strlen(word); i++) {
        if (word[i] == '-') {
            word[i] = ' ';
        }
    }
    
    puts(word);
    
    return 0;
}