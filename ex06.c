/*
* Aluno: Pedro Gomes
* Exercício: 06
* Descrição: Teste entre cálculos com while x com fórmula.
* Data: 16/09/2026
*/

#include <stdio.h>

main(){

int soma = 0, N ;

printf("Defina N:");scanf("%d",&N);

/*Com while:*/
int i = 1;
while (i <= N) {
    soma += i;
    i++;
}

/*Com fórmula matemática:*/
int sum = N * (N + 1) / 2;

printf("%d\n",soma);
printf("%d",sum);
return 0;
/*A mais eficiente é com a fórmula matemática 
já que economiza processos e linhas de código*/
}