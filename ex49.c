/* 
* Aluno: Pedro Gomes
* Exercicio: 49
* Descricao: nota para o conceito.
* Data: 22/09/2026
*/


#include <stdio.h>

int main() {
    int nota;

    printf("Digite a nota de 0 a 100: ");
    scanf("%d", &nota);

    if (nota >= 90) {
        printf("Conceito A\n");
    }
    else if (nota >= 80) {
        printf("Conceito B\n");
    }
    else if (nota >= 70) {
        printf("Conceito C\n");
    }
    else if (nota >= 60) {
        printf("Conceito D\n");
    }
    else {
        printf("Conceito F\n");
    }

    return 0;
}