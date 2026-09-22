/* 
* Aluno: Pedro Gomes
* Exercicio: 40
* Descricao: operador bit a bit.
* Data: 22/09/2026
*/

#include <stdio.h>

int main() {
    int numero;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    printf("Dobro: %d\n", numero << 1);
    printf("Divisao por 2: %d\n", numero >> 1);

    return 0;
}