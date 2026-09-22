/* 
* Aluno: Pedro Gomes
* Exercicio: 30
* Descricao: divisão com cast.
* Data: 22/09/2026
*/
#include <stdio.h>

int main() {
    int numero1, numero2;
    float resultado;

    printf("Digite o primeiro numero: ");
    scanf("%d", &numero1);

    printf("Digite o segundo numero: ");
    scanf("%d", &numero2);

    resultado = (float) numero1 / numero2;

    printf("Resultado: %.2f\n", resultado);

    return 0;
}