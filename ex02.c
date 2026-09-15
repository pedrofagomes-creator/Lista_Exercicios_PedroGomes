#include <stdio.h>

int main() {
    int N;
    int a = 1, b = 1, proximo;

    printf("Digite a quantidade de termos: ");
    scanf("%d", &N);

    printf("Sequencia: ");

    for (int i = 1; i <= N; i++) {
        printf("%d", a);

        if (i < N) {
            printf(", ");
        }

        proximo = a + b;
        a = b;
        b = proximo;
    }

    printf("\n");

    printf("Padrao: cada termo e a soma dos dois termos anteriores.\n");

    return 0;
}