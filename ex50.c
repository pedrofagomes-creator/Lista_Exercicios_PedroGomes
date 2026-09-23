/* 
* Aluno: Pedro Gomes
* Exercicio: 50
* Descricao: imc.
* Data: 22/09/2026
*/

#include <stdio.h>

int main() {
    float peso, altura, imc;

    printf("Digite seu peso em kg: ");
    scanf("%f", &peso);

    printf("Digite sua altura em metros: ");
    scanf("%f", &altura);

    imc = peso / (altura * altura);

    printf("IMC: %.2f\n", imc);

    if (imc < 18.5) {
        printf("Abaixo do peso\n");
    }
    else if (imc < 25) {
        printf("Peso normal\n");
    }
    else if (imc < 30) {
        printf("Sobrepeso\n");
    }
    else {
        printf("Obesidade\n");
    }

    return 0;
}