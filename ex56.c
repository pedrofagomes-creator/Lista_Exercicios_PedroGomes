/* 
* Aluno: Pedro Gomes
* Exercicio: 56
* Descricao: sistema de login.
* Data: 22/09/2026
*/

#include <stdio.h>
#include <string.h>

int main() {
    char usuario[50];
    char senha[50];

    printf("Digite o nome de usuario: ");
    scanf("%49s", usuario);

    printf("Digite a senha: ");
    scanf("%49s", senha);

    if (strcmp(usuario, "admin") == 0 && strcmp(senha, "1234") == 0) {
        printf("Acesso concedido!\n");
    }
    else {
        printf("Acesso negado!\n");
    }

    return 0;
}