/* 
* Aluno: Pedro Gomes
* Exercicio: 28
* Descricao: area e perimetro do circulo.
* Data: 22/09/2026
*/

#include <stdio.h>
#include <math.h>

int main() {
    float raio, area,perimetro;

    printf("Digite o raio do circulo: ");
    scanf("%f", &raio);

    area = M_PI * raio * raio;
    perimetro = 2 * M_PI * raio;

    printf("Area: %.2f\n", area);
    printf("Perimetro: %.2f\n", perimetro);

    return 0;
}