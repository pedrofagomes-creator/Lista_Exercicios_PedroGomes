/* 
* Aluno: Pedro Gomes
* Exercicio: 31
* Descricao: saudação personalizada.
* Data: 22/09/2026
*/

#include <stdio.h>

int main() {
    char nome[100];

    printf("Digite seu nome completo: ");
    fgets(nome, sizeof(nome), stdin);

    printf("Olá, %sSeja bem-vindo!\n", nome);

    return 0;
}