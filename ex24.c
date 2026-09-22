#include <stdio.h>

int main() {

    // Declara uma variável para armazenar o número
    int n;

    // Lê um número digitado pelo usuário
    scanf("%d", &n);

    // Verifica se o número é divisível por 2
    if (n % 2 == 0) {
        // Se o resto da divisão for 0, o número é par
        printf("par");
    } else {
        // Caso contrário, o número é ímpar
        printf("impar");
    }

    return 0;
}