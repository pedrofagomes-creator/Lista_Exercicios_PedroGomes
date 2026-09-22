/* 
* Aluno: Pedro Gomes
* Exercicio: 35
* Descricao: tamanho dos tipos com sizeof.
* Data: 22/09/2026
*/

#include <stdio.h>

int main() {
    int *ponteiro;

    printf("int: %zu bytes\n", sizeof(int));
    printf("float: %zu bytes\n", sizeof(float));
    printf("double: %zu bytes\n", sizeof(double));
    printf("char: %zu byte\n", sizeof(char));
    printf("ponteiro para int: %zu bytes\n", sizeof(ponteiro));

    return 0;
}