/* 
* Aluno: Pedro Gomes
* Exercicio: 41
* Descricao: verificador de letra maiuscula.
* Data: 22/09/2026
*/

#include <stdio.h>

int main() {
    char c;

    printf("Digite um caractere: ");
    scanf("%c", &c);

    if (c >= 'a' && c <= 'z') {
        printf("E uma letra minuscula.\n");
    } else {
        printf("Nao e uma letra minuscula.\n");
    }

    return 0;
}