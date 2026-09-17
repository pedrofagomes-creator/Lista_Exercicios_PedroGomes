
/*
* Aluno: Pedro Gomes
* Exercício: 04
* Descrição: Lista as senhas da fila.
* Data: 16/09/2026
*/


#include <stdio.h> 
int main() { 

    int pessoas; 

    printf("Quantas pessoas estao na fila? "); scanf("%d", &pessoas); 

    for (int i = 1; i <= pessoas; i++) 

    { printf("Senha %d\n", i); } 

    return 0; }