/* 
* Aluno: Pedro Gomes
* Exercicio: 37
* Descricao: formula com math.
* Data: 22/09/2026
*/

#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c, x;
    float delta;

    printf("Digite o valor de a: ");
    scanf("%f", &a);

    printf("Digite o valor de b: ");
    scanf("%f", &b);

    printf("Digite o valor de c: ");
    scanf("%f", &c);

    delta = b * b - 4 * a * c;

    if (a == 0) {
        printf("O valor de 'a' nao pode ser zero.\n");
    }
    else if (delta < 0) {
        printf("Nao existe raiz real.\n");
    }
    else {
        x = (-b + sqrt(delta)) / (2 * a);

        printf("Valor de x: %.2f\n", x);
    }

    return 0;
}