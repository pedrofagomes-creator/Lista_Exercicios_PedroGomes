/* 
* Aluno: Pedro Gomes
* Exercicio: 47
* Descricao: aumento de salário.
* Data: 22/09/2026
*/

#include <stdio.h>

int main() {
    float salario, novoSalario;

    printf("Digite o salario: ");
    scanf("%f", &salario);

    if (salario < 1000) {
        novoSalario = salario * 1.20;
    }
    else if (salario <= 2000) {
        novoSalario = salario * 1.10;
    }
    else {
        novoSalario = salario * 1.05;
    }

    printf("Novo salario: R$ %.2f\n", novoSalario);

    return 0;
}