/* 
* Aluno: Pedro Gomes
* Exercicio: 34
* Descricao: constante pi.
* Data: 22/09/2026
*/

#include <stdio.h>

#define PI 3.14159

int main() {
    float raio, area;

    printf("Digite o raio: ");
    scanf("%f", &raio);

    area = PI * raio * raio;

    printf("Area do circulo: %.2f\n", area);

    return 0;
}