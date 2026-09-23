/* 
* Aluno: Pedro Gomes
* Exercicio: 46
* Descricao: Fahrenheit para Celsius.
* Data: 22/09/2026
*/
#include <stdio.h>

int main() {
    float fahrenheit, celsius;

    printf("Digite a temperatura em Fahrenheit: ");
    scanf("%f", &fahrenheit);

    celsius = (fahrenheit - 32) * 5 / 9;

    printf("Temperatura em Celsius: %.2f\n", celsius);

    return 0;
}