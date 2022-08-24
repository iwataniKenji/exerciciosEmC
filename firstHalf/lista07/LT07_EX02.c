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
    char name[30];
    int i = 0;
    
    printf("Digite alguma palavra: ");
    gets(name);

    for(i = 0; i < strlen(name); i++) {
        if (name[i] == '-') {
            name[i] = ' ';
        }
    }
    
    puts(name);
    
    return 0;
}