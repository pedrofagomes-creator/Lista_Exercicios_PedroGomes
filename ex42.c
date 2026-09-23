/* 
* Aluno: Pedro Gomes
* Exercicio: 42
* Descricao: primeiro digito verificador de CPF.
* Data: 22/09/2026
*/

#include <stdio.h>

int main() {
    int cpf;
    int digitos[9];
    int soma = 0;
    int resto;
    int digito;

    printf("Digite os 9 primeiros digitos do CPF: ");
    scanf("%d", &cpf);

    // Separa os 9 digitos
    for (int i = 8; i >= 0; i--) {
        digitos[i] = cpf % 10;
        cpf = cpf / 10;
    }

    // Calcula a soma usando os pesos 10, 9, 8, ..., 2
    for (int i = 0; i < 9; i++) {
        soma += digitos[i] * (10 - i);
    }

    // Calcula o primeiro digito verificador
    resto = soma % 11;

    if (resto < 2) {
        digito = 0;
    } else {
        digito = 11 - resto;
    }

    printf("Primeiro digito verificador: %d\n", digito);

    return 0;
}