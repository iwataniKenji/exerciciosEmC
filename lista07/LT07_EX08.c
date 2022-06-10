/*
Nome: Kleverson Kenji Iwatani
Turma: AS31A - N11A 
Data: 07/06/2022
Exercício: STRINGS #08
*/

#include <stdio.h>
#include <string.h>

int main() 
{
    char name[3][30],
         aux[30],
         character;
    int i = 0,
        j = 0;
    
    // escrevendo nomes
    printf("Digite o primeiro nome completo: ");
    gets(name[0]);

    printf("Digite o segundo nome completo: ");
    gets(name[1]);

    printf("Digite o terceiro nome completo: ");
    gets(name[2]);

    // ordenando nomes
    for(i = 0; i < 3; i++) {
        for(j = i; j < 3; j++) {
            if( strcmp(name[i], name[j]) > 0 ) {
                strcpy(aux, name[i]);
                strcpy(name[i], name[j]);
                strcpy(name[j], aux);
            }
        }
    }   

    // imprimindo nomes
    for(i = 0; i < 3; i++) {
        printf("\n%s", name[i]);    
    }
    
    return 0;
}