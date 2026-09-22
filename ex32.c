/* 
* Aluno: Pedro Gomes
* Exercicio: 32
* Descricao: troca de valores usando ponteiros.
* Data: 22/09/2026
*/

#include <stdio.h>

void trocarValores(int *a, int *b) {
    int temp;

    temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int x, y;

    printf("Digite o primeiro numero: ");
    scanf("%d", &x);

    printf("Digite o segundo numero: ");
    scanf("%d", &y);

    printf("Antes da troca: x = %d, y = %d\n", x, y);

    trocarValores(&x, &y);

    printf("Depois da troca: x = %d, y = %d\n", x, y);

    return 0;
}