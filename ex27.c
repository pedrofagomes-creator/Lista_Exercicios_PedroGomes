/* 
* Aluno: Pedro Gomes
* Exercicio: 27
* Descricao: tipos de variáveis.
* Data: 22/09/2026
*/

#include <stdio.h>

int main() {
    int numero;
    double decimal;
    char caractere;
    char texto[100];

    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    printf("Digite um numero decimal: ");
    scanf("%lf", &decimal);

    printf("Digite um caractere: ");
    scanf(" %c", &caractere);

    printf("Digite uma string: ");
    scanf("%99s", texto);

    printf("\nValores digitados:\n");
    printf("Inteiro: %d\n", numero);
    printf("Decimal: %.2lf\n", decimal);
    printf("Caractere: %c\n", caractere);
    printf("String: %s\n", texto);

    return 0;
}