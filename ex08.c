/* 
* Aluno: Pedro Gomes
* Exercício: 08
* Descrição: advinhador de números.
* Data: 17/09/2026
*/

#include <stdio.h>
#include <stdlib.h>

int maint(){

    int user, number=rand() % 101;

    printf("Escolha um numero entre 1 e 100");scanf("%d",&number);

    while (user!=number)
    {
        if (user<number)
        {
            printf("Errado, o numero e maior\n");
            printf("Escolha um numero entre 1 e 100");scanf("%d",&number);
        }
        else if (user>number)
        {
            printf("Errado, o numero e mmenor\n");
            printf("Escolha um numero entre 1 e 100");scanf("%d",&number);
        }
    }

    printf("Correto o numero e %d",number);
    
    return 0;
}
