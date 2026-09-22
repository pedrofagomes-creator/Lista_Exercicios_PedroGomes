/* 
* Aluno: Pedro Gomes
* Exercicio: 29
* Descricao: escopo de variáveis.
* Data: 22/09/2026
*/
#include <stdio.h>

void funcao() {
    int x = 10;

    printf("x dentro da funcao: %d\n", x);
}

int main() {
    int x = 5;

    funcao();

    printf("x dentro do main: %d\n", x);

    return 0;
}